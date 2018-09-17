using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using MindStorm;

namespace UnitTestMindStorm
{
    [TestClass]
    public class UnitTestMindStorm
    {
        [TestMethod]
        public void Testbutton1_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button1_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button1_Click(_senderTest,_eventTest);
        }

        [TestMethod]
        public void Testbutton2_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button2_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button2_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testbutton3_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button3_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button3_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void TestcomboBox2_SelectedIndexChanged()
        {
            //Tipo de teste: Caixa preta
            //testando o método comboBox2_SelectedIndexChanged com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.comboBox2_SelectedIndexChanged(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testbutton4_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button4_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button4_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testbutton5_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button5_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button5_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testbutton6_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button6_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button6_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testbutton7_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button7_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button7_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testbutton8_Click()
        {
            //Tipo de teste: Caixa preta
            //testando o método button8_Click com parâmetros válidos
            Form1 _form1Test = new Form1();
            Object _senderTest = new Object();
            EventArgs _eventTest = new EventArgs();

            _form1Test.button8_Click(_senderTest, _eventTest);
        }

        [TestMethod]
        public void Testlog()
        {
            //Tipo de teste: Caixa preta
            //testando o método log com parâmetros válidos
            Form1 _form1Test = new Form1();

            _form1Test.log("TesteUnitarioMindStorm");
        }

        [TestMethod]
        public void TestenviaGraylog()
        {
            //Tipo de teste: Caixa preta
            //testando o método enviaGraylog com parâmetros válidos
            Form1 _form1Test = new Form1();

            _form1Test.enviaGraylog(10,12,40,50);
        }
    }
}
