#pragma once
#include <iostream>
#include <fstream>
#include "Header.h"
using namespace System::IO;
namespace Morze {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(281, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(222, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Запись текста для шифрования в файл";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(639, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 43);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Расшифровать текст на латинском";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 172);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 43);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Зашифровать текст на латниском";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(475, 172);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(167, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Зашифровать текст на русском\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(475, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(167, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Расшифровать текст на русском";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 238);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Шифратор/дешифратор азбуки морзе";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path = " " + Application::StartupPath + "\\inshru.txt";
		StreamWriter^ ofile = File::CreateText(path);
		System::Text::Encoding^ das = ofile->Encoding;
		ofile->Write(textBox1->Text);
		ofile->Close();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path = " " + Application::StartupPath + "\\indesen.txt";
	StreamReader^ file = gcnew StreamReader(path);
	String^ input = file->ReadToEnd();
	file->Close();
	String^ output = eDShif(input);
	String^ opath = " " + Application::StartupPath + "\\outdesen.txt";
	StreamWriter^ ofile = File::CreateText(opath);
	ofile->Write(output);
	ofile->Close();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path = " " + Application::StartupPath + "\\indesru.txt";
	StreamReader^ file = gcnew StreamReader(path);
	String^ input = file->ReadToEnd();
	file->Close();
	String^ output = rDShif(input);
	String^ opath = " " + Application::StartupPath + "\\outdesen.txt";
	StreamWriter^ ofile = File::CreateText(opath);
	System::Text::Encoding^ das = ofile->Encoding;

	ofile->Write(output);
	ofile->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path = " " + Application::StartupPath + "\\inshen.txt";
	StreamReader^ file = gcnew StreamReader(path);
	String^ input = file->ReadToEnd();
	file->Close();
	String^ output = eShif(input);
	String^ opath = " " + Application::StartupPath + "\\outdesen.txt";
	StreamWriter^ ofile = File::CreateText(opath);
	System::Text::Encoding^ das = ofile->Encoding;

	ofile->Write(output);
	ofile->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path = " " + Application::StartupPath + "\\inshru.txt";
	StreamReader^ file = gcnew StreamReader(path);
	String^ input = file->ReadToEnd();
	file->Close();
	String^ output = rShif(input);
	String^ opath = " " + Application::StartupPath + "\\outdesen.txt";
	StreamWriter^ ofile = File::CreateText(opath);
	System::Text::Encoding^ das = ofile->Encoding;

	ofile->Write(output);
	ofile->Close();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
	