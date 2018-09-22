import { IRobotMessage } from './IRobotMessage';
import { HighLevelProducer, KafkaClient } from 'kafka-node';
import { IKafkaPayload } from './IKafkaPayload';

export class KafkaProducer
{
    private myConnectionReady:boolean = false;
    private myHighLevelProducer: HighLevelProducer;

    private myKafkaClient: KafkaClient = new KafkaClient({kafkaHost: "localhost:9092"});

    constructor()
    {
        this.myHighLevelProducer = new HighLevelProducer(this.myKafkaClient);

        /* DELEGATES */
        this.myKafkaClient.on('error', (err)=>{
            console.log(`Error on kafka client: ${err}`);
        });

        this.myHighLevelProducer.on('error', (err)=>{
            console.log(`Error on kafka producer: ${err}`);
        });

        this.myHighLevelProducer.on('ready', ()=>{
            this.myConnectionReady = true;
        });
    }
    /**
     * Send a given message to a Kafka topic
     * @param message The message to be sent.
     * @param topic The topic where to sent message into.
     */
    public async sendRobotMessage(message:IRobotMessage, topic: string):Promise<void>
    {
        const tries: number = 10;
        let i: number = 0;

        while( i <= tries && !this.myConnectionReady)
        {
            console.log("The Kafka Connection is not ready. Trying again in 1 second.");
            i++;
            await this.delay(1000);
        }

        if(!this.myConnectionReady)
        {
            console.log("The Kafka Connection is not ready. Please try again later");
            return;
        }

        await this.myHighLevelProducer.send(this.prepareKafkaPayload(message, topic), (error, result)=>{
            if (error) {
                console.error(error);
            } else {
                console.log('result: ', result)
            }
        });
    }

    private delay(ms: number) {
        return new Promise( resolve => setTimeout(resolve, ms) );
    }

    private prepareKafkaPayload(message:IRobotMessage, topic: string): Array<IKafkaPayload>
    {
        console.log(topic);
        return [{
            messages: JSON.stringify(message),
            topic: topic,
            attributes: 1 // USE GZIP compression.
        }];
    }
}