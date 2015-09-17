using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Practica2;

namespace Practica2{
    public partial class FSinger : Form{
        Singer mel = new Singer();
        List<Singer> slist = new List<Singer>();
        Spiski sp = new Spiski();
        int index;

        public FSinger(int ab, String a,String b,String c,String d){
            InitializeComponent();
            index = ab;
            mel.setname(a);
            mel.setpol(b);
            mel.setdate(c);
            mel.setprof(d);           
        }
        
        private void FSinger_Load(object sender, EventArgs e){
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            if (mel.getpol() == "муж") comboBox1.Items.AddRange(new string[] {"бас","баритон","тенор"});
            else if (mel.getpol() == "жен") comboBox1.Items.AddRange(new string[] { "контральто", "сопрано" });
            comboBox1.Text = "выберите";
            if (index != -1) button1.Text = "Изменить";
        }

        private void button1_Click(object sender, EventArgs e)   {
            if (comboBox1.Text == "бас" || comboBox1.Text == "баритон" || comboBox1.Text == "тенор" || comboBox1.Text == "сопрано" || comboBox1.Text == "контральто")
            {
                if (sp.getslist() != null) slist = sp.getslist();
                mel.setvoice(comboBox1.Text);
                if (index == -1)
                {
                    slist.Add(new Singer() { name = mel.getname(), pol = mel.getpol(), date = mel.getdate(), prof = mel.getprof(), voice = mel.getvoice() });

                }
                else
                {
                    slist[index] = new Singer() { name = mel.getname(), pol = mel.getpol(), date = mel.getdate(), prof = mel.getprof(), voice = mel.getvoice() };
                }
                sp.setslist(slist);
                Close();
            }
            else MessageBox.Show("Вы не выбрали голос!", "Внимание", MessageBoxButtons.OK);
        }
    }
}
