#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OpForm
	/// </summary>
	public ref class OpForm : public System::Windows::Forms::Form
	{
	public:
		OpForm(void)
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
		~OpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ B_Exit;
	protected:
	public: System::Windows::Forms::Button^ B_Osn;

	protected:

	public: System::Windows::Forms::Label^ label11;
	private:
	public: System::Windows::Forms::TextBox^ TBfb;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ TBb;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ LB_B2;
	public: System::Windows::Forms::Label^ LB_B1;
	public: System::Windows::Forms::ListBox^ LBd;
	public: System::Windows::Forms::ListBox^ LBfx2;
	public: System::Windows::Forms::ListBox^ LBfx1;
	public: System::Windows::Forms::ListBox^ LBx2;
	public: System::Windows::Forms::ListBox^ LBx1;
	public: System::Windows::Forms::ListBox^ LBb2;
	public: System::Windows::Forms::ListBox^ LBb1;
	public: System::Windows::Forms::Label^ label1;

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
			this->B_Exit = (gcnew System::Windows::Forms::Button());
			this->B_Osn = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TBfb = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TBb = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LB_B2 = (gcnew System::Windows::Forms::Label());
			this->LB_B1 = (gcnew System::Windows::Forms::Label());
			this->LBd = (gcnew System::Windows::Forms::ListBox());
			this->LBfx2 = (gcnew System::Windows::Forms::ListBox());
			this->LBfx1 = (gcnew System::Windows::Forms::ListBox());
			this->LBx2 = (gcnew System::Windows::Forms::ListBox());
			this->LBx1 = (gcnew System::Windows::Forms::ListBox());
			this->LBb2 = (gcnew System::Windows::Forms::ListBox());
			this->LBb1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// B_Exit
			// 
			this->B_Exit->Location = System::Drawing::Point(761, 285);
			this->B_Exit->Name = L"B_Exit";
			this->B_Exit->Size = System::Drawing::Size(174, 44);
			this->B_Exit->TabIndex = 154;
			this->B_Exit->Text = L"Выход";
			this->B_Exit->UseVisualStyleBackColor = true;
			this->B_Exit->Click += gcnew System::EventHandler(this, &OpForm::B_Exit_Click);
			// 
			// B_Osn
			// 
			this->B_Osn->Location = System::Drawing::Point(381, 285);
			this->B_Osn->Name = L"B_Osn";
			this->B_Osn->Size = System::Drawing::Size(174, 44);
			this->B_Osn->TabIndex = 153;
			this->B_Osn->Text = L"К основным результатам";
			this->B_Osn->UseVisualStyleBackColor = true;
			this->B_Osn->Click += gcnew System::EventHandler(this, &OpForm::B_Osn_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(297, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(367, 20);
			this->label11->TabIndex = 152;
			this->label11->Text = L"Промежуточные результаты оптимизации";
			// 
			// TBfb
			// 
			this->TBfb->Location = System::Drawing::Point(82, 309);
			this->TBfb->Name = L"TBfb";
			this->TBfb->Size = System::Drawing::Size(167, 20);
			this->TBfb->TabIndex = 151;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(27, 308);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 19);
			this->label10->TabIndex = 150;
			this->label10->Text = L"F(b) =";
			// 
			// TBb
			// 
			this->TBb->Location = System::Drawing::Point(82, 278);
			this->TBb->Name = L"TBb";
			this->TBb->Size = System::Drawing::Size(167, 20);
			this->TBb->TabIndex = 149;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(42, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 19);
			this->label7->TabIndex = 148;
			this->label7->Text = L"b =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(849, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 19);
			this->label9->TabIndex = 147;
			this->label9->Text = L"b2-b1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(724, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 19);
			this->label8->TabIndex = 146;
			this->label8->Text = L"F(x2)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(591, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 19);
			this->label6->TabIndex = 145;
			this->label6->Text = L"F(x1)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(465, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 19);
			this->label5->TabIndex = 144;
			this->label5->Text = L"x2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(333, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 19);
			this->label4->TabIndex = 143;
			this->label4->Text = L"x1";
			// 
			// LB_B2
			// 
			this->LB_B2->AutoSize = true;
			this->LB_B2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LB_B2->Location = System::Drawing::Point(209, 40);
			this->LB_B2->Name = L"LB_B2";
			this->LB_B2->Size = System::Drawing::Size(25, 19);
			this->LB_B2->TabIndex = 142;
			this->LB_B2->Text = L"b2";
			// 
			// LB_B1
			// 
			this->LB_B1->AutoSize = true;
			this->LB_B1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LB_B1->Location = System::Drawing::Point(76, 40);
			this->LB_B1->Name = L"LB_B1";
			this->LB_B1->Size = System::Drawing::Size(25, 19);
			this->LB_B1->TabIndex = 141;
			this->LB_B1->Text = L"b1";
			// 
			// LBd
			// 
			this->LBd->FormattingEnabled = true;
			this->LBd->Location = System::Drawing::Point(810, 62);
			this->LBd->Name = L"LBd";
			this->LBd->Size = System::Drawing::Size(125, 186);
			this->LBd->TabIndex = 140;
			// 
			// LBfx2
			// 
			this->LBfx2->FormattingEnabled = true;
			this->LBfx2->Location = System::Drawing::Point(679, 62);
			this->LBfx2->Name = L"LBfx2";
			this->LBfx2->Size = System::Drawing::Size(125, 186);
			this->LBfx2->TabIndex = 139;
			// 
			// LBfx1
			// 
			this->LBfx1->FormattingEnabled = true;
			this->LBfx1->Location = System::Drawing::Point(548, 62);
			this->LBfx1->Name = L"LBfx1";
			this->LBfx1->Size = System::Drawing::Size(125, 186);
			this->LBfx1->TabIndex = 138;
			// 
			// LBx2
			// 
			this->LBx2->FormattingEnabled = true;
			this->LBx2->Location = System::Drawing::Point(417, 62);
			this->LBx2->Name = L"LBx2";
			this->LBx2->Size = System::Drawing::Size(125, 186);
			this->LBx2->TabIndex = 137;
			// 
			// LBx1
			// 
			this->LBx1->FormattingEnabled = true;
			this->LBx1->Location = System::Drawing::Point(286, 62);
			this->LBx1->Name = L"LBx1";
			this->LBx1->Size = System::Drawing::Size(125, 186);
			this->LBx1->TabIndex = 136;
			// 
			// LBb2
			// 
			this->LBb2->FormattingEnabled = true;
			this->LBb2->Location = System::Drawing::Point(155, 62);
			this->LBb2->Name = L"LBb2";
			this->LBb2->Size = System::Drawing::Size(125, 186);
			this->LBb2->TabIndex = 135;
			// 
			// LBb1
			// 
			this->LBb1->FormattingEnabled = true;
			this->LBb1->Location = System::Drawing::Point(24, 62);
			this->LBb1->Name = L"LBb1";
			this->LBb1->Size = System::Drawing::Size(125, 186);
			this->LBb1->TabIndex = 134;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 251);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 20);
			this->label1->TabIndex = 155;
			this->label1->Text = L"Найденное значение параметра";
			// 
			// OpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 338);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->B_Exit);
			this->Controls->Add(this->B_Osn);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->TBfb);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TBb);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->LB_B2);
			this->Controls->Add(this->LB_B1);
			this->Controls->Add(this->LBd);
			this->Controls->Add(this->LBfx2);
			this->Controls->Add(this->LBfx1);
			this->Controls->Add(this->LBx2);
			this->Controls->Add(this->LBx1);
			this->Controls->Add(this->LBb2);
			this->Controls->Add(this->LBb1);
			this->Name = L"OpForm";
			this->Text = L"Промежуточные результаты оптимизации";
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
