import { KafkaProducer } from "./KafkaProducer";
import { IRobotMessage } from "./IRobotMessage";
import { Topics } from "./Topics";

class App
{
    private myKafkaProducer: KafkaProducer = new KafkaProducer();

    constructor()
    {

    }

    /**
     * Initialize the application. 
     * Testing the messaging test to Kafka
     */
    public async bootStrapApp(): Promise<void>
    {
        const message01: IRobotMessage = { 
            description: "Messagem aguardando novo comando=>WAIT",
            command: "STGHTRTOP001PNL001EXO0010000000WT15424035453f61da514e6a980681c7539f45b59f97",
            when: new Date()
         };

         const message02: IRobotMessage = { 
            description: "Mensagem para avançar em velocidade média 2 passos=>CMD",
            command: "STGHTRTOP001PNL001EXO001FW50020WT154242812062469c5a495d1354f24ecbbca88257db",
            when: new Date()
         };
        
         const message03: IRobotMessage = { 
            description: "Messagem avançando em velocidade média=>RUN",
            command: "STGHTRTOP001PNL001EXO001FW50020RN154245903181c2d133f1beedb28d8544f5faf2ee7e",
            when: new Date()
         };

         const message04: IRobotMessage = { 
            description: "Messagem para avançar realizado em velocidade média=>DONE",
            command: "STGHTRTOP001PNL001EXO001FW50020DN15425075245c914d45e7d2f46f4f313f41a6295c49",
            when: new Date()
         };

         const message05: IRobotMessage = { 
            description: "Messagem aguardando novo comando=>WAIT",
            command: "STGHTRTOP001PNL001EXO0010000000WT1542523449c6313cbb64f099e548e93cce5b6e4ddd",
            when: new Date()
         };

        await this.myKafkaProducer.sendRobotMessage(message01, Topics.MessageToRobot);
        await this.myKafkaProducer.sendRobotMessage(message02, Topics.MessageToRobot);
        await this.myKafkaProducer.sendRobotMessage(message03, Topics.MessageToRobot);
        await this.myKafkaProducer.sendRobotMessage(message04, Topics.MessageToRobot);
        await this.myKafkaProducer.sendRobotMessage(message05, Topics.MessageToRobot);

        console.log("All sent...");
        
    }
}

export default new App();
