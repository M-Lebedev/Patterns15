using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Practica2{
    class Spiski{
        static List<Person> list;
        static List<Singer> slist;
        static List<Poet> plist;
        static List<Compozitor> clist;

        public void setlist(List<Person> list1) {
            list = list1;
        }
        public List<Person> getlist(){          
            return list;
        }

        public void setslist(List<Singer> slist1)
        {
            slist = slist1;
        }
        public List<Singer> getslist()
        {
            return slist;
        }

        public void setplist(List<Poet> plist1)
        {
            plist = plist1;
        }
        public List<Poet> getplist()
        {
            return plist;
        }

        public void setclist(List<Compozitor> clist1)
        {
            clist = clist1;
        }
        public List<Compozitor> getclist()
        {
            return clist;
        }
    }
}
