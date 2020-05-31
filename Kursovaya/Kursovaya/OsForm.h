#pragma once
#include "Header.h"
#include "InForm.h";
#include "OpForm.h";
namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OsForm
	/// </summary>
	public ref class OsForm : public System::Windows::Forms::Form
	{
	public:
		OsForm(double pc, double pa, double px1, double px2, double peps)
		{
			InitializeComponent();
			c = pc;
			a = pa;
			x1 = px1;
			x2 = px2;
			eps = peps;
			opf = gcnew OpForm();
			opf->Owner = this;
			inf = gcnew InForm();
			inf->Owner = this;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~OsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::Label^ label24;

	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::TextBox^ TBb2;

	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ TBb1;

	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::ListBox^ LBfb;

	public: System::Windows::Forms::ListBox^ LBb;

	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Button^ B_Ras;

	public:

	public: System::Windows::Forms::TextBox^ TBb;
	private:
	public:

	private:
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ TBfb;

	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Button^ B_Op;

	public:

	public:
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ TBs1;
	private:

	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::TextBox^ TBs2;

	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::TextBox^ TBs3;

	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::TextBox^ TBs13;


	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Button^ B_In;
	public: System::Windows::Forms::Button^ B_Exit;
	public: System::Windows::Forms::Button^ B_Is;



	public:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TBb2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TBb1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LBfb = (gcnew System::Windows::Forms::ListBox());
			this->LBb = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->B_Ras = (gcnew System::Windows::Forms::Button());
			this->TBb = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TBfb = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->B_Op = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TBs1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TBs2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TBs3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->TBs13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->B_In = (gcnew System::Windows::Forms::Button());
			this->B_Exit = (gcnew System::Windows::Forms::Button());
			this->B_Is = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(120, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Основные результаты";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(154, 372);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(166, 20);
			this->label24->TabIndex = 79;
			this->label24->Text = L"Результаты расчёта";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(108, 45);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(226, 20);
			this->label15->TabIndex = 77;
			this->label15->Text = L"Результаты оптимзиации";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(399, 20);
			this->label8->TabIndex = 76;
			this->label8->Text = L"Границы унимодального отрезка для оптимизации";
			// 
			// TBb2
			// 
			this->TBb2->Location = System::Drawing::Point(275, 293);
			this->TBb2->Name = L"TBb2";
			this->TBb2->Size = System::Drawing::Size(123, 20);
			this->TBb2->TabIndex = 75;
			this->TBb2->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(228, 293);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 20);
			this->label6->TabIndex = 74;
			this->label6->Text = L"b2 =";
			// 
			// TBb1
			// 
			this->TBb1->Location = System::Drawing::Point(86, 293);
			this->TBb1->Name = L"TBb1";
			this->TBb1->Size = System::Drawing::Size(127, 20);
			this->TBb1->TabIndex = 73;
			this->TBb1->Text = L"1,2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(36, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 20);
			this->label5->TabIndex = 72;
			this->label5->Text = L"b1 =";
			// 
			// LBfb
			// 
			this->LBfb->FormattingEnabled = true;
			this->LBfb->Location = System::Drawing::Point(245, 122);
			this->LBfb->Name = L"LBfb";
			this->LBfb->Size = System::Drawing::Size(120, 134);
			this->LBfb->TabIndex = 71;
			// 
			// LBb
			// 
			this->LBb->FormattingEnabled = true;
			this->LBb->Location = System::Drawing::Point(93, 122);
			this->LBb->Name = L"LBb";
			this->LBb->Size = System::Drawing::Size(120, 134);
			this->LBb->TabIndex = 70;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(287, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 20);
			this->label4->TabIndex = 69;
			this->label4->Text = L"F(b)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(142, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 20);
			this->label3->TabIndex = 68;
			this->label3->Text = L"b";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(49, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(349, 20);
			this->label2->TabIndex = 67;
			this->label2->Text = L"Таблица значений оптимизируемой функции";
			// 
			// B_Ras
			// 
			this->B_Ras->Location = System::Drawing::Point(144, 319);
			this->B_Ras->Name = L"B_Ras";
			this->B_Ras->Size = System::Drawing::Size(174, 44);
			this->B_Ras->TabIndex = 80;
			this->B_Ras->Text = L"Расчёт параметра b";
			this->B_Ras->UseVisualStyleBackColor = true;
			this->B_Ras->Click += gcnew System::EventHandler(this, &OsForm::B_Ras_Click);
			// 
			// TBb
			// 
			this->TBb->Location = System::Drawing::Point(86, 405);
			this->TBb->Name = L"TBb";
			this->TBb->Size = System::Drawing::Size(127, 20);
			this->TBb->TabIndex = 82;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(46, 405);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 20);
			this->label7->TabIndex = 81;
			this->label7->Text = L"b =";
			// 
			// TBfb
			// 
			this->TBfb->Location = System::Drawing::Point(275, 405);
			this->TBfb->Name = L"TBfb";
			this->TBfb->Size = System::Drawing::Size(123, 20);
			this->TBfb->TabIndex = 84;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(215, 405);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 20);
			this->label9->TabIndex = 83;
			this->label9->Text = L"F(b) =";
			// 
			// B_Op
			// 
			this->B_Op->Location = System::Drawing::Point(146, 431);
			this->B_Op->Name = L"B_Op";
			this->B_Op->Size = System::Drawing::Size(174, 44);
			this->B_Op->TabIndex = 85;
			this->B_Op->Text = L"Переход на форму с промежуточными результатми";
			this->B_Op->UseVisualStyleBackColor = true;
			this->B_Op->Click += gcnew System::EventHandler(this, &OsForm::B_Op_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(108, 489);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(253, 20);
			this->label10->TabIndex = 86;
			this->label10->Text = L"Результаты интегрирования";
			// 
			// TBs1
			// 
			this->TBs1->Location = System::Drawing::Point(65, 523);
			this->TBs1->Name = L"TBs1";
			this->TBs1->Size = System::Drawing::Size(136, 20);
			this->TBs1->TabIndex = 88;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(11, 523);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 20);
			this->label11->TabIndex = 87;
			this->label11->Text = L"S1 =";
			// 
			// TBs2
			// 
			this->TBs2->Location = System::Drawing::Point(296, 523);
			this->TBs2->Name = L"TBs2";
			this->TBs2->Size = System::Drawing::Size(123, 20);
			this->TBs2->TabIndex = 90;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(247, 523);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 20);
			this->label12->TabIndex = 89;
			this->label12->Text = L"S2 =";
			// 
			// TBs3
			// 
			this->TBs3->Location = System::Drawing::Point(66, 560);
			this->TBs3->Name = L"TBs3";
			this->TBs3->Size = System::Drawing::Size(135, 20);
			this->TBs3->TabIndex = 92;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(12, 560);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 20);
			this->label13->TabIndex = 91;
			this->label13->Text = L"S3 =";
			// 
			// TBs13
			// 
			this->TBs13->Location = System::Drawing::Point(296, 560);
			this->TBs13->Name = L"TBs13";
			this->TBs13->Size = System::Drawing::Size(123, 20);
			this->TBs13->TabIndex = 94;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(205, 560);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(88, 20);
			this->label14->TabIndex = 93;
			this->label14->Text = L"S1 + S3 =";
			// 
			// B_In
			// 
			this->B_In->Location = System::Drawing::Point(146, 587);
			this->B_In->Name = L"B_In";
			this->B_In->Size = System::Drawing::Size(174, 44);
			this->B_In->TabIndex = 95;
			this->B_In->Text = L"Переход на форму с промежуточными результатми";
			this->B_In->UseVisualStyleBackColor = true;
			this->B_In->Click += gcnew System::EventHandler(this, &OsForm::B_In_Click);
			// 
			// B_Exit
			// 
			this->B_Exit->Location = System::Drawing::Point(245, 636);
			this->B_Exit->Name = L"B_Exit";
			this->B_Exit->Size = System::Drawing::Size(174, 44);
			this->B_Exit->TabIndex = 96;
			this->B_Exit->Text = L"Выход";
			this->B_Exit->UseVisualStyleBackColor = true;
			this->B_Exit->Click += gcnew System::EventHandler(this, &OsForm::B_Exit_Click);
			// 
			// B_Is
			// 
			this->B_Is->Location = System::Drawing::Point(2, 634);
			this->B_Is->Name = L"B_Is";
			this->B_Is->Size = System::Drawing::Size(174, 44);
			this->B_Is->TabIndex = 97;
			this->B_Is->Text = L"Переход на форму с исходными данными";
			this->B_Is->UseVisualStyleBackColor = true;
			this->B_Is->Click += gcnew System::EventHandler(this, &OsForm::B_Is_Click);
			// 
			// OsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(425, 681);
			this->Controls->Add(this->B_Is);
			this->Controls->Add(this->B_Exit);
			this->Controls->Add(this->B_In);
			this->Controls->Add(this->TBs13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->TBs3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->TBs2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->TBs1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->B_Op);
			this->Controls->Add(this->TBfb);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TBb);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->B_Ras);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TBb2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TBb1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->LBfb);
			this->Controls->Add(this->LBb);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OsForm";
			this->Text = L"Основные результаты";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
double c, a, x1, x2, eps;
InForm^ inf;
OpForm^ opf;
private: System::Void B_Ras_Click(System::Object^ sender, System::EventArgs^ e) {
	double b, fb,In1,In2,In3,S1,S2,S3,S13;
	// Ввод границ унимодального отрезка
	double b1 = VvodTb(TBb1);
	double b2 = VvodTb(TBb2);
	// Вычисление параметра b на унимодальном отрезке и вывод результатов на формы оптимизации и осн. результатов
	Dihotomia(b1, b2, x1, x2, eps, a, c, b, fb, opf->LBb1, opf->LBb2, opf->LBx1, opf->LBx2, opf->LBfx1, opf->LBfx2, opf->LBd);
	VivodTB(opf->TBb,b);
	VivodTB(opf->TBfb, fb);
	VivodTB(TBb, b);
	VivodTB(TBfb, fb);
	// Вызов функции для расчета оптимизируемой функции
	// С найденным значеним параметра b и вывовдом площадей и результатов интегрирования
	FunOp(b, x1, x2, eps, a, c, S1, S2, S3, S13, inf->TBI1, inf->TBI2, inf->TBI3,inf->LBI1, inf->LBN1, inf->LBH1, inf->LBI2, inf->LBN2, inf->LBH2, inf->LBI3, inf->LBN3, inf->LBH3);
	VivodTB(inf->TBS1, S1);
	VivodTB(inf->TBS2, S2);
	VivodTB(inf->TBS3, S3);
	VivodTB(TBs1, S1);
	VivodTB(TBs2, S2);
	VivodTB(TBs3, S3);
	VivodTB(TBs13, S13);
}
private: System::Void B_Op_Click(System::Object^ sender, System::EventArgs^ e) {
	opf->Show();
	this->Hide();
}
private: System::Void B_In_Click(System::Object^ sender, System::EventArgs^ e) {
	inf->Show();
	this->Hide();
}
private: System::Void B_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void B_Is_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Owner->Show();
	this->Hide();
}
};
}
