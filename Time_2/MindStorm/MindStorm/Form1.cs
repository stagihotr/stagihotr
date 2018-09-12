using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Lego.Ev3.Core;
using Lego.Ev3.Desktop;
using KafkaNet;
using KafkaNet.Model;
using KafkaNet.Protocol;

namespace MindStorm
{
    public partial class Form1 : Form
    {
        Brick _brick;
        OutputPort porta = OutputPort.All;
        KafkaOptions options;
        BrokerRouter router;
        KafkaNet.Producer client;

        public Form1()
        {


            InitializeComponent();
            foreach (var item in SerialPort.GetPortNames())
            {
                comboBox1.Items.Add(item);
            }
            comboBox2.SelectedIndex = 0;


            /* options = new KafkaOptions(new Uri("http://stampsnet.hashtagsource.com:9092"));
            router = new BrokerRouter(options);
            client = new KafkaNet.Producer(router);
            var consumer = new Consumer(new ConsumerOptions("US83a", router));
            foreach (var message in consumer.Consume())
            {
                Console.WriteLine("Response: P{0},O{1} : {2}",
                    message.Meta.PartitionId, message.Meta.Offset, message.Value);
                    message.Meta.PartitionId, message.Meta.Offset, message.Value);
            }*/
        }

        private void enviaGraylog(int _c1, int _c2, int _c3, int _c4)
        {
            string s = @"{""version"":""1.1"",""host"":""ArduinoUS83a"",""short_message"":""sensor de presenca 83a""," + @"""_corredor1"":" + _c1.ToString() + "," + @"""_corredor2"":" + _c2.ToString() + "," + @"""_corredor3"":" + _c3.ToString() + "," + @"""_corredor4"":" + _c4.ToString() + "}";
            client.SendMessageAsync("US83a", new[] { new KafkaNet.Protocol.Message(s) });
        }

        private void log(string text)
        {
            textBox3.AppendText(DateTime.Now.ToString("h:mm:ss ") + text + Environment.NewLine);
        }

        private async void button1_Click(object sender, EventArgs e)
        {
            try
            {
                button1.Enabled = false;
                _brick = new Brick(new BluetoothCommunication(comboBox1.SelectedItem.ToString()));
                await _brick.ConnectAsync();
                comboBox1.Enabled = false;
                button3.Enabled = false;
                button2.Enabled = true;
                button4.Enabled = true;
                button5.Enabled = true;
                button6.Enabled = true;
                comboBox2.Enabled = true;
                textBox1.Enabled = true;
                textBox2.Enabled = true;
                log("Conectado!");
            }
            catch (Exception Ex)
            {
                button1.Enabled = true;
                MessageBox.Show("Erro ao conectar:" + Ex.Message);
            }
        }

        private async void button2_Click(object sender, EventArgs e)
        {
            log("Beep");
            await _brick.DirectCommand.PlayToneAsync(100, 1000, 300);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            comboBox1.Items.Clear();
            foreach (var item in SerialPort.GetPortNames())
            {
                comboBox1.Items.Add(item);
            }
        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch (comboBox2.SelectedIndex)
            {
                case 0:
                    porta = OutputPort.All;
                    break;
                case 1:
                    porta = OutputPort.A;
                    break;
                case 2:
                    porta = OutputPort.B;
                    break;
                case 3:
                    porta = OutputPort.C;
                    break;
                case 4:
                    porta = OutputPort.D;
                    break;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            log("Movendo para Cima | Velocidade: " + textBox1.Text + " | Tempo: " + textBox2.Text + " ms");
            _brick.DirectCommand.SetMotorPolarity(porta, Polarity.Forward);
            _brick.DirectCommand.TurnMotorAtSpeedForTimeAsync(porta, Convert.ToInt32(textBox1.Text), Convert.ToUInt32(textBox2.Text), false);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            log("Movendo para Baixo | Velocidade: " + textBox1.Text + " | Tempo: " + textBox2.Text + " ms");
            _brick.DirectCommand.SetMotorPolarity(porta, Polarity.Backward);
            _brick.DirectCommand.TurnMotorAtSpeedForTimeAsync(porta, Convert.ToInt32(textBox1.Text), Convert.ToUInt32(textBox2.Text), false);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            _brick.DirectCommand.StopMotorAsync(OutputPort.All, false);
        }
    }
}
