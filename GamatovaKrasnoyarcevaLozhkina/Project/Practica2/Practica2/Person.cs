using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Practica2{
    class Person{
        public string name;
        public string pol;
        public string date;
        public string prof;
        
        public Person() { }

        public void setname(string name){
            this.name = name;
        }
        public string getname(){
            return name;
        }
        public void setpol(string pol)
        {
            this.pol = pol;
        }
        public string getpol()
        {
            return pol;
        }
        public void setdate(string date)
        {
            this.date = date;
        }
        public string getdate()
        {
            return date;
        }
        public void setprof(string prof)
        {
            this.prof = prof;
        }
        public string getprof()
        {
            return prof;
        }
    }
}
