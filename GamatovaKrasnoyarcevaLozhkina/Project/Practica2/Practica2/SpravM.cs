//нарисовка таблицы (http://msdn.microsoft.com/ru-ru/library/system.windows.forms.datagridview.multiselect(v=vs.110).aspx)

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Practica2{
    public partial class SpravM : Form{
        int LastClick;
        public SpravM(){
            InitializeComponent();
        }
        Spiski sp = new Spiski();
        Person chel = new Person();
        Singer smel = new Singer();
        Poet pmel = new Poet();
        Compozitor cmel = new Compozitor();
        List<Person> list = new List<Person>();
        List<Singer> slist = new List<Singer>();
        List<Poet> plist = new List<Poet>();
        List<Compozitor> clist = new List<Compozitor>();

        private void SpravM_Load(object sender, EventArgs e){
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            LastClick = -1;
            //создание таблицы
            this.Controls.Add(dataGridView1);
            dataGridView1.ColumnCount = 4;
            dataGridView1.RowCount = 15;
            dataGridView1.ColumnHeadersVisible = true;
            DataGridViewCellStyle style = dataGridView1.ColumnHeadersDefaultCellStyle;
            style.BackColor = Color.LimeGreen;
            style.ForeColor = Color.White;
            style.Font = new Font(dataGridView1.Font, FontStyle.Bold);
            dataGridView1.ColumnHeadersDefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.EditMode = DataGridViewEditMode.EditOnEnter;
            dataGridView1.Name = "dataGridView1";
            dataGridView1.Location = new Point(12, 48);
            dataGridView1.Size = new Size(777, 227);
            dataGridView1.AutoSizeRowsMode = DataGridViewAutoSizeRowsMode.DisplayedCellsExceptHeaders;
            dataGridView1.ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle.Raised;
            dataGridView1.CellBorderStyle = DataGridViewCellBorderStyle.Single;
            dataGridView1.GridColor = SystemColors.ActiveBorder;
            dataGridView1.RowHeadersVisible = false;
            dataGridView1.Columns[0].HeaderText = "ФИО";
            dataGridView1.Columns[0].Width = 287;
            dataGridView1.Columns[1].HeaderText = "Пол";
            dataGridView1.Columns[1].Width = 110;
            dataGridView1.Columns[2].HeaderText = "Дата рождения";
            dataGridView1.Columns[2].Width = 180;
            dataGridView1.Columns[3].HeaderText = "Профессия";
            dataGridView1.Columns[3].Width = 180;
            for (int i=0; i<4; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            dataGridView1.MultiSelect = false;
            dataGridView1.BackgroundColor = Color.White;
            //
        }

        //кнопка "добавить"
        private void button1_Click(object sender, EventArgs e){
            Add add = new Add(-1);
            add.ShowDialog();
            list = sp.getlist();
            dataGridView1.Rows.Clear();
            if (sp.getlist() != null)
                foreach (Person p in list)
                {
                    dataGridView1.Rows.Add(p.name,p.pol,p.date,p.prof);
                }
            dataGridView1.RowCount = 15;
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;
            radioButton5.Checked = false;
            radioButton6.Checked = false;
        }

        //кнопка "изменить"
        private void button2_Click(object sender, EventArgs e)        {
            try
            {
                if (dataGridView1.SelectedCells[0].ColumnIndex != -1)
                    LastClick = dataGridView1.SelectedCells[0].RowIndex;
                else if (dataGridView1.SelectedRows[0].Index != -1)
                    LastClick = dataGridView1.SelectedRows[0].Index;
                Add add = new Add(LastClick);
                add.ShowDialog();
                sp.setlist(list);
                dataGridView1.Rows.Clear();
                if (sp.getlist() != null)
                    foreach (Person p in list)
                    {
                        dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                    }
            }
            catch { }
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;
            radioButton5.Checked = false;
            radioButton6.Checked = false;
        }

        //кнопка "удалить"
        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                if (MessageBox.Show("Вы действительно хотите удалить эту запись?", "Внимание", MessageBoxButtons.YesNo)==DialogResult.Yes)
                {
                    if (dataGridView1.SelectedCells[0].ColumnIndex != -1) LastClick = dataGridView1.SelectedCells[0].RowIndex;
                    else if (dataGridView1.SelectedRows[0].Index != -1) LastClick = dataGridView1.SelectedRows[0].Index;
                    List<string> mas = new List<string>();
                    List<Person> list1 = new List<Person>();
                    list1.Add(list[LastClick]);
                    foreach (Person p in list1)
                    {
                        mas.Add(p.name);
                        mas.Add(p.pol);
                        mas.Add(p.date);
                        mas.Add(p.prof);
                    }
                    if (radioButton1.Checked == true || (radioButton1.Checked == false && radioButton2.Checked == false && radioButton3.Checked == false && radioButton4.Checked == false))
                    {
                        if (mas[3] == "певец")
                        {
                            slist = sp.getslist();
                            for (int i = 0; i < slist.Count; i++)
                                if (slist[i].getname() == mas[0])
                                    slist.RemoveAt(i);
                        }
                        else if (mas[3] == "поэт")
                        {
                            plist = sp.getplist();
                            for (int i = 0; i < plist.Count; i++)
                                if (plist[i].getname() == mas[0])
                                    plist.RemoveAt(i);
                        }
                        else if (mas[3] == "композитор")
                        {
                            clist = sp.getclist();
                            for (int i = 0; i < clist.Count; i++)
                                if (clist[i].getname() == mas[0])
                                    clist.RemoveAt(i);
                        }
                        list.RemoveAt(LastClick);
                        sp.setlist(list);
                        dataGridView1.Rows.Clear();
                        foreach (Person p in list)
                        {
                            dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                        }
                    }
                    else
                    {
                        for (int i = 0; i < list.Count; i++)
                            if (list[i].getname() == mas[0])
                                list.RemoveAt(i);
                        sp.setlist(list);
                        if (radioButton2.Checked == true)
                        {
                            slist.RemoveAt(LastClick);
                            sp.setslist(slist);
                            dataGridView1.Rows.Clear();
                            foreach (Singer p in slist)
                            {
                                dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                            }
                        }
                        else if (radioButton3.Checked == true)
                        {
                            plist.RemoveAt(LastClick);
                            sp.setplist(plist);
                            dataGridView1.Rows.Clear();
                            foreach (Poet p in plist)
                            {
                                dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                            }
                        }
                        else if (radioButton4.Checked == true)
                        {
                            list.RemoveAt(LastClick);
                            sp.setclist(clist);
                            dataGridView1.Rows.Clear();
                            foreach (Compozitor p in clist)
                            {
                                dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                            }
                        }
                    }
                    dataGridView1.RowCount = 15;
                }
            }
            catch { }
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;
            radioButton5.Checked = false;
            radioButton6.Checked = false;
        }

        //показать всех
        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {            
            dataGridView1.Rows.Clear();
            //создание таблицы
            dataGridView1.ColumnCount = 4;
            for (int i = 0; i < 4; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.Columns[0].HeaderText = "ФИО";
            dataGridView1.Columns[0].Width = 287;
            dataGridView1.Columns[1].HeaderText = "Пол";
            dataGridView1.Columns[1].Width = 110;
            dataGridView1.Columns[2].HeaderText = "Дата рождения";
            dataGridView1.Columns[2].Width = 180;
            dataGridView1.Columns[3].HeaderText = "Профессия";
            dataGridView1.Columns[3].Width = 180; 
            //
            if (sp.getlist() != null)
            {
                list = sp.getlist();
                foreach (Person p in list)
                {
                    dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                }
            }
            dataGridView1.RowCount = 15;
        }
        //показать певцов
        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            //создание таблицы
            dataGridView1.ColumnCount = 5;
            for (int i = 0; i < 5; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.Columns[0].HeaderText = "ФИО";
            dataGridView1.Columns[0].Width = 247;
            dataGridView1.Columns[1].HeaderText = "Пол";
            dataGridView1.Columns[1].Width = 100;
            dataGridView1.Columns[2].HeaderText = "Дата рождения";
            dataGridView1.Columns[2].Width = 160;
            dataGridView1.Columns[3].HeaderText = "Профессия";
            dataGridView1.Columns[3].Width = 160;
            dataGridView1.Columns[4].Name = "Голос";
            dataGridView1.Columns[4].Width = 90;            
            //
            if (sp.getslist() != null)
            {
                slist = sp.getslist();                
                foreach (Singer p in slist)
                {
                    dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof, p.voice);
                }
            }
            dataGridView1.RowCount = 15;
        }
        //показать поэтов
        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            //создание таблицы
            dataGridView1.ColumnCount = 7;
            for (int i = 0; i < 7; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.Columns[0].HeaderText = "ФИО";
            dataGridView1.Columns[0].Width = 230;
            dataGridView1.Columns[1].HeaderText = "Пол";
            dataGridView1.Columns[1].Width = 70;
            dataGridView1.Columns[2].HeaderText = "Дата рождения";
            dataGridView1.Columns[2].Width = 140;
            dataGridView1.Columns[3].HeaderText = "Профессия";
            dataGridView1.Columns[3].Width = 120;
            dataGridView1.Columns[4].Name = "Название произведения";
            dataGridView1.Columns[4].Width = 210;
            dataGridView1.Columns[5].Name = "Жанр";
            dataGridView1.Columns[5].Width = 120;
            dataGridView1.Columns[6].Name = "Дата создания";
            dataGridView1.Columns[6].Width = 140;            
            //
            if (sp.getplist() != null)
            {
                plist = sp.getplist();                
                foreach (Poet p in plist)
                {
                    dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof, p.nazv, p.janr, p.date1);
                }
            }
            dataGridView1.RowCount = 15;
        }
        //показать композиторов
        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            //создание таблицы
            dataGridView1.ColumnCount = 8;
            for (int i = 0; i < 8; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.Columns[0].HeaderText = "ФИО";
            dataGridView1.Columns[0].Width = 230;
            dataGridView1.Columns[1].HeaderText = "Пол";
            dataGridView1.Columns[1].Width = 70;
            dataGridView1.Columns[2].HeaderText = "Дата рождения";
            dataGridView1.Columns[2].Width = 140;
            dataGridView1.Columns[3].HeaderText = "Профессия";
            dataGridView1.Columns[3].Width = 120;
            dataGridView1.Columns[4].Name = "Название произведения";
            dataGridView1.Columns[4].Width = 210;
            dataGridView1.Columns[5].Name = "Жанр";
            dataGridView1.Columns[5].Width = 120;
            dataGridView1.Columns[6].Name = "Голос";
            dataGridView1.Columns[6].Width = 90;
            dataGridView1.Columns[7].Name = "Дата исполнения";
            dataGridView1.Columns[7].Width = 140;            
            //
            if (sp.getclist() != null)
            {
                clist = sp.getclist();                
                foreach (Compozitor p in clist)
                {
                    dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof, p.nazv1, p.janr1, p.voice1, p.date2);
                }
            }
            dataGridView1.RowCount = 15;        
        }

        //выход
        private void button4_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Вы действительно хотите выйти?", "Внимание", MessageBoxButtons.YesNo) == DialogResult.Yes)
                this.Close();
        }

        //сортировка ФИО
        private void radioButton8_CheckedChanged(object sender, EventArgs e)
        {
            if (sp.getlist() != null)
            {
                dataGridView1.Rows.Clear();
                if (radioButton2.Checked == true)
                {
                    slist = sp.getslist();
                    slist.Sort(delegate(Singer s1, Singer s2) { return s1.name.CompareTo(s2.name); });
                    foreach (Singer s in slist)
                    {
                        dataGridView1.Rows.Add(s.name, s.pol, s.date, s.prof, s.voice);
                    }
                }
                else if (radioButton3.Checked == true)
                {
                    plist = sp.getplist();
                    plist.Sort(delegate(Poet pp1, Poet pp2) { return pp1.name.CompareTo(pp2.name); });
                    foreach (Poet pp in plist)
                    {
                        dataGridView1.Rows.Add(pp.name, pp.pol, pp.date, pp.prof, pp.nazv, pp.janr, pp.date1);
                    }
                }
                else if (radioButton4.Checked == true)
                {
                    clist = sp.getclist();
                    clist.Sort(delegate(Compozitor c1, Compozitor c2) { return c1.name.CompareTo(c2.name); });
                    foreach (Compozitor c in clist)
                    {
                        dataGridView1.Rows.Add(c.name, c.pol, c.date, c.prof, c.nazv1, c.janr1, c.voice1, c.date2);
                    }
                }
                else
                {
                    list = sp.getlist();
                    list.Sort(delegate(Person p1, Person p2) { return p1.name.CompareTo(p2.name); });
                    foreach (Person p in list)
                    {
                        dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                    }
                }
                dataGridView1.RowCount = 15;
            }
            //radioButton8.Checked = false;
        }
        //сортировка пола
        private void radioButton7_CheckedChanged(object sender, EventArgs e)
        {
            if (sp.getlist() != null)
            {
                dataGridView1.Rows.Clear();
                if (radioButton2.Checked == true)
                {
                    slist = sp.getslist();
                    slist.Sort(delegate(Singer s1, Singer s2) { return s1.pol.CompareTo(s2.pol); });
                    foreach (Singer s in slist)
                    {
                        dataGridView1.Rows.Add(s.name, s.pol, s.date, s.prof, s.voice);
                    }
                }
                else if (radioButton3.Checked == true)
                {
                    plist = sp.getplist();
                    plist.Sort(delegate(Poet pp1, Poet pp2) { return pp1.pol.CompareTo(pp2.pol); });
                    foreach (Poet pp in plist)
                    {
                        dataGridView1.Rows.Add(pp.name, pp.pol, pp.date, pp.prof, pp.nazv, pp.janr, pp.date1);
                    }
                }
                else if (radioButton4.Checked == true)
                {
                    clist = sp.getclist();
                    clist.Sort(delegate(Compozitor c1, Compozitor c2) { return c1.pol.CompareTo(c2.pol); });
                    foreach (Compozitor c in clist)
                    {
                        dataGridView1.Rows.Add(c.name, c.pol, c.date, c.prof, c.nazv1, c.janr1, c.voice1, c.date2);
                    }
                }
                else
                {
                    list = sp.getlist();
                    list.Sort(delegate(Person p1, Person p2) { return p1.pol.CompareTo(p2.pol); });
                    foreach (Person p in list)
                    {
                        dataGridView1.Rows.Add(p.name, p.pol, p.date, p.prof);
                    }
                }
                dataGridView1.RowCount = 15;
            }
            //radioButton7.Checked = false;
        }
        //показать произведения
        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            dataGridView1.Rows.Clear();
            //создание таблицы            
            dataGridView1.ColumnCount = 4;
            for (int i = 0; i < 4; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridView1.Columns[0].HeaderText= "Название произведения";
            dataGridView1.Columns[0].Width = 287;
            dataGridView1.Columns[1].HeaderText = "Жанр";
            dataGridView1.Columns[1].Width = 140;
            dataGridView1.Columns[2].HeaderText = "Голос";
            dataGridView1.Columns[2].Width = 130;
            dataGridView1.Columns[3].HeaderText = "Дата создания";
            dataGridView1.Columns[3].Width = 200;
            //
            if (sp.getplist() != null)
            {
                plist = sp.getplist();
                foreach (Poet p in plist)
                {
                    dataGridView1.Rows.Add(p.nazv, p.janr, "", p.date1);
                }
            }
            if (sp.getclist() != null)
            {
                clist = sp.getclist();
                foreach (Compozitor c in clist)
                {
                    dataGridView1.Rows.Add(c.nazv1, c.janr1, c.voice1, c.date2);
                }
            }
            dataGridView1.RowCount = 15;
        }
        //список исполнителей для песни
        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {
            if (sp.getclist() != null)
            {
                dataGridView1.Rows.Clear();
                //создание таблицы            
                dataGridView1.ColumnCount = 3;
                for (int i = 0; i < 3; i++) dataGridView1.Columns[i].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
                dataGridView1.Columns[0].HeaderText = "Название произведения";
                dataGridView1.Columns[0].Width = 284;
                dataGridView1.Columns[1].HeaderText = "ФИО";
                dataGridView1.Columns[1].Width = 300;
                dataGridView1.Columns[2].HeaderText = "Дата исполнения";
                dataGridView1.Columns[2].Width = 170;
                //
                List<Compozitor> clist1 = new List<Compozitor>();
                    clist1 = sp.getclist();
                    foreach (Compozitor c in clist1)
                    {
                        if (sp.getslist() != null)
                        {
                            slist = sp.getslist();
                            foreach (Singer s in slist)
                            {
                                if (c.voice1 == s.voice)
                                    dataGridView1.Rows.Add(c.nazv1, s.name, c.date2);
                            }
                        }
                        else dataGridView1.Rows.Add(c.nazv1, "певцов нет", c.date2);
                    }
                    dataGridView1.RowCount = 15; 
            }
            else MessageBox.Show("Еще нет ни одной записи!", "Внимание", MessageBoxButtons.OK);
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
        
    }
}
