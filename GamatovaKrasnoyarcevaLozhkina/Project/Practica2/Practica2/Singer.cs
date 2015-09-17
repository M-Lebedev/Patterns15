using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace Practica2{
    class Singer : Person{
        public string voice;

        public Singer() { }

        public void setvoice(string voice){
            this.voice = voice;
        }
        public string getvoice(){
            return voice;
        }
    }
}
