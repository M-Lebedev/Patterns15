using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Practica2{
    public partial class FPoet : Form    {
        Poet mel = new Poet();
        List<Poet> plist = new List<Poet>();
        Spiski sp = new Spiski();
        int index;

        public FPoet(int ab, String a, String b, String c, String d)
        {
            InitializeComponent();
            index = ab;
            mel.setname(a);
            mel.setpol(b);
            mel.setdate(c);
            mel.setprof(d);           
        }
        

        private void FPoet_Load(object sender, EventArgs e)
        {
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            comboBox1.Text = "выберите";
            if (index != -1) button1.Text = "Изменить";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "") MessageBox.Show("Вы не заполнили поле 'Введите название произведения'! Заполните его.", "Внимание", MessageBoxButtons.OK);
            else if (comboBox1.Text == "") MessageBox.Show("Вы не выбрали жанр! Заполните его.", "Внимание", MessageBoxButtons.OK);
            else
            {
                if (sp.getplist() != null) plist = sp.getplist();
                mel.setnazv(textBox1.Text);
                mel.setjanr(comboBox1.Text);
                mel.setdate1(dateTimePicker1.Text);
                if (index == -1)
                {
                    plist.Add(new Poet() { name = mel.getname(), pol = mel.getpol(), date = mel.getdate(), prof = mel.getprof(), nazv = mel.getnazv(), janr = mel.getjanr(), date1 = mel.getdate1() });

                }
                else
                {
                    plist[index] = new Poet() { name = mel.getname(), pol = mel.getpol(), date = mel.getdate(), prof = mel.getprof(), nazv = mel.getnazv(), janr = mel.getjanr(), date1 = mel.getdate1() };
                }

                sp.setplist(plist);
                Close();
            }
        }
    }
}
