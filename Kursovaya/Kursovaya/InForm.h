#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для InForm
	/// </summary>
	public ref class InForm : public System::Windows::Forms::Form
	{
	public:
		InForm(void)
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
		~InForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::ListBox^ LBH1;
	protected:

	public: System::Windows::Forms::ListBox^ LBN1;

	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::ListBox^ LBI1;

	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::ListBox^ LBI2;

	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::ListBox^ LBH2;

	public: System::Windows::Forms::ListBox^ LBN2;

	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::ListBox^ LBI3;

	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::ListBox^ LBH3;

	public: System::Windows::Forms::ListBox^ LBN3;

	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::TextBox^ TBI1;

	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::TextBox^ TBS1;

	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::TextBox^ TBS2;

	public: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::TextBox^ TBI2;

	public: System::Windows::Forms::Label^ label17;
	public: System::Windows::Forms::TextBox^ TBS3;

	public: System::Windows::Forms::Label^ label18;
	public: System::Windows::Forms::TextBox^ TBI3;

	public: System::Windows::Forms::Label^ label19;
	public: System::Windows::Forms::Button^ B_Exit;
	public: System::Windows::Forms::Button^ B_Osn;

	public:




	protected:




































	public:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LBH1 = (gcnew System::Windows::Forms::ListBox());
			this->LBN1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->LBI1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LBI2 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->LBH2 = (gcnew System::Windows::Forms::ListBox());
			this->LBN2 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->LBI3 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->LBH3 = (gcnew System::Windows::Forms::ListBox());
			this->LBN3 = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->TBI1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TBS1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->TBS2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TBI2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->TBS3 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->TBI3 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->B_Exit = (gcnew System::Windows::Forms::Button());
			this->B_Osn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(408, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 19);
			this->label3->TabIndex = 122;
			this->label3->Text = L"I(h)";
			// 
			// LBH1
			// 
			this->LBH1->FormattingEnabled = true;
			this->LBH1->Location = System::Drawing::Point(180, 102);
			this->LBH1->Name = L"LBH1";
			this->LBH1->Size = System::Drawing::Size(154, 56);
			this->LBH1->TabIndex = 121;
			// 
			// LBN1
			// 
			this->LBN1->FormattingEnabled = true;
			this->LBN1->Location = System::Drawing::Point(20, 102);
			this->LBN1->Name = L"LBN1";
			this->LBN1->Size = System::Drawing::Size(154, 56);
			this->LBN1->TabIndex = 120;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(250, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 19);
			this->label2->TabIndex = 119;
			this->label2->Text = L"h";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(47, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(394, 20);
			this->label11->TabIndex = 123;
			this->label11->Text = L"Промежуточные результаты интегрирования";
			// 
			// LBI1
			// 
			this->LBI1->FormattingEnabled = true;
			this->LBI1->Location = System::Drawing::Point(340, 102);
			this->LBI1->Name = L"LBI1";
			this->LBI1->Size = System::Drawing::Size(154, 56);
			this->LBI1->TabIndex = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(84, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 19);
			this->label1->TabIndex = 124;
			this->label1->Text = L"n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(81, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(359, 40);
			this->label4->TabIndex = 126;
			this->label4->Text = L"Промежуточные результаты интегрирования,\r\nплощади S1";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(81, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(359, 40);
			this->label5->TabIndex = 133;
			this->label5->Text = L"Промежуточные результаты интегрирования,\r\nплощади S2";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// LBI2
			// 
			this->LBI2->FormattingEnabled = true;
			this->LBI2->Location = System::Drawing::Point(340, 259);
			this->LBI2->Name = L"LBI2";
			this->LBI2->Size = System::Drawing::Size(154, 56);
			this->LBI2->TabIndex = 132;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(84, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 19);
			this->label6->TabIndex = 131;
			this->label6->Text = L"n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(408, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 19);
			this->label7->TabIndex = 130;
			this->label7->Text = L"I(h)";
			// 
			// LBH2
			// 
			this->LBH2->FormattingEnabled = true;
			this->LBH2->Location = System::Drawing::Point(180, 259);
			this->LBH2->Name = L"LBH2";
			this->LBH2->Size = System::Drawing::Size(154, 56);
			this->LBH2->TabIndex = 129;
			// 
			// LBN2
			// 
			this->LBN2->FormattingEnabled = true;
			this->LBN2->Location = System::Drawing::Point(20, 259);
			this->LBN2->Name = L"LBN2";
			this->LBN2->Size = System::Drawing::Size(154, 56);
			this->LBN2->TabIndex = 128;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(250, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 19);
			this->label8->TabIndex = 127;
			this->label8->Text = L"h";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(81, 369);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(359, 40);
			this->label9->TabIndex = 140;
			this->label9->Text = L"Промежуточные результаты интегрирования,\r\nплощади S3";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// LBI3
			// 
			this->LBI3->FormattingEnabled = true;
			this->LBI3->Location = System::Drawing::Point(340, 436);
			this->LBI3->Name = L"LBI3";
			this->LBI3->Size = System::Drawing::Size(154, 56);
			this->LBI3->TabIndex = 139;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(84, 414);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 19);
			this->label10->TabIndex = 138;
			this->label10->Text = L"n";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(408, 414);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 19);
			this->label12->TabIndex = 137;
			this->label12->Text = L"I(h)";
			// 
			// LBH3
			// 
			this->LBH3->FormattingEnabled = true;
			this->LBH3->Location = System::Drawing::Point(180, 436);
			this->LBH3->Name = L"LBH3";
			this->LBH3->Size = System::Drawing::Size(154, 56);
			this->LBH3->TabIndex = 136;
			// 
			// LBN3
			// 
			this->LBN3->FormattingEnabled = true;
			this->LBN3->Location = System::Drawing::Point(20, 436);
			this->LBN3->Name = L"LBN3";
			this->LBN3->Size = System::Drawing::Size(154, 56);
			this->LBN3->TabIndex = 135;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(250, 414);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 19);
			this->label13->TabIndex = 134;
			this->label13->Text = L"h";
			// 
			// TBI1
			// 
			this->TBI1->Location = System::Drawing::Point(74, 169);
			this->TBI1->Name = L"TBI1";
			this->TBI1->Size = System::Drawing::Size(100, 20);
			this->TBI1->TabIndex = 142;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(24, 169);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 20);
			this->label14->TabIndex = 141;
			this->label14->Text = L"I1 =";
			// 
			// TBS1
			// 
			this->TBS1->Location = System::Drawing::Point(394, 164);
			this->TBS1->Name = L"TBS1";
			this->TBS1->Size = System::Drawing::Size(100, 20);
			this->TBS1->TabIndex = 144;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(344, 164);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 20);
			this->label15->TabIndex = 143;
			this->label15->Text = L"S1 =";
			// 
			// TBS2
			// 
			this->TBS2->Location = System::Drawing::Point(394, 321);
			this->TBS2->Name = L"TBS2";
			this->TBS2->Size = System::Drawing::Size(100, 20);
			this->TBS2->TabIndex = 148;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(344, 321);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(46, 20);
			this->label16->TabIndex = 147;
			this->label16->Text = L"S2 =";
			// 
			// TBI2
			// 
			this->TBI2->Location = System::Drawing::Point(74, 323);
			this->TBI2->Name = L"TBI2";
			this->TBI2->Size = System::Drawing::Size(100, 20);
			this->TBI2->TabIndex = 146;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(24, 323);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 20);
			this->label17->TabIndex = 145;
			this->label17->Text = L"I2 =";
			// 
			// TBS3
			// 
			this->TBS3->Location = System::Drawing::Point(394, 498);
			this->TBS3->Name = L"TBS3";
			this->TBS3->Size = System::Drawing::Size(100, 20);
			this->TBS3->TabIndex = 152;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(344, 498);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(46, 20);
			this->label18->TabIndex = 151;
			this->label18->Text = L"S3 =";
			// 
			// TBI3
			// 
			this->TBI3->Location = System::Drawing::Point(74, 500);
			this->TBI3->Name = L"TBI3";
			this->TBI3->Size = System::Drawing::Size(100, 20);
			this->TBI3->TabIndex = 150;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(24, 500);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 20);
			this->label19->TabIndex = 149;
			this->label19->Text = L"I3 =";
			// 
			// B_Exit
			// 
			this->B_Exit->Location = System::Drawing::Point(320, 524);
			this->B_Exit->Name = L"B_Exit";
			this->B_Exit->Size = System::Drawing::Size(174, 44);
			this->B_Exit->TabIndex = 156;
			this->B_Exit->Text = L"Выход";
			this->B_Exit->UseVisualStyleBackColor = true;
			this->B_Exit->Click += gcnew System::EventHandler(this, &InForm::B_Exit_Click);
			// 
			// B_Osn
			// 
			this->B_Osn->Location = System::Drawing::Point(20, 526);
			this->B_Osn->Name = L"B_Osn";
			this->B_Osn->Size = System::Drawing::Size(174, 44);
			this->B_Osn->TabIndex = 155;
			this->B_Osn->Text = L"К основным результатам";
			this->B_Osn->UseVisualStyleBackColor = true;
			this->B_Osn->Click += gcnew System::EventHandler(this, &InForm::B_Osn_Click);
			// 
			// InForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 579);
			this->Controls->Add(this->B_Exit);
			this->Controls->Add(this->B_Osn);
			this->Controls->Add(this->TBS3);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->TBI3);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->TBS2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->TBI2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->TBS1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->TBI1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->LBI3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->LBH3);
			this->Controls->Add(this->LBN3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->LBI2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->LBH2);
			this->Controls->Add(this->LBN2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->LBI1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LBH1);
			this->Controls->Add(this->LBN1);
			this->Controls->Add(this->label2);
			this->Name = L"InForm";
			this->Text = L"Промежуточные результаты интегрирования";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void B_Osn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Owner->Show();
	this->Hide();
}
private: System::Void B_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
