using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Practica2{
    public partial class Form1 : Form    {
        public Form1(){
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e){
            SpravM sp = new SpravM();
            sp.ShowDialog();
            Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
        }
    }
}
