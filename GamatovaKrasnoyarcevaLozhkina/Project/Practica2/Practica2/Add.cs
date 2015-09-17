using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Practica2{
    public partial class Add : Form{
        Person chel = new Person();
        List<Person> list = new List<Person>();
        Spiski sp = new Spiski();
        List<string> mas = new List<string>();
        int index;

        public Add(int a)
        {
            InitializeComponent();
            index = a;
            
        }        

        private void button1_Click(object sender, EventArgs e){
            if (textBox1.Text == "") MessageBox.Show("Вы не заполнили поле 'Введите ФИО'! Заполните его.", "Внимание", MessageBoxButtons.OK);
            else if (radioButton1.Checked==false && radioButton2.Checked==false) MessageBox.Show("Вы не выбрали пол!", "Внимание", MessageBoxButtons.OK);
            else if (comboBox1.Text == "певец" || comboBox1.Text == "поэт" || comboBox1.Text == "композитор")
            {
                if (sp.getlist() != null) list = sp.getlist();
                chel.setname(textBox1.Text);
                if (radioButton1.Checked) chel.setpol(radioButton1.Text);
                else if (radioButton2.Checked) chel.setpol(radioButton2.Text);
                chel.setdate(dateTimePicker1.Text);
                chel.setprof(comboBox1.Text);                
                if (index == -1)
                { 
                    list.Add(new Person() { name = chel.getname(), pol = chel.getpol(), date = chel.getdate(), prof = chel.getprof() });
                    
                }
                else
                {
                    list[index]=new Person() { name = chel.getname(), pol = chel.getpol(), date = chel.getdate(), prof = chel.getprof() };
                }
                sp.setlist(list);
                switch (comboBox1.SelectedIndex)
                {
                    case 0: { FSinger sng = new FSinger(index, chel.getname(), chel.getpol(), chel.getdate(), chel.getprof()); sng.ShowDialog(); }; break;
                    case 1: { FPoet sng = new FPoet(index, chel.getname(), chel.getpol(), chel.getdate(), chel.getprof()); sng.ShowDialog(); }; break;
                    case 2: { FCompozitor sng = new FCompozitor(index, chel.getname(), chel.getpol(), chel.getdate(), chel.getprof()); sng.ShowDialog(); }; break;
                    default: break;
                }
                Close();
            }
            else MessageBox.Show("Вы не выбрали профессию!", "Внимание", MessageBoxButtons.OK);            
        }    

        private void Add_Load(object sender, EventArgs e){
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            if (index != -1)
            {
                if (sp.getlist() != null) list = sp.getlist();
                foreach (Person p in list)
                {
                    mas.Add(p.name);
                    mas.Add(p.pol);
                    mas.Add(p.date);
                    mas.Add(p.prof);
                }
                textBox1.Text = mas[index * 4];
                if (mas[index * 4 + 1] == "муж") radioButton1.Checked = true;
                else if (mas[index * 4 + 1] == "жен") radioButton2.Checked = true;
                dateTimePicker1.Text = mas[index * 4 + 2];
                comboBox1.Text = mas[index * 4 + 3];
                button1.Text = "Изменить";                
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
