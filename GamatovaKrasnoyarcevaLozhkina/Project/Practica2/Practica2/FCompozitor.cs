using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Practica2
{
    public partial class FCompozitor : Form    {
        Compozitor mel = new Compozitor();
        List<Compozitor> clist = new List<Compozitor>();
        Spiski sp = new Spiski();
        int index;

        public FCompozitor(int ab, String a, String b, String c, String d){
            InitializeComponent();
            index = ab;
            mel.setname(a);
            mel.setpol(b);
            mel.setdate(c);
            mel.setprof(d);           
        }

        private void FCompozitor_Load(object sender, EventArgs e)
        {
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            comboBox1.Text = "выберите";
            comboBox2.Text = "выберите";
            if (index != -1) button1.Text = "Изменить";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "") MessageBox.Show("Вы не заполнили поле 'Введите название произведения'! Заполните его.", "Внимание", MessageBoxButtons.OK);
            else if (comboBox1.Text == "") MessageBox.Show("Вы не выбрали жанр! Заполните его.", "Внимание", MessageBoxButtons.OK);
            else if (comboBox2.Text == "бас" || comboBox2.Text == "баритон" || comboBox2.Text == "тенор" || comboBox2.Text == "сопрано" || comboBox2.Text == "контральто")
            {
                if (sp.getclist() != null) clist = sp.getclist();
                mel.setnazv1(textBox1.Text);
                mel.setjanr1(comboBox1.Text);
                mel.setvoice1(comboBox2.Text);
                mel.setdate2(dateTimePicker1.Text);
                if (index == -1)
                {
                    clist.Add(new Compozitor() { name = mel.getname(), pol = mel.getpol(), date = mel.getdate(), prof = mel.getprof(), nazv1 = mel.getnazv1(), janr1 = mel.getjanr1(), voice1 = mel.getvoice1(), date2 = mel.getdate2() });

                }
                else
                {
                    clist[index] = new Compozitor() { name = mel.getname(), pol = mel.getpol(), date = mel.getdate(), prof = mel.getprof(), nazv1 = mel.getnazv1(), janr1 = mel.getjanr1(), voice1 = mel.getvoice1(), date2 = mel.getdate2() };
                }
                sp.setclist(clist);
                Close();
            }
        }
    }
}
