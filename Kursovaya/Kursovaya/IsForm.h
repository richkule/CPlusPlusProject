#pragma once
#include "OsForm.h";
#include "Header.h";
namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для IsForm
	/// </summary>
	public ref class IsForm : public System::Windows::Forms::Form
	{
	public:
		IsForm(void)
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
		~IsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ B_Run;
	protected:

	private: System::Windows::Forms::Button^ B_Exit;
	private: System::Windows::Forms::Button^ B_Osn;
	private: System::Windows::Forms::TextBox^ TBc;
	protected:



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ TBa;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TBx1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TBx2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TBeps;

	private: System::Windows::Forms::Label^ label7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(IsForm::typeid));
			this->B_Run = (gcnew System::Windows::Forms::Button());
			this->B_Exit = (gcnew System::Windows::Forms::Button());
			this->B_Osn = (gcnew System::Windows::Forms::Button());
			this->TBc = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TBa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TBx1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TBx2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TBeps = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// B_Run
			// 
			this->B_Run->Location = System::Drawing::Point(42, 514);
			this->B_Run->Name = L"B_Run";
			this->B_Run->Size = System::Drawing::Size(126, 44);
			this->B_Run->TabIndex = 36;
			this->B_Run->Text = L"Выполнить";
			this->B_Run->UseVisualStyleBackColor = true;
			this->B_Run->Click += gcnew System::EventHandler(this, &IsForm::B_Run_Click);
			// 
			// B_Exit
			// 
			this->B_Exit->Location = System::Drawing::Point(498, 514);
			this->B_Exit->Name = L"B_Exit";
			this->B_Exit->Size = System::Drawing::Size(110, 44);
			this->B_Exit->TabIndex = 35;
			this->B_Exit->Text = L"Выход";
			this->B_Exit->UseVisualStyleBackColor = true;
			this->B_Exit->Click += gcnew System::EventHandler(this, &IsForm::B_Exit_Click);
			// 
			// B_Osn
			// 
			this->B_Osn->Location = System::Drawing::Point(250, 514);
			this->B_Osn->Name = L"B_Osn";
			this->B_Osn->Size = System::Drawing::Size(174, 44);
			this->B_Osn->TabIndex = 34;
			this->B_Osn->Text = L"К основным результатам";
			this->B_Osn->UseVisualStyleBackColor = true;
			this->B_Osn->Click += gcnew System::EventHandler(this, &IsForm::B_Osn_Click);
			// 
			// TBc
			// 
			this->TBc->Location = System::Drawing::Point(73, 472);
			this->TBc->Name = L"TBc";
			this->TBc->Size = System::Drawing::Size(71, 20);
			this->TBc->TabIndex = 33;
			this->TBc->Text = L"0,8";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(38, 472);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 20);
			this->label3->TabIndex = 32;
			this->label3->Text = L"c =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(246, 447);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 20);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Исходные данные";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 412);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// TBa
			// 
			this->TBa->Location = System::Drawing::Point(189, 472);
			this->TBa->Name = L"TBa";
			this->TBa->Size = System::Drawing::Size(71, 20);
			this->TBa->TabIndex = 38;
			this->TBa->Text = L"5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(150, 472);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 20);
			this->label4->TabIndex = 37;
			this->label4->Text = L"a =";
			// 
			// TBx1
			// 
			this->TBx1->Location = System::Drawing::Point(305, 472);
			this->TBx1->Name = L"TBx1";
			this->TBx1->Size = System::Drawing::Size(71, 20);
			this->TBx1->TabIndex = 40;
			this->TBx1->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(266, 472);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 20);
			this->label5->TabIndex = 39;
			this->label5->Text = L"x1 =";
			// 
			// TBx2
			// 
			this->TBx2->Location = System::Drawing::Point(421, 472);
			this->TBx2->Name = L"TBx2";
			this->TBx2->Size = System::Drawing::Size(71, 20);
			this->TBx2->TabIndex = 42;
			this->TBx2->Text = L"9";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(382, 472);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 20);
			this->label6->TabIndex = 41;
			this->label6->Text = L"x2 =";
			// 
			// TBeps
			// 
			this->TBeps->Location = System::Drawing::Point(537, 472);
			this->TBeps->Name = L"TBeps";
			this->TBeps->Size = System::Drawing::Size(71, 20);
			this->TBeps->TabIndex = 44;
			this->TBeps->Text = L"0,0001";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(498, 472);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 20);
			this->label7->TabIndex = 43;
			this->label7->Text = L"ε =";
			// 
			// IsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 570);
			this->Controls->Add(this->TBeps);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TBx2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TBx1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TBa);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->B_Run);
			this->Controls->Add(this->B_Exit);
			this->Controls->Add(this->B_Osn);
			this->Controls->Add(this->TBc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"IsForm";
			this->Text = L"Исходные данные";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
OsForm^ osf;
private: System::Void B_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void B_Osn_Click(System::Object^ sender, System::EventArgs^ e) {
	osf->Show();
	this->Hide();
}
private: System::Void B_Run_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ввод данных
	double c = VvodTb(TBc);
	double a = VvodTb(TBa);
	double x1 = VvodTb(TBx1);
	double x2 = VvodTb(TBx2);
	double eps = VvodTb(TBeps);
	// Передача параметров в форму с осн. результатми
	osf = gcnew OsForm(c, a, x1, x2, eps);
	osf->Owner = this;
	// Вычисления таблицы значений функции
	TableFuny(c, a, x1, x2, eps, 10, osf->LBfb, osf->LBb);
}
};
}
