using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Practica2{
    class Poet : Person    {
        public string nazv;
        public string janr;
        public string date1;

        public Poet() { }

        public void setnazv(string nazv)
        {
            this.nazv = nazv;
        }
        public string getnazv()
        {
            return nazv;
        }
        public void setjanr(string janr)
        {
            this.janr = janr;
        }
        public string getjanr()
        {
            return janr;
        }
        public void setdate1(string date1)
        {
            this.date1 = date1;
        }
        public string getdate1()
        {
            return date1;
        }
    }
}
