#pragma once

namespace formd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(18) {L"Single -> 300 $", L"\t- BreakFast ,Dinner", L"\t-House Keeping", 
				L"\t-Parking", L"          ", L"Double -> 500$", L"\t- BreakFast ,Dinner", L"\t-House Keeping", L"\t-Parking", L"\t-swimming Pool", 
				L"", L"Bronze ->1000 $", L"\t- BreakFast ,Launch ,Dinner", L"\t-Tennis", L"\t-House Keeping", L"\t-swimming Pool", L"\t-souna , GYM", 
				L"\t"});
			this->listBox1->Location = System::Drawing::Point(1, 47);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(448, 303);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(484, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(206, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"-services-";
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 352);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form4";
			this->Text = L"services";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	};
}
