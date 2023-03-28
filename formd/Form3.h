#pragma once
#include<fstream>
#include<string>
#include "Form4.h"
namespace formd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;                 // to read and write from file

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Clear;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
    private: System::Windows::Forms::OpenFileDialog^  ofDialog;    //////////ofDialog
	private: System::Windows::Forms::SaveFileDialog^  sfDialog;    /////////sfDialog

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ofDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gender :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Id :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"period :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"From :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Cost :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Enter Id :";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Location = System::Drawing::Point(96, 49);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(47, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Location = System::Drawing::Point(175, 47);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 121);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 20);
			this->textBox3->TabIndex = 11;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(96, 157);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(138, 20);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(96, 191);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(96, 236);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 20);
			this->textBox5->TabIndex = 14;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(1, 287);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(527, 121);
			this->listBox1->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(390, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Last Name :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(386, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Phone Number :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(390, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Room :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(386, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Room Number :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(527, 24);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(527, 85);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 20);
			this->textBox7->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Single", L"Double", L"Bronze"});
			this->comboBox1->Location = System::Drawing::Point(527, 124);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 22;
			this->comboBox1->Text = L"Room";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(30) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30"});
			this->comboBox2->Location = System::Drawing::Point(527, 165);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 23;
			this->comboBox2->Text = L"Room Number";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(259, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::Transparent;
			this->Clear->ForeColor = System::Drawing::Color::Red;
			this->Clear->Location = System::Drawing::Point(399, 236);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 23);
			this->Clear->TabIndex = 25;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &Form3::Clear_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->Location = System::Drawing::Point(573, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 26;
			this->button3->Text = L"View";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(0, 414);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Add";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button5->ForeColor = System::Drawing::Color::Blue;
			this->button5->Location = System::Drawing::Point(128, 414);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Save";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button6->ForeColor = System::Drawing::Color::Blue;
			this->button6->Location = System::Drawing::Point(284, 414);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 23);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Remove \\ Delete";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form3::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button7->ForeColor = System::Drawing::Color::Blue;
			this->button7->Location = System::Drawing::Point(453, 414);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 30;
			this->button7->Text = L"UpDate";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Navy;
			this->button8->Location = System::Drawing::Point(573, 414);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 31;
			this->button8->Text = L"Services";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form3::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->ForeColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(685, 414);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 32;
			this->button9->Text = L"Exit";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form3::button9_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(818, 464);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private : void	ClearControls()
		{

          
           textBox1->Text="";
		   textBox2->Text="";
		   textBox3->Text="";
		   textBox4->Text="";
		   textBox5->Text="";
		   textBox6->Text="";
		   textBox7->Text="";
		   dateTimePicker1->Text="";
		   radioButton1->Checked=false;
		   radioButton2->Checked=false;
		   comboBox1->Text="";
		   comboBox2->Text="";

	  }
		

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			  Form4^ f4 = gcnew Form4();
			 f4->ShowDialog();
		 }


private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((textBox1->Text=="")||(textBox2->Text=="")||( textBox3->Text=="")||(textBox4->Text=="")||(textBox6->Text=="")||(textBox7->Text=="")||(comboBox1->SelectedIndex==-1)||(comboBox2->SelectedIndex==-1)||((radioButton1->Checked== false)&&(radioButton2->Checked == false)))
			 {
			  MessageBox::Show (" Complet your Data ","Error", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
			 String^FormInfo="";
			 String^GName=textBox1->Text+"\t"+textBox6->Text;
			 String^Ge;
			 String^da=dateTimePicker1->Text;
			 String^Id=textBox2->Text;
			 String^pe=textBox3->Text;
			 String^co=textBox4->Text;
			 double phone=Convert::ToDouble(textBox7->Text);
			 String^room=comboBox1->Text;
			 String^roomnum=comboBox2->Text;
			 if(radioButton1->Checked==true)
			 {
				 Ge="male";
			 }
			 if(radioButton2->Checked==true)
			 {
				 Ge="Female";
			 }
			 FormInfo=GName+"\t"+Ge+"\t"+Id+"\t"+phone+"\t"+room+"\t"+roomnum+"\t"+pe+"\t"+co+"\t"+da;
			 listBox1->Items->Add(FormInfo);
			 }
		 }
private: System::Void Clear_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClearControls();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Remove(listBox1->SelectedItem);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter^saveF=gcnew StreamWriter("data.txt");
			for (int i=0;i<listBox1->Items->Count;i++)
			{
				saveF->WriteLine(listBox1->Items[i]);
			}
			    saveF->Close();
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 double x=Convert::ToDouble(textBox3->Text);
			 String^y;
			 switch(comboBox1->SelectedIndex)
			{
			   case 0 :x*=300; 	  y=Convert::ToString(x);   textBox4->Text=y+"$";	    break;
		       case 1 :x*=500;    y=Convert::ToString(x);   textBox4->Text=y+"$";	break;
		       case 2 :x*=1000;   y=Convert::ToString(x);   textBox4->Text=y+"$";		break;
		    }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^FormInfo="";
			 String^GName=textBox1->Text+"\t"+textBox6->Text;
			 String^Ge;
			 String^da=dateTimePicker1->Text;
			 String^Id=textBox2->Text;
			 String^pe=textBox3->Text;
			 String^co=textBox4->Text;
			 double phone=Convert::ToDouble(textBox7->Text);
			 String^room=comboBox1->Text;
			 String^roomnum=comboBox2->Text;
			 if(radioButton1->Checked==true)
			 {
				 Ge="male";
			 }
			 if(radioButton2->Checked==true)
			 {
				 Ge="Female";
			 }
			 FormInfo=GName+"\t"+Ge+"\t"+Id+"\t"+phone+"\t"+room+"\t"+roomnum+"\t"+pe+"\t"+co+"\t"+da;
			 listBox1->Items[listBox1->SelectedIndex] = FormInfo ;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamReader^ ser=gcnew StreamReader("data.txt");
				while(!ser->EndOfStream)
				{
					String^ row=Convert::ToString(ser->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
				    if(textBox5->Text==arr[3])
				    {								
				 textBox1->Text=arr[0];
				 textBox6->Text=arr[1];
				 textBox2->Text=arr[3];
				 textBox7->Text=arr[4];
				 textBox3->Text=arr[7];
				 textBox4->Text=arr[8];
				 comboBox1->Text=arr[5];
				 comboBox2->Text=arr[6];;
				 comboBox2->Items->Add(arr[6]);
				 if (arr[2]== "Male")
					{
					 radioButton1->Checked = true;
					}
				 else if (arr[2]== "Female")
					{
					 radioButton1->Checked = true;
					}
					goto k;
					}
				}
					MessageBox::Show("This ID can't find","Error",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			                    k:	ser->Close();		 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 StreamReader^ser_view= gcnew StreamReader("data.txt");      //reade file with IO
			 while(!ser_view->EndOfStream)
			 {
			 listBox1->Items->Add(ser_view->ReadLine());                //read data from file

			 }
			 ser_view->Close();
		 }
};
}

