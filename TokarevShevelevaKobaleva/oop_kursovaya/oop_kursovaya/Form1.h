#pragma once
#include "base.h"
#include "machine.h"
#include "square.h"
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

vector <base *> kompany;
vector <square *> maps;
int russ=0;

namespace oop_kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  играToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  начатьИгруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  быстрыйФинишToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  рассыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  рассыToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  рассыToolStripMenuItem2;
	private: System::Windows::Forms::Panel^  panel1;



	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  стартToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  паузаToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::ToolStripMenuItem^  tESTToolStripMenuItem;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->играToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->начатьИгруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рассыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рассыToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рассыToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->быстрыйФинишToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стартToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->паузаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tESTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->играToolStripMenuItem, 
				this->стартToolStripMenuItem, this->паузаToolStripMenuItem, this->tESTToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(748, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// играToolStripMenuItem
			// 
			this->играToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->начатьИгруToolStripMenuItem, 
				this->быстрыйФинишToolStripMenuItem, this->выходToolStripMenuItem});
			this->играToolStripMenuItem->Name = L"играToolStripMenuItem";
			this->играToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->играToolStripMenuItem->Text = L"Игра";
			// 
			// начатьИгруToolStripMenuItem
			// 
			this->начатьИгруToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->рассыToolStripMenuItem, 
				this->рассыToolStripMenuItem1, this->рассыToolStripMenuItem2});
			this->начатьИгруToolStripMenuItem->Name = L"начатьИгруToolStripMenuItem";
			this->начатьИгруToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->начатьИгруToolStripMenuItem->Text = L"Начать игру";
			// 
			// рассыToolStripMenuItem
			// 
			this->рассыToolStripMenuItem->Name = L"рассыToolStripMenuItem";
			this->рассыToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->рассыToolStripMenuItem->Text = L"2 рассы";
			this->рассыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::рассыToolStripMenuItem_Click);
			// 
			// рассыToolStripMenuItem1
			// 
			this->рассыToolStripMenuItem1->Name = L"рассыToolStripMenuItem1";
			this->рассыToolStripMenuItem1->Size = System::Drawing::Size(117, 22);
			this->рассыToolStripMenuItem1->Text = L"3 рассы";
			this->рассыToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::рассыToolStripMenuItem1_Click_1);
			// 
			// рассыToolStripMenuItem2
			// 
			this->рассыToolStripMenuItem2->Name = L"рассыToolStripMenuItem2";
			this->рассыToolStripMenuItem2->Size = System::Drawing::Size(117, 22);
			this->рассыToolStripMenuItem2->Text = L"4 рассы";
			this->рассыToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::рассыToolStripMenuItem2_Click);
			// 
			// быстрыйФинишToolStripMenuItem
			// 
			this->быстрыйФинишToolStripMenuItem->Name = L"быстрыйФинишToolStripMenuItem";
			this->быстрыйФинишToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->быстрыйФинишToolStripMenuItem->Text = L"Быстрый финиш";
			this->быстрыйФинишToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::быстрыйФинишToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::выходToolStripMenuItem_Click);
			// 
			// стартToolStripMenuItem
			// 
			this->стартToolStripMenuItem->Enabled = false;
			this->стартToolStripMenuItem->Name = L"стартToolStripMenuItem";
			this->стартToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->стартToolStripMenuItem->Text = L"Старт";
			this->стартToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::стартToolStripMenuItem_Click);
			// 
			// паузаToolStripMenuItem
			// 
			this->паузаToolStripMenuItem->Enabled = false;
			this->паузаToolStripMenuItem->Name = L"паузаToolStripMenuItem";
			this->паузаToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->паузаToolStripMenuItem->Text = L"Пауза";
			this->паузаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::паузаToolStripMenuItem_Click_1);
			// 
			// tESTToolStripMenuItem
			// 
			this->tESTToolStripMenuItem->Name = L"tESTToolStripMenuItem";
			this->tESTToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->tESTToolStripMenuItem->Text = L"One Step";
			this->tESTToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tESTToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label89);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 198);
			this->panel1->TabIndex = 1;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label89->ForeColor = System::Drawing::Color::Red;
			this->label89->Location = System::Drawing::Point(252, 163);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(113, 24);
			this->label89->TabIndex = 25;
			this->label89->Text = L"Поражение";
			this->label89->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(364, 197);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 24;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(312, 125);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 13);
			this->label19->TabIndex = 23;
			this->label19->Text = L"19";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(312, 112);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 13);
			this->label20->TabIndex = 22;
			this->label20->Text = L"20";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(247, 125);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(51, 13);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Убито В:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(247, 112);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(51, 13);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Убито Т:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(247, 138);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(59, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Ср. завоз:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(312, 138);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"17";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(312, 99);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L"16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(312, 86);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"15";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(306, 73);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"14";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(291, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(300, 47);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"12";
			// 
			// label11
			// 
			this->label11->AccessibleName = L"tt11";
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(336, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 12;
			this->label11->Tag = L"t11";
			this->label11->Text = L"11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(247, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Потеряно В:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(247, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Потеряно Т:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(247, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Разгрузок:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Спайса:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Информация о машине";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Доступные машины";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Военных:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(247, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Транспортников:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Информация о рассе:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox1->Location = System::Drawing::Point(123, 37);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(124, 160);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"Подробная информация";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 37);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 160);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Раса №1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label90);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->label34);
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->label36);
			this->panel2->Controls->Add(this->label37);
			this->panel2->Controls->Add(this->label38);
			this->panel2->Controls->Add(this->label39);
			this->panel2->Controls->Add(this->label40);
			this->panel2->Controls->Add(this->label41);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->label43);
			this->panel2->Controls->Add(this->richTextBox2);
			this->panel2->Controls->Add(this->listBox2);
			this->panel2->Controls->Add(this->label44);
			this->panel2->Location = System::Drawing::Point(379, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(368, 198);
			this->panel2->TabIndex = 24;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label90->ForeColor = System::Drawing::Color::Red;
			this->label90->Location = System::Drawing::Point(252, 163);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(113, 24);
			this->label90->TabIndex = 26;
			this->label90->Text = L"Поражение";
			this->label90->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(312, 125);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 13);
			this->label23->TabIndex = 23;
			this->label23->Text = L"23";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(312, 112);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(19, 13);
			this->label24->TabIndex = 22;
			this->label24->Text = L"24";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(247, 125);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(51, 13);
			this->label25->TabIndex = 21;
			this->label25->Text = L"Убито В:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(247, 112);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(51, 13);
			this->label26->TabIndex = 20;
			this->label26->Text = L"Убито Т:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(247, 138);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 13);
			this->label27->TabIndex = 19;
			this->label27->Text = L"Ср. завоз:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(312, 138);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(19, 13);
			this->label28->TabIndex = 18;
			this->label28->Text = L"28";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(312, 99);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(19, 13);
			this->label29->TabIndex = 17;
			this->label29->Text = L"29";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(312, 86);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(19, 13);
			this->label30->TabIndex = 16;
			this->label30->Text = L"30";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(306, 73);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(19, 13);
			this->label31->TabIndex = 15;
			this->label31->Text = L"31";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(291, 60);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(19, 13);
			this->label32->TabIndex = 14;
			this->label32->Text = L"32";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(300, 47);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(19, 13);
			this->label33->TabIndex = 13;
			this->label33->Text = L"33";
			// 
			// label34
			// 
			this->label34->AccessibleName = L"tt11";
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(336, 34);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(19, 13);
			this->label34->TabIndex = 12;
			this->label34->Tag = L"t11";
			this->label34->Text = L"34";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(247, 99);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(69, 13);
			this->label35->TabIndex = 11;
			this->label35->Text = L"Потеряно В:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(247, 86);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(69, 13);
			this->label36->TabIndex = 10;
			this->label36->Text = L"Потеряно Т:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(247, 73);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(63, 13);
			this->label37->TabIndex = 9;
			this->label37->Text = L"Разгрузок:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(247, 60);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(47, 13);
			this->label38->TabIndex = 8;
			this->label38->Text = L"Спайса:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(120, 21);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(125, 13);
			this->label39->TabIndex = 7;
			this->label39->Text = L"Информация о машине";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(3, 21);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(109, 13);
			this->label40->TabIndex = 6;
			this->label40->Text = L"Доступные машины";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(247, 47);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(54, 13);
			this->label41->TabIndex = 5;
			this->label41->Text = L"Военных:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(247, 34);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(94, 13);
			this->label42->TabIndex = 4;
			this->label42->Text = L"Транспортников:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(247, 21);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(118, 13);
			this->label43->TabIndex = 3;
			this->label43->Text = L"Информация о рассе:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox2->Location = System::Drawing::Point(123, 37);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(124, 160);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"Подробная информация\n";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(0, 37);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 160);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox2_SelectedIndexChanged);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(3, 3);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(58, 13);
			this->label44->TabIndex = 0;
			this->label44->Text = L"Расса №2";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label91);
			this->panel3->Controls->Add(this->label45);
			this->panel3->Controls->Add(this->label46);
			this->panel3->Controls->Add(this->label47);
			this->panel3->Controls->Add(this->label48);
			this->panel3->Controls->Add(this->label49);
			this->panel3->Controls->Add(this->label50);
			this->panel3->Controls->Add(this->label51);
			this->panel3->Controls->Add(this->label52);
			this->panel3->Controls->Add(this->label53);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->label55);
			this->panel3->Controls->Add(this->label56);
			this->panel3->Controls->Add(this->label57);
			this->panel3->Controls->Add(this->label58);
			this->panel3->Controls->Add(this->label59);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Controls->Add(this->label61);
			this->panel3->Controls->Add(this->label62);
			this->panel3->Controls->Add(this->label63);
			this->panel3->Controls->Add(this->label64);
			this->panel3->Controls->Add(this->label65);
			this->panel3->Controls->Add(this->richTextBox3);
			this->panel3->Controls->Add(this->listBox3);
			this->panel3->Controls->Add(this->label66);
			this->panel3->Location = System::Drawing::Point(0, 235);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(368, 198);
			this->panel3->TabIndex = 25;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label91->ForeColor = System::Drawing::Color::Red;
			this->label91->Location = System::Drawing::Point(252, 164);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(113, 24);
			this->label91->TabIndex = 27;
			this->label91->Text = L"Поражение";
			this->label91->Visible = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(312, 125);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(19, 13);
			this->label45->TabIndex = 23;
			this->label45->Text = L"45";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(312, 112);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(19, 13);
			this->label46->TabIndex = 22;
			this->label46->Text = L"46";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(247, 125);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(51, 13);
			this->label47->TabIndex = 21;
			this->label47->Text = L"Убито В:";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(247, 112);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(51, 13);
			this->label48->TabIndex = 20;
			this->label48->Text = L"Убито Т:";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(247, 138);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(59, 13);
			this->label49->TabIndex = 19;
			this->label49->Text = L"Ср. завоз:";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(312, 138);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(19, 13);
			this->label50->TabIndex = 18;
			this->label50->Text = L"50";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(312, 99);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(19, 13);
			this->label51->TabIndex = 17;
			this->label51->Text = L"51";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(312, 86);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(19, 13);
			this->label52->TabIndex = 16;
			this->label52->Text = L"52";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(306, 73);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(19, 13);
			this->label53->TabIndex = 15;
			this->label53->Text = L"53";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(291, 60);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(19, 13);
			this->label54->TabIndex = 14;
			this->label54->Text = L"54";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(300, 47);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(19, 13);
			this->label55->TabIndex = 13;
			this->label55->Text = L"55";
			// 
			// label56
			// 
			this->label56->AccessibleName = L"tt11";
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(336, 34);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(19, 13);
			this->label56->TabIndex = 12;
			this->label56->Tag = L"t11";
			this->label56->Text = L"56";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(247, 99);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(69, 13);
			this->label57->TabIndex = 11;
			this->label57->Text = L"Потеряно В:";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(247, 86);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(69, 13);
			this->label58->TabIndex = 10;
			this->label58->Text = L"Потеряно Т:";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(247, 73);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(63, 13);
			this->label59->TabIndex = 9;
			this->label59->Text = L"Разгрузок:";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(247, 60);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(47, 13);
			this->label60->TabIndex = 8;
			this->label60->Text = L"Спайса:";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(120, 21);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(125, 13);
			this->label61->TabIndex = 7;
			this->label61->Text = L"Информация о машине";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(3, 21);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(109, 13);
			this->label62->TabIndex = 6;
			this->label62->Text = L"Доступные машины";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(247, 47);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(54, 13);
			this->label63->TabIndex = 5;
			this->label63->Text = L"Военных:";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(247, 34);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(94, 13);
			this->label64->TabIndex = 4;
			this->label64->Text = L"Транспортников:";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(247, 21);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(118, 13);
			this->label65->TabIndex = 3;
			this->label65->Text = L"Информация о рассе:";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox3->Location = System::Drawing::Point(123, 37);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(124, 160);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"Подробная информация\n";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(0, 37);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 160);
			this->listBox3->TabIndex = 1;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox3_SelectedIndexChanged);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(3, 3);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(58, 13);
			this->label66->TabIndex = 0;
			this->label66->Text = L"Расса №3";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label92);
			this->panel4->Controls->Add(this->label67);
			this->panel4->Controls->Add(this->label68);
			this->panel4->Controls->Add(this->label69);
			this->panel4->Controls->Add(this->label70);
			this->panel4->Controls->Add(this->label71);
			this->panel4->Controls->Add(this->label72);
			this->panel4->Controls->Add(this->label73);
			this->panel4->Controls->Add(this->label74);
			this->panel4->Controls->Add(this->label75);
			this->panel4->Controls->Add(this->label76);
			this->panel4->Controls->Add(this->label77);
			this->panel4->Controls->Add(this->label78);
			this->panel4->Controls->Add(this->label79);
			this->panel4->Controls->Add(this->label80);
			this->panel4->Controls->Add(this->label81);
			this->panel4->Controls->Add(this->label82);
			this->panel4->Controls->Add(this->label83);
			this->panel4->Controls->Add(this->label84);
			this->panel4->Controls->Add(this->label85);
			this->panel4->Controls->Add(this->label86);
			this->panel4->Controls->Add(this->label87);
			this->panel4->Controls->Add(this->richTextBox4);
			this->panel4->Controls->Add(this->listBox4);
			this->panel4->Controls->Add(this->label88);
			this->panel4->Location = System::Drawing::Point(379, 235);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(368, 198);
			this->panel4->TabIndex = 25;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label92->ForeColor = System::Drawing::Color::Red;
			this->label92->Location = System::Drawing::Point(252, 164);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(113, 24);
			this->label92->TabIndex = 28;
			this->label92->Text = L"Поражение";
			this->label92->Visible = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(312, 125);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(19, 13);
			this->label67->TabIndex = 23;
			this->label67->Text = L"67";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(312, 112);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(19, 13);
			this->label68->TabIndex = 22;
			this->label68->Text = L"68";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(247, 125);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(51, 13);
			this->label69->TabIndex = 21;
			this->label69->Text = L"Убито В:";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(247, 112);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(51, 13);
			this->label70->TabIndex = 20;
			this->label70->Text = L"Убито Т:";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(247, 138);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(59, 13);
			this->label71->TabIndex = 19;
			this->label71->Text = L"Ср. завоз:";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(312, 138);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(19, 13);
			this->label72->TabIndex = 18;
			this->label72->Text = L"72";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(312, 99);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(19, 13);
			this->label73->TabIndex = 17;
			this->label73->Text = L"73";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(312, 86);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(19, 13);
			this->label74->TabIndex = 16;
			this->label74->Text = L"74";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(306, 73);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(19, 13);
			this->label75->TabIndex = 15;
			this->label75->Text = L"75";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(291, 60);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(19, 13);
			this->label76->TabIndex = 14;
			this->label76->Text = L"76";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(300, 47);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(19, 13);
			this->label77->TabIndex = 13;
			this->label77->Text = L"77";
			// 
			// label78
			// 
			this->label78->AccessibleName = L"tt11";
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(336, 34);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(19, 13);
			this->label78->TabIndex = 12;
			this->label78->Tag = L"t11";
			this->label78->Text = L"78";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(247, 99);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(69, 13);
			this->label79->TabIndex = 11;
			this->label79->Text = L"Потеряно В:";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(247, 86);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(69, 13);
			this->label80->TabIndex = 10;
			this->label80->Text = L"Потеряно Т:";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(247, 73);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(63, 13);
			this->label81->TabIndex = 9;
			this->label81->Text = L"Разгрузок:";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(247, 60);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(47, 13);
			this->label82->TabIndex = 8;
			this->label82->Text = L"Спайса:";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(120, 21);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(125, 13);
			this->label83->TabIndex = 7;
			this->label83->Text = L"Информация о машине";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(3, 21);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(109, 13);
			this->label84->TabIndex = 6;
			this->label84->Text = L"Доступные машины";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(247, 47);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(54, 13);
			this->label85->TabIndex = 5;
			this->label85->Text = L"Военных:";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(247, 34);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(94, 13);
			this->label86->TabIndex = 4;
			this->label86->Text = L"Транспортников:";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(247, 21);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(118, 13);
			this->label87->TabIndex = 3;
			this->label87->Text = L"Информация о рассе:";
			// 
			// richTextBox4
			// 
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox4->Location = System::Drawing::Point(123, 37);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ReadOnly = true;
			this->richTextBox4->Size = System::Drawing::Size(124, 160);
			this->richTextBox4->TabIndex = 2;
			this->richTextBox4->Text = L"Подробная информация\n";
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(0, 37);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(120, 160);
			this->listBox4->TabIndex = 1;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox4_SelectedIndexChanged);
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(3, 3);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(58, 13);
			this->label88->TabIndex = 0;
			this->label88->Text = L"Расса №4";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(40, 466);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 17);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(126, 466);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(80, 17);
			this->checkBox3->TabIndex = 27;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(315, 470);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(436, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(748, 435);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Дюна-1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void printf_info(int n, base *r, int l)
		{		
			switch(n)
			{
			
			case 0: {
				label11->Text = (r->get_count_transport()).ToString();
				label12->Text = (r->get_count_military() ).ToString();
				label13->Text = (r->get_count_spice() ).ToString();
				label14->Text = (r->get_count_raz() ).ToString();

				label15->Text = (r->count_lost_transport ).ToString();
				label16->Text = (r->count_lost_military ).ToString();

				label17->Text = (r->get_mid_trip() ).ToString();
				label20->Text = (r->get_count_kill_transport() ).ToString();
				label19->Text = (r->get_count_kill_military() ).ToString();
				if(l==1) break;
				listBox1->Items->Clear();
				int t=1, v=1;
				for( vector<machine*>::iterator it = r->car.begin(); it != r->car.end(); ++it)
				{
	//				if( (*it)->rip==1 ) continue;
					if( dynamic_cast<transport*>(*it) ){
						listBox1->Items->Add("Транспортник "+t); t++;
					}
					else {listBox1->Items->Add("Военник "+v); v++;}

				}
				if(l==3) label89->Visible = true;
					break;
					}

			case 1: {

				label34->Text = (r->get_count_transport()).ToString();
				label33->Text = (r->get_count_military() ).ToString();
				label32->Text = (r->get_count_spice() ).ToString();
				label31->Text = (r->get_count_raz() ).ToString();

				label30->Text = (r->count_lost_transport ).ToString();
				label29->Text = (r->count_lost_military ).ToString();

				label28->Text = (r->get_mid_trip() ).ToString();
				label24->Text = (r->get_count_kill_transport() ).ToString();
				label23->Text = (r->get_count_kill_military() ).ToString();
				if(l==1) break;
				listBox2->Items->Clear();
				int t=1, v=1;
				for( vector<machine*>::iterator it = r->car.begin(); it != r->car.end(); ++it)
				{
					if( dynamic_cast<transport*>(*it) ){
						listBox2->Items->Add("Транспортник "+t); t++; 
					}
					else {listBox2->Items->Add("Военник "+v); v++; }
					
				}
				if(l==3) label90->Visible = true;
				break;
					}

			case 2: {

				label56->Text = (r->get_count_transport()).ToString();
				label55->Text = (r->get_count_military() ).ToString();
				label54->Text = (r->get_count_spice() ).ToString();
				label53->Text = (r->get_count_raz() ).ToString();

				label52->Text = (r->count_lost_transport ).ToString();
				label51->Text = (r->count_lost_military ).ToString();

				label50->Text = (r->get_mid_trip() ).ToString();
				label46->Text = (r->get_count_kill_transport() ).ToString();
				label45->Text = (r->get_count_kill_military() ).ToString();
				if(l==1) break;
				listBox3->Items->Clear();
				int t=1, v=1;
				for( vector<machine*>::iterator it = r->car.begin(); it != r->car.end(); ++it)
				{

					if( dynamic_cast<transport*>(*it) ){
						listBox3->Items->Add("Транспортник "+t); t++;
					}
					else {listBox3->Items->Add("Военник "+v); v++;}

				}
				if(l==3) label91->Visible = true;
				break;
					}

			case 3: {

				label78->Text = (r->get_count_transport()).ToString();
				label77->Text = (r->get_count_military() ).ToString();
				label76->Text = (r->get_count_spice() ).ToString();
				label75->Text = (r->get_count_raz() ).ToString();

				label74->Text = (r->count_lost_transport ).ToString();
				label73->Text = (r->count_lost_military ).ToString();

				label72->Text = (r->get_mid_trip() ).ToString();
				label68->Text = (r->get_count_kill_transport() ).ToString();
				label67->Text = (r->get_count_kill_military() ).ToString();
				if(l==1) break;
				listBox4->Items->Clear();
				int t=1, v=1;
				for( vector<machine*>::iterator it = r->car.begin(); it != r->car.end(); ++it)
				{

					if( dynamic_cast<transport*>(*it) ){
						listBox4->Items->Add("Транспортник "+t); 
						t++;
					}
					else {
						listBox4->Items->Add("Военник "+v); 
						v++;
					}

				}
				if(l==3) label92->Visible = true;
				break;
					}
			}
					

		}

		void printf_machine(int n, base *b, System::Windows::Forms::RichTextBox^ richTextBox, vector <square *> mapss)
		{
			vector<machine*>::iterator it = b->car.begin()+n; 					

			richTextBox->Clear();
			int coo;
			if(spice *sp = dynamic_cast<spice*>(mapss[(*it)->get_coord_x()*100+(*it)->get_coord_y()])) coo = sp->get_count_spice(); else coo=-1;


			richTextBox->Text += "Type :	" +  mapss[(*it)->get_coord_x()*100+(*it)->get_coord_y()]->get_type() + " \n";
			richTextBox->Text += "Count :	" +  coo + " \n";

			richTextBox->Text += "RIP :	" +  (*it)->rip + " \n";
			richTextBox->Text += "X :	" +  (*it)->get_coord_x() + " \n";
			richTextBox->Text += "Y :	" +  (*it)->get_coord_y() + " \n";
			richTextBox->Text += "Броня:	" +  (*it)->get_amour() + " ";
			richTextBox->Text += "(" +  ( (*it)->get_amour()*100 )/((*it)->get_max_amour()) + "%)\n";
			richTextBox->Text += "Скорость: " + (*it)->get_speed()  + "\n";
			richTextBox->Text += "Время жизни: " + (*it)->get_live_time()  + "\n";

					if( transport *tr = dynamic_cast<transport*>(*it) )
					{
						richTextBox->Text += "Спайса в багажнике: " + tr->count_spice_inbag() + " " ;
						richTextBox->Text += "(" + (tr->count_spice_inbag()*100)/(tr->max_value_car()) + "%)";

						if(tr->get_go_home()) richTextBox->Text += "\nСтутус: Еду на базу";
						else richTextBox->Text += "\nСтутус: Сбор спайса";

					}
					else if( military *ml = dynamic_cast<military*>(*it) )
					{
						// тип. Воздушная или наземная
						if(ml->get_type())
						richTextBox->Text += "Тип: Воздушная";
						else 
						richTextBox->Text += "Тип: Наземная";
					}
		}

		void create_map( vector <square *> *mapss)
		{
			int type_sq, reg, co;
		for(int i=0; i<100; i++)
		{
			for(int j=0; j<100; j++)
			{
				type_sq = rand() % 3;
				reg = rand() % 100 + 1;
				co = rand() % 5000 + 1;
				if(type_sq==0){ mapss->push_back( new sand(i,j) ); continue;}
				if(type_sq==1){ mapss->push_back( new rock(i,j) ); continue;}
				else { mapss->push_back( new spice(i,j,co,reg) ); continue;}
			}		
		}
		}



		void create_flot(base *b, vector <square *> mapss, int r)
		{
			// сколько краблей мы создаем
			srand ( time ( NULL ) + r);
			int c = rand() % 10 + 1;
			int pos, sl, t, sp;

			for(int i=0; i<c; i++)
			{
				while(1)
				{
					// место куда пытаемся вотнкуть
					pos = rand() % 10000;
					//скорость
					sp = rand() % 170 + 31;
					// воздух(1) или змеля(0)
					sl = rand() % 2;

					int aaa = mapss.size();

					// тип клетки
					t = mapss[pos]->get_type();
					if(t==2 && sl==0) continue;

					if(sl)
					{
					if(mapss[pos]->get_sky()!=NULL) continue;
					}
					
					if(!sl)
					{
					if(mapss[pos]->get_land()!=NULL) continue;
					}

						military *f;
						f = new military( mapss[pos]->get_coord_x(), mapss[pos]->get_coord_y(), 200, 200, sp, r, sl, rand() % 80 + 1, 1, rand() % 80 + 1, 1 );
						b->car.push_back( f ); 
						if(sl) mapss[pos]->set_sky( *f ); else mapss[pos]->set_land( *f );
						break;
				}

//				b->car.push_back( new military() );
			}
			srand ( time ( NULL ) + 123456780 + r);
			c = rand() % 10 + 1;

			for(int i=0; i<c; i++)
			{
				while(1)
				{
					// место куда пытаемся вотнкуть
				pos = rand() % 10000;

				if(mapss[pos]->get_sky()!=NULL) continue;

				//скорость
				sp = rand() % 170 + 31;

				transport *g;
				g = new transport(mapss[pos]->get_coord_x(), mapss[pos]->get_coord_y(), 200, 200, sp, r, 12000);
				b->car.push_back( g );
				mapss[pos]->set_sky( *g );
				break;
				}
			}
		}

		void inf(vector <square *> mapss, int f)
		{	
			int t=0;
			
			if(f==1)					
			{for(int i=0; i<10000; i++)
			if(mapss[i]->get_sky()) t++;}

			else if(f==2)					
				{for(int i=0; i<10000; i++)
				if(mapss[i]->get_land()) t++;}

			else if(mapss[f]->get_sky()) t=1;

		MessageBox::Show( t+" ", "1",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		}
		
		void randSort(int *m, int size)
		{
			int buf;
			int pos, pos2;
			for (int i = 0; i < rand() % 50 + 10; i++)
			{
				pos = rand() % size;
				pos2 = rand() % size;
				int buf = m[pos];
				m[pos] = m[pos2];
				m[pos2] = buf;
			}
		}
		
		/*
		*******************
		*/

		void game(vector <square *> mapss)
		{
			int x1,y1,pos,type,count_s, speed, sh, kol=0, ex, pl, pop, x2,y2, x3,y3;
			int rad;
			int cost_tr,kol_machine=0, cost_ml,sp,t1,sl;
			bool posl_sc = 0; // забрал последний спайс
			for( vector<base*>::const_iterator t = kompany.begin(); t != kompany.end(); ++t, kol++)
			{

				// проверяем, не проиграла ли расса

				if( (*t)->loos ) { continue;}

				if((*t)->get_count_transport()==0 && (*t)->get_count_military()==0 )
				{
					if( (*t)->get_count_spice() < (*t)->get_cost_tr() )
						{						(*t)->loos=1; 
					printf_info(kol, (*t) ,3);
					continue;}
				}


				// пополняем флот. Сначала проверяем, есть ли транспортиник, если нет, то тратим до 70% на их создание. Так же поддержка армии в 15 судн.
				if((*t)->get_count_transport()==0)
				{
					cost_tr = (*t)->get_cost_tr();
					count_s = (*t)->get_count_spice();
					kol_machine = count_s*(0.7)/cost_tr;
					if(kol_machine==0) kol_machine = count_s/cost_tr;
					// создаем транспортники
					for(int i=0; i<kol_machine; i++)
					{
						while(1)
						{
							// место куда пытаемся вотнкуть
							pos = rand() % 10000;

							if(mapss[pos]->get_sky()!=NULL) continue;

							//скорость
							sp = rand() % 170 + 31;

							transport *g;
							g = new transport(mapss[pos]->get_coord_x(), mapss[pos]->get_coord_y(), 200, 200, sp, kol, 12000);
							(*t)->car.push_back( g );
							mapss[pos]->set_sky( *g );
							(*t)->bay_car(cost_tr);
							break;
						}
					}
					if(kol_machine) printf_info(kol, (*t) ,0);
				}

				if((*t)->get_count_military() <= 5)
				{
				cost_ml = (*t)->get_cost_mil();
				count_s = (*t)->get_count_spice();
				kol_machine = count_s/cost_ml;


				// создаем военные машины
				for(int i=0; i<kol_machine; i++)
				{
					for(;;)
					{
						// место куда пытаемся вотнкуть
						pos = rand() % 10000;
						//скорость
						sp = rand() % 170 + 31;
						// воздух(1) или змеля(0)
						sl = rand() % 2;
						
						// тип клетки
						t1 = mapss[pos]->get_type();
						if(t1==2 && sl==0) continue;

						if(sl)
						{
							if(mapss[pos]->get_sky()!=NULL) continue;
						}

						if(!sl)
						{
							if(mapss[pos]->get_land()!=NULL) continue;
						}

						military *f;
						f = new military( mapss[pos]->get_coord_x(), mapss[pos]->get_coord_y(), 200, 200, sp, kol, sl, rand() % 80 + 1, 1, rand() % 80 + 1, 1 );
						(*t)->car.push_back( f ); 
						if(sl) mapss[pos]->set_sky( *f ); else mapss[pos]->set_land( *f );
						// списываем деньги
						(*t)->bay_car(cost_ml);
						break;
					}
				}
				if(kol_machine) printf_info(kol, (*t) ,0);
				
				}

				for( vector<machine*>::iterator it = (*t)->car.begin(); it != (*t)->car.end(); ++it)
				{
					if(!(*it)->rip) (*it)->add_time();

					if( transport *tr = dynamic_cast<transport*>(*it) )
					{
 						posl_sc = 0; 
						speed = tr->get_speed();
 						
 						x1= tr->get_coord_x();
 						y1= tr->get_coord_y();
 
						//если труп
						if( tr->get_amour() == 0 && !tr->rip)
						{							
								(*t)->count_lost_transport +=1;	
								mapss[x1*100+y1]->clear_sky();
								tr->rip=1;	
								printf_info(kol, (*t) ,0);
						} 
 
 						if(speed < 90 ) sh=1;
 						else if(speed < 150) sh=2;
 						else sh=3;
						

 						if(!tr->rip)
 						for(int i=0; i<sh; i++)
 							{
 														
 							if( tr->count_spice_inbag()>11000 ) tr->set_go_home(1);
							
							// едем домой
							if( tr->get_go_home())
							{	
 								
 								x1= tr->get_coord_x();
								y1= tr->get_coord_y();

								x3 = (*t)->coord_x; y3 = (*t)->coord_y;
								x2 = x1; y2 = y1;
								if(x2==x3 && y2==y3)
								{
									(*t)->add_count_import();
									(*t)->add_trip( tr->count_spice_inbag() );									
									tr->clear_bag();
									tr->set_go_home(0);
									
									continue;
								}


								switch(tr->get_russ())
								{
									// 1 2 8
								case 0:{ 
									if((x1!=0 && y1!=0) && ( !mapss[(x1-1)*100+y1-1]->get_sky() )) {x2 = x1 -1 ; y2 = y1 - 1; }									
									else									
										if(y1!=0 && !mapss[(x1)*100+y1-1]->get_sky() ) {y2 = y1 -1; }									
									else									
										if(x1!=0 && !mapss[(x1-1)*100+y1]->get_sky() ) { x2 = x1 -1; }
									break;} 
									// 3 2 4
								case 1:{ 

									if((y1!=0 && x1!=99) &&  !mapss[(x1+1)*100+y1-1]->get_sky() ) {y2 = y1 -1; x2 = x1 +1;  }									
									else									
										if(y1!=0 && !mapss[(x1)*100+y1-1]->get_sky() ) { y2 = y1 -1; }									
									else									
										if(x1!=99 && !mapss[(x1+1)*100+y1]->get_sky() ) {x2 = x1 +1; }									
									break;
									   }
									// 5 4 6
								case 3:{ 									
									if((y1!=99 && x1!=99) && !mapss[(x1+1)*100+y1+1]->get_sky() ) {x2 = x1 +1; y2 = y1 +1;  break;}									
									else
										if(x1!=99 && !mapss[(x1+1)*100+y1]->get_sky() ) {x2 = x1 +1;  break;}
									else
										if(y1!=99 && !mapss[(x1)*100+y1+1]->get_sky() ) {y2 = y1 +1;  break;}
									break;}

									// 7 8 6
								case 2:{ 									
									if((x1!=0 && y1!=99) && !mapss[(x1-1)*100+y1+1]->get_sky() ) {x2 = x1 -1; y2 =y1 +1;  break;}
									else
										if(x1!=0 && !mapss[(x1-1)*100+y1]->get_sky() ) {x2 = x1 -1; break;}									
									else
										if(y1!=99 && !mapss[(x1)*100+y1+1]->get_sky() ) {y2 = y1 +1; break;}
									break;}
								}
								x1= tr->get_coord_x();
								y1= tr->get_coord_y();
								tr->move(x2,y2,0,0);
								if(checkBox3->Checked) MessageBox::Show(x1+" "+y1+"-"+x2+" "+y2, "1",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								mapss[x1*100+y1]->clear_sky();
								mapss[x2*100+y2]->set_sky(*tr);
								continue;
							}
							
							x1= tr->get_coord_x();
							y1= tr->get_coord_y();

							pos = x1*100+y1;
							type = mapss[pos]->get_type();
							if(type==3 && !posl_sc)
							{
								spice *sp = dynamic_cast<spice*>(mapss[pos]);
								count_s = sp->get_count_spice();
								if(sp->regen >= count_s) {posl_sc=1; if(i==0) i--; continue;}
								if(count_s < 1500) {tr->add_spice(count_s); sp->get_spice(count_s); posl_sc=1; }
								else { tr->add_spice(1500); sp->get_spice(1500); }
							}
							else
							{
								//if(checkBox3->Checked) MessageBox::Show("****", "1",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
								posl_sc=0;
								// поиск места, куда направляться
								/*
								1 2 3
								8 9 4
								7 6 5
								*/
								ex = pop = 0; x2=x1; y2=y1;
								srand(time(NULL));
								int size = 8;
								int m[8]={1,2,3,4,5,6,7,8};
								randSort(m, 8);

								while(!ex)
								{
									pl = m[size];
									size--;		
								switch(pl)
									{
									case 1: {  if(x1==0 || y1==0) break; if( mapss[(x1-1)*100+y1-1]->get_sky() ) break; x2 = x1 -1 ; y2 = y1 - 1; ex=1; break;}
									case 2: {  if(y1==0) break; if( mapss[(x1)*100+y1-1]->get_sky() ) break; y2 = y1 -1; ex=1; break;}
									case 3: {  if(y1==0 || x1==99) break; if( mapss[(x1+1)*100+y1-1]->get_sky() ) break; y2 = y1 -1; x2 = x1 +1; ex=1; break;}
									case 4: {  if(x1==99) break; if( mapss[(x1+1)*100+y1]->get_sky() ) break; x2 = x1 +1; ex=1; break;}
									case 5: {  if(y1==99 || x1==99) break; if( mapss[(x1+1)*100+y1+1]->get_sky() ) break; x2 = x1 +1; y2 = y1 +1; ex=1; break;}
									case 6: {  if(y1==99) break; if( mapss[(x1)*100+y1+1]->get_sky() ) break; y2 = y1 +1; ex=1; break;}
									case 7: {  if(x1==0 || y1==99) break; if( mapss[(x1-1)*100+y1+1]->get_sky() ) break; x2 = x1 -1; y2 =y1 +1; ex=1; break;}
									case 8: {  if(x1==0) break; if( mapss[(x1-1)*100+y1]->get_sky() ) break; x2 = x1 -1; ex=1; break;}
									}
								
								if(size<0) break;
								}
								mapss[tr->get_coord_x()*100+tr->get_coord_y()]->clear_sky();
								tr->move(x2,y2,0,0);
								/*if((checkBox3->Checked) && (x2==x1 && y1==y2)) MessageBox::Show( y1+" "+x1, "2",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);*/
								
								mapss[x2*100+y2]->set_sky(*tr);

							}

						}				

					}
					else if( military *ml = dynamic_cast<military*>(*it) )
					{

						x1= ml->get_coord_x();
						y1= ml->get_coord_y();
						int sk_la,uron1,uron2,rus;

						rus = ml->get_russ();

						speed = ml->get_speed();

						if(speed < 90 ) sh=1;
						else if(speed < 150) sh=2;
						else sh=3;

						
						// воздух(1) - земля(0)
						sk_la = ml->sky_land;
		
							uron1 = ml->sky_losses;
							rad = ml->sky_radius;
							uron2 = ml->land_losses;
							rad=ml->land_radius;

							//если труп
						if( ml->get_amour() == 0 && !ml->rip)
						{
									(*t)->count_lost_military += 1;	
									if(sk_la) mapss[ml->get_coord_x()*100+ml->get_coord_y()]->clear_sky();
									else mapss[ml->get_coord_x()*100+ml->get_coord_y()]->clear_land();
									ml->rip=1;	
									printf_info(kol, (*t) ,0);
						} 
						
						if(!ml->rip)
						for(int i=0; i<sh; i++)
						{
							// сначала атака, потом ход

							/*
								1 2 3
								8 9 4
								7 6 5
								*/

							// сканируем область видимости
							for(int j=0; j<rad; j++)
							{
								ex=0;
								for(int scan=1; scan<9; scan++)
								{
									switch(scan)
									{
									case 1: {  if(x1==0 || y1==0) break; if( mapss[(x1-1)*100+y1-1]->get_sky() ) 
											{ /*sky*/   if( (mapss[(x1-1)*100+y1-1]->get_sky())->get_russ()!=rus ){(mapss[(x1-1)*100+y1-1]->get_sky())->damage(uron1);  ex=1; break; } } if( mapss[(x1-1)*100+y1-1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1-1)*100+y1-1]->get_land())->get_russ()!=rus ){(mapss[(x1-1)*100+y1-1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 2: {  if(y1==0) break; if( mapss[(x1)*100+y1-1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1)*100+y1-1]->get_sky())->get_russ()!=rus ){(mapss[(x1)*100+y1-1]->get_sky())->damage(uron1);  ex=1; break; }}  if( mapss[(x1)*100+y1-1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1)*100+y1-1]->get_land())->get_russ()!=rus ){(mapss[(x1)*100+y1-1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 3: {  if(y1==0 || x1==99) break; if( mapss[(x1+1)*100+y1-1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1+1)*100+y1-1]->get_sky())->get_russ()!=rus ){(mapss[(x1+1)*100+y1-1]->get_sky())->damage(uron1);  ex=1; break; } } if( mapss[(x1+1)*100+y1-1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1+1)*100+y1-1]->get_land())->get_russ()!=rus ){(mapss[(x1+1)*100+y1-1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 4: {  if(x1==99) break; if( mapss[(x1+1)*100+y1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1+1)*100+y1]->get_sky())->get_russ()!=rus ){(mapss[(x1+1)*100+y1]->get_sky())->damage(uron1);  ex=1; break; }}  if( mapss[(x1+1)*100+y1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1+1)*100+y1]->get_land())->get_russ()!=rus ){(mapss[(x1+1)*100+y1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 5: {  if(y1==99 || x1==99) break; if( mapss[(x1+1)*100+y1+1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1+1)*100+y1+1]->get_sky())->get_russ()!=rus ){(mapss[(x1+1)*100+y1+1]->get_sky())->damage(uron1);  ex=1; break; }} if( mapss[(x1+1)*100+y1+1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1+1)*100+y1+1]->get_land())->get_russ()!=rus ){(mapss[(x1+1)*100+y1+1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 6: {  if(y1==99) break; if( mapss[(x1)*100+y1+1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1)*100+y1+1]->get_sky())->get_russ()!=rus ){(mapss[(x1)*100+y1+1]->get_sky())->damage(uron1);  ex=1; break; }} if( mapss[(x1)*100+y1+1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1)*100+y1+1]->get_land())->get_russ()!=rus ){(mapss[(x1)*100+y1+1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 7: {  if(x1==0 || y1==99) break; if( mapss[(x1-1)*100+y1+1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1-1)*100+y1+1]->get_sky())->get_russ()!=rus ){(mapss[(x1-1)*100+y1+1]->get_sky())->damage(uron1);  ex=1; break; }} if( mapss[(x1-1)*100+y1+1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1-1)*100+y1+1]->get_land())->get_russ()!=rus ){(mapss[(x1-1)*100+y1+1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									
									case 8: {  if(x1==0) break; if( mapss[(x1-1)*100+y1]->get_sky() ) 
											{ /*sky*/  if( (mapss[(x1-1)*100+y1]->get_sky())->get_russ()!=rus ){(mapss[(x1-1)*100+y1]->get_sky())->damage(uron1);  ex=1; break; }} if( mapss[(x1-1)*100+y1]->get_land() ) 
											{ /*land*/ if( (mapss[(x1-1)*100+y1]->get_land())->get_russ()!=rus ){(mapss[(x1-1)*100+y1]->get_land())->damage(uron2);  ex=1; break; } } break;}
									}
									if(ex) break;
								}


							}

							// пересмтреть!! Может убить и двигаться. Корректный выход из цикла при уничтожении или ранении соперника
						 // если ничего не нашли, то передислацируемся

							ex = pop = 0; x2=x1; y2=y1;
							srand(time(NULL));
							int size1 = 7;
							int m1[8]={1,2,3,4,5,6,7,8};
							randSort(m1, 8);

							if(sk_la)
							{							
							// передвижение по воздуху
							while(!ex)
							{
								pl = m1[size1];
								size1--;
								switch(pl)
								{
								case 1: {  if(x1==0 || y1==0) break; if( mapss[(x1-1)*100+y1-1]->get_sky() ) break; x2 = x1 -1 ; y2 = y1 - 1; ex=1; break;}
								case 2: {  if(y1==0) break; if( mapss[(x1)*100+y1-1]->get_sky() ) break; y2 = y1 -1; ex=1; break;}
								case 3: {  if(y1==0 || x1==99) break; if( mapss[(x1+1)*100+y1-1]->get_sky() ) break; y2 = y1 -1; x2 = x1 +1; ex=1; break;}
								case 4: {  if(x1==99) break; if( mapss[(x1+1)*100+y1]->get_sky() ) break; x2 = x1 +1; ex=1; break;}
								case 5: {  if(y1==99 || x1==99) break; if( mapss[(x1+1)*100+y1+1]->get_sky() ) break; x2 = x1 +1; y2 = y1 +1; ex=1; break;}
								case 6: {  if(y1==99) break; if( mapss[(x1)*100+y1+1]->get_sky() ) break; y2 = y1 +1; ex=1; break;}
								case 7: {  if(x1==0 || y1==99) break; if( mapss[(x1-1)*100+y1+1]->get_sky() ) break; x2 = x1 -1; y2 =y1 +1; ex=1; break;}
								case 8: {  if(x1==0) break; if( mapss[(x1-1)*100+y1]->get_sky() ) break; x2 = x1 -1; ex=1; break;}
								}
								if(size1<0) break;
							}

							mapss[ml->get_coord_x()*100+ml->get_coord_y()]->clear_sky();
							ml->move(x2,y2,0,0);							
							mapss[x2*100+y2]->set_sky(*ml);

							}
							else
							{

							// передвижение по земле
							while(!ex)
							{
								pl = m1[size1];
								size1--;
								switch(pl)
								{
								case 1: {  if(x1==0 || y1==0) break;  if( mapss[(x1-1)*100+y1-1]->get_land() || mapss[(x1-1)*100+y1-1]->get_type() ==2 ) break; x2 = x1 -1 ; y2 = y1 - 1; ex=1; break;}
								case 2: {  if(y1==0) break; if( mapss[(x1)*100+y1-1]->get_land() || mapss[(x1)*100+y1-1]->get_type() ==2 ) break; y2 = y1 -1; ex=1; break;}
								case 3: {  if(y1==0 || x1==99) break; if( mapss[(x1+1)*100+y1-1]->get_land() || mapss[(x1+1)*100+y1-1]->get_type() ==2 ) break; y2 = y1 -1; x2 = x1 +1; ex=1; break;}
								case 4: {  if(x1==99) break; if( mapss[(x1+1)*100+y1]->get_land() || mapss[(x1+1)*100+y1]->get_type() ==2 ) break; x2 = x1 +1; ex=1; break;}
								case 5: {  if(y1==99 || x1==99) break; if( mapss[(x1+1)*100+y1+1]->get_land() || mapss[(x1+1)*100+y1+1]->get_type() ==2 ) break; x2 = x1 +1; y2 = y1 +1; ex=1; break;}
								case 6: {  if(y1==99) break; if( mapss[(x1)*100+y1+1]->get_land() || mapss[(x1)*100+y1+1]->get_type() ==2 ) break; y2 = y1 +1; ex=1; break;}
								case 7: {  if(x1==0 || y1==99) break; if( mapss[(x1-1)*100+y1+1]->get_land() || mapss[(x1-1)*100+y1+1]->get_type() ==2 ) break; x2 = x1 -1; y2 =y1 +1; ex=1; break;}
								case 8: {  if(x1==0) break; if( mapss[(x1-1)*100+y1]->get_land() || mapss[(x1-1)*100+y1]->get_type() ==2 ) break; x2 = x1 -1; ex=1; break;}
								}
								if(size1<0) break;
							}


							mapss[ml->get_coord_x()*100+ml->get_coord_y()]->clear_land();
							ml->move(x2,y2,0,0);							
							mapss[x2*100+y2]->set_land(*ml);
							
							}
						}

					}

				}


				printf_info(kol, (*t) ,1);
			}
		}
		

#pragma endregion
	private: System::Void рассыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
// 2 russ
				 стартToolStripMenuItem->Enabled = true;
				 паузаToolStripMenuItem->Enabled = false;
				 начатьИгруToolStripMenuItem->Enabled = false;
				 panel1->Visible = true;
				 panel2->Visible = true;
create_map(&maps);

// создаем базы
kompany.push_back( new base(0,0,1000) );
kompany.push_back( new base(99,0,1001) );

// создаем флот для базы
int kol=0;
for( vector<base*>::const_iterator it = kompany.begin(); it != kompany.end(); ++it)
{
	create_flot((*it), maps, kol);
	printf_info(kol, (*it),0 ); kol++;
}


			 }
private: System::Void стартToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 стартToolStripMenuItem->Enabled = false;
			 паузаToolStripMenuItem->Enabled = true;
			 timer1->Enabled = true;
			 timer1->Interval = 500;
		 }
private: System::Void паузаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*
			 стартToolStripMenuItem->Enabled = true;
			 			 паузаToolStripMenuItem->Enabled = false;
			 			 timer1->Enabled = false;
			 			 timer1->Interval = 500;*/
			 
		 }
private: System::Void быстрыйФинишToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Enabled = true;
			 timer1->Interval = 1;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 game(maps);

		 }
private: System::Void рассыToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {


		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 int nomer = listBox1->SelectedIndex;
			 vector<base*>::const_iterator it = kompany.begin();
			 printf_machine(nomer, (*it) ,  richTextBox1, maps);		 

		 }

private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nomer = listBox2->SelectedIndex;
			 vector<base*>::const_iterator it = kompany.begin()+1;
			 printf_machine(nomer, (*it) ,  richTextBox2, maps);		
		 }
private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nomer = listBox3->SelectedIndex;
			 vector<base*>::const_iterator it = kompany.begin()+2;
			 printf_machine(nomer, (*it) ,  richTextBox3, maps);		
		 }
private: System::Void listBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 int nomer = listBox4->SelectedIndex;
			 vector<base*>::const_iterator it = kompany.begin()+3;
			 printf_machine(nomer, (*it) ,  richTextBox4, maps);		
		 }
private: System::Void рассыToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 // 3 russ
			 стартToolStripMenuItem->Enabled = true;
			 паузаToolStripMenuItem->Enabled = false;
			 начатьИгруToolStripMenuItem->Enabled = false;
			 panel1->Visible = true;
			 panel2->Visible = true;
			 panel3->Visible = true;
			 create_map(&maps);

			 // создаем базы
			 kompany.push_back( new base(0,0,1000) );
			 kompany.push_back( new base(99,0,1001) );
			 kompany.push_back( new base(0,99,1002) );

			 // создаем флот для базы
			 int kol=0;
			 for( vector<base*>::const_iterator it = kompany.begin(); it != kompany.end(); ++it)
			 {
				 create_flot((*it), maps, kol);
				 printf_info(kol, (*it),0 ); kol++;
			 } 

		 }
private: System::Void рассыToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 // 4 russ
			 стартToolStripMenuItem->Enabled = true;
			 паузаToolStripMenuItem->Enabled = false;
			 начатьИгруToolStripMenuItem->Enabled = false;
			 panel1->Visible = true;
			 panel2->Visible = true;
			 panel3->Visible = true;
			 panel4->Visible = true;
			 create_map(&maps);

			 // создаем базы
			 kompany.push_back( new base(0,0,1000) );
			 kompany.push_back( new base(99,0,1001) );
			 kompany.push_back( new base(0,99,1002) );
			 kompany.push_back( new base(99,99,1003) );

			 // создаем флот для базы
			 int kol=0;
			 for( vector<base*>::const_iterator it = kompany.begin(); it != kompany.end(); ++it)
			 {
				 create_flot((*it), maps, kol);
				 printf_info(kol, (*it) ,0); kol++;
			 } 

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible = false;
			 panel2->Visible = false;
			 panel3->Visible = false;
			 panel4->Visible = false;		

		 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void паузаToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 стартToolStripMenuItem->Enabled = true;
			 паузаToolStripMenuItem->Enabled = false;
			 timer1->Enabled = false;
			 timer1->Interval = 500;			
		 }
private: System::Void tESTToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			  game(maps);

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 int f =  System::Convert::ToInt32(textBox1->Text);
			 inf(maps,f);
		 }
};
}

