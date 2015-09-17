using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Practica2{
    class Compozitor : Person    {
        public string nazv1;
        public string janr1;
        public string date2;
        public string voice1;
        
        public Compozitor() { }

        public void setnazv1(string nazv1){
            this.nazv1 = nazv1;
        }
        public string getnazv1(){
            return nazv1;
        }
        public void setjanr1(string janr1)
        {
            this.janr1 = janr1;
        }
        public string getjanr1()
        {
            return janr1;
        }
        public void setdate2(string date2)
        {
            this.date2 = date2;
        }
        public string getdate2()
        {
            return date2;
        }
        public void setvoice1(string voice1)
        {
            this.voice1 = voice1;
        }
        public string getvoice1()
        {
            return voice1;
        }
    }
}
