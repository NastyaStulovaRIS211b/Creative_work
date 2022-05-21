#pragma once
#include <cmath>
#include <string>
using namespace std;
namespace CalculatorSS {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(10, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(516, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Двоичная";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Троичная";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(10, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Восьмеричная";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(10, 319);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 39);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Девятеричная";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(10, 364);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Десятичная";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(10, 409);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 39);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Шестнадцатеричная";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(10, 108);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(202, 70);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Перевод из одной СС в другую";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(388, 184);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 39);
			this->button8->TabIndex = 8;
			this->button8->Text = L"+/-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(460, 229);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 39);
			this->button9->TabIndex = 9;
			this->button9->Text = L"/";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Operations);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(460, 275);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(66, 39);
			this->button10->TabIndex = 10;
			this->button10->Text = L"x";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Operations);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(172, 274);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(66, 39);
			this->button11->TabIndex = 11;
			this->button11->Text = L"7";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(244, 274);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(66, 39);
			this->button12->TabIndex = 12;
			this->button12->Text = L"8";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(316, 274);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(66, 39);
			this->button13->TabIndex = 13;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(460, 318);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(66, 39);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Operations);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(172, 319);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(66, 39);
			this->button15->TabIndex = 15;
			this->button15->Text = L"4";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(244, 319);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(66, 39);
			this->button16->TabIndex = 16;
			this->button16->Text = L"5";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(316, 319);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(66, 39);
			this->button17->TabIndex = 17;
			this->button17->Text = L"6";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(172, 364);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(66, 39);
			this->button18->TabIndex = 18;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(244, 364);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(66, 39);
			this->button19->TabIndex = 19;
			this->button19->Text = L"2";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(316, 364);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(66, 39);
			this->button20->TabIndex = 20;
			this->button20->Text = L"3";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(172, 409);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(138, 39);
			this->button21->TabIndex = 21;
			this->button21->Text = L"0";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(316, 409);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(66, 39);
			this->button22->TabIndex = 22;
			this->button22->Text = L",";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(388, 364);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(66, 84);
			this->button23->TabIndex = 23;
			this->button23->Text = L"+";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Operations);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(460, 364);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(66, 84);
			this->button24->TabIndex = 24;
			this->button24->Text = L"=";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(172, 185);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(138, 39);
			this->button25->TabIndex = 25;
			this->button25->Text = L"C";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(316, 184);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(66, 39);
			this->button26->TabIndex = 26;
			this->button26->Text = L"^";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Operations);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Wingdings 3", 13.8F, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(2)));
			this->button27->Location = System::Drawing::Point(460, 184);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(66, 39);
			this->button27->TabIndex = 27;
			this->button27->Text = L"!";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(172, 229);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(66, 39);
			this->button29->TabIndex = 29;
			this->button29->Text = L"A";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(244, 229);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(66, 39);
			this->button30->TabIndex = 30;
			this->button30->Text = L"B";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(316, 229);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(66, 39);
			this->button31->TabIndex = 31;
			this->button31->Text = L"C";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(388, 229);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(66, 39);
			this->button32->TabIndex = 32;
			this->button32->Text = L"D";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button33->Location = System::Drawing::Point(388, 275);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(66, 39);
			this->button33->TabIndex = 33;
			this->button33->Text = L"E";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button34->Location = System::Drawing::Point(388, 319);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(66, 39);
			this->button34->TabIndex = 34;
			this->button34->Text = L"F";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 35;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Двоичной", L"Троичной", L"Восьмеричной", L"Девятеричной",
					L"Десятичной", L"Шестнадцатеричной"
			});
			this->comboBox1->Location = System::Drawing::Point(244, 108);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(210, 24);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->Text = L"Двоичной";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Двоичную", L"Троичную", L"Восьмеричную", L"Девятеричную",
					L"Десятичную", L"Шестнадцатеричную"
			});
			this->comboBox2->Location = System::Drawing::Point(244, 154);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(210, 24);
			this->comboBox2->TabIndex = 37;
			this->comboBox2->Text = L"Двоичную";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(218, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 16);
			this->label2->TabIndex = 38;
			this->label2->Text = L"из";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(223, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 16);
			this->label3->TabIndex = 39;
			this->label3->Text = L"в";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(536, 459);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор систем счислений";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	   // глобальные переменные
	   double first, second, result;
	   String^ operate;
	   bool choice = false, clicked=false, flag=false, clicked2=false;
	   int numb_system = 0;
	   int numb = 0;
private: System::Void NumberOnly(System::Object^ sender, System::EventArgs^ e) { // работа кнопок цифр
	if (!clicked2) // проверка на операцию вычисления ч.-л.
	{
		if (!choice) // проверка выбора СС
		{
			MessageBox::Show("Не выбрана система счисления!", "Ошибка");
		}
		else {
			Button^ numb = safe_cast<Button^>(sender);
			if (textBox1->Text == "0") //если до нажатия не было ничего введено
			{
				textBox1->Text = numb->Text; //вводим первую цифру
			}
			else
			{
				textBox1->Text = textBox1->Text + numb->Text; // иначе добавляем к имеющейся записи цифру
			}
		}
	}
	else
	{
		MessageBox::Show("Сперва очистите экран!", "Ошибка"); // ошибка, оповещающая о том, что проходит операция вычисления
	}

}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) { // button C
	Clear();
}
	   void Clear()
	   {
		   if (!choice)
		   {
			   MessageBox::Show("Не выбрана система счисления!", "Ошибка");
		   }
		   else {
			   flag = false;
			   clicked2 = false;
			   clicked = false;
			   textBox1->Text = "0";
			   label1->Text = "";
		   }
	   }
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) { // button .
	if (!choice)
	{
		MessageBox::Show("Не выбрана система счисления!", "Ошибка");
	}
	else {
		if (!textBox1->Text->Contains(","))
		{
			textBox1->Text = textBox1->Text + ",";
		}
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) { // button <-
	if (!choice)
	{
		MessageBox::Show("Не выбрана система счисления!", "Ошибка");
	}
	else {
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) { // панель ввода
	if (!choice)
	{
		MessageBox::Show("Не выбрана система счисления!", "Ошибка");
	}
	else {
		if (textBox1->Text == "")
		{
			textBox1->Text = "0"; // если пусто, заполняется 0
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { // button +/-
	if (!choice)
	{
		MessageBox::Show("Не выбрана система счисления!", "Ошибка");
	}
	else {
		if (textBox1->Text->Contains("-")) // если был минус
		{
			textBox1->Text = textBox1->Text->Remove(0, 1); // удаляем его
		}
		else
		{
			textBox1->Text = "-" + textBox1->Text; // иначе добавляем
		}
	}
}
	   double converter(double a) // метод для конвертирования чисел в разные системы счисления
	   {
		   int b = 0, m;
		   double x, y, l = 0, s = 0;
		   int* mas = new int[100];
		   int i = 0;
		   y = std::modf(a, &x); // целая часть запишется в x, дробная - в y
		   b = (int)x;
		   while (b > 0)
		   {
			   mas[i] = b % numb_system; // остаток от деления на основание СС записывается в динамический массив
			   b /= numb_system; // целая часть от деления на основание СС
			   i++;
		   }
		   for (int k = i - 1; k >= 0; --k)
		   {
			   m = 1;
			   for (int j = 1; j <= k; j++)
				   m *= 10;
			   s += mas[k] * m; // перевод целой части числа в СС
		   }
		   for (int k = 0; k < 5; k++)
		   {// перевод дробной части числа в СС
			   l = 0.1;
			   for (int j = 0; j < k; j++)
				   l *= 0.1;
			   if (((int)y) > 0)
				   y -= ((int)y);
			   y *= numb_system;
			   s += ((int)y) * l;
		   }
		   delete[]mas;
		   return s;
	   }
	   double to_hex() // метод для перевода из 16-чной СС
	   {
		   int* c = new int[textBox1->Text->Length];
		   int index_t=-1; // индекс точки мантиссы
		   for (int i = 0; i < textBox1->Text->Length; i++)
		   {
			   switch (textBox1->Text[i]) // распознавание цифр
			   {
			   case 'A':
				   c[i] = 10;
				   break;
			   case 'B':
				   c[i] = 11;
				   break;
			   case 'C':
				   c[i] = 12;
				   break;
			   case 'D':
				   c[i] = 13;
				   break;
			   case 'E':
				   c[i] = 14;
				   break;
			   case 'F':
				   c[i] = 15;
				   break;
			   case ',':
				   index_t = i;
			   default:
				   c[i] = textBox1->Text[i]-'0';
				   break;
			   }
		   }
		   int m, k = 0;
		   double l, sum = 0;
		   int ii = textBox1->Text->Length;
		   if (index_t != -1) // если индекс не поменялся
			   k = index_t; // оставляем его
		   else
			   k = textBox1->Text->Length; // иначе берем все число
		   for (int i = 0; i < textBox1->Text->Length; i++)
		   {
			   if (textBox1->Text[i] != ',')
			   {
				   m = 1;
				   for (int j = k; j > 1; j--) // разряды числа (либо от запятой, либо с конца числа - в зависимости от 810 строки)
					   m *= 16;
				   k--;
				   sum += c[i] * m;
			   }
			   else // если была обнаружена запятая
			   {
				   ii = i + 1;
				   i = textBox1->Text->Length;
			   }
		   }
		   k = 0;
		   for (ii; ii < textBox1->Text->Length; ii++) // начиная с обнаруженной запятой до конца числа
		   {
			   if (textBox1->Text[textBox1->Text->Length-1] != ',') // перевод мантиссы
			   {
				   l = 1.0 / 16.0;
				   for (int j = 0; j < k; j++)
					   l *= 1.0 / 16.0;
				   sum += c[ii] * l;
				   k++;
			   }
		   }
		   return sum;

	   }
	   double to_dec() // метод для перевод числа в 10-чную СС
	   {
		   int m, k = 0;
		   double l, sum = 0;
		   int ii = textBox1->Text->Length;
		   if (numb != 16) // если изначальная СС не равна 16
		   {
			   while (textBox1->Text[k] != ',' && k < textBox1->Text->Length - 1) // пока в числе не будет найдена запятая или не дойдем до конца числа
			   {
				   k++; // увеличиваем счетчик
			   }
			   if (textBox1->Text[k] == ',')
				   k--;
			   for (int i = 0; i < textBox1->Text->Length; i++)
			   {
				   if (textBox1->Text[i] != ',')
				   {
					   m = 1;
					   for (int j = 0; j < k; j++)
						   m *= numb;
					   k--;
					   sum += (textBox1->Text[i] - '0') * m;
				   }
				   else
				   {
					   ii = i + 1;
					   i = textBox1->Text->Length;
				   }
			   }
			   for (ii; ii < textBox1->Text->Length; ii++)
			   {
				   if (textBox1->Text[textBox1->Text->Length-1] != ',')
				   {
					   l = 1.0 / numb;
					   for (int j = 0; j < k; j++)
						   l *= 1.0 / numb;
					   sum += (textBox1->Text[ii] - '0') * l;
					   k++;
				   }
			   }
		   }
		   else
		   {
			   sum=to_hex();
		   }
		   return sum;
	   }
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) { 
	if (!choice)
	{
		MessageBox::Show("Не выбрана система счисления!", "Ошибка");
	}
	else 
		if (!clicked)
		{
			MessageBox::Show("Не выбрана операция!", "Ошибка");
		}
		else
		{
			clicked2 = true;
			if (numb_system != 10)
				second = to_dec();
			else
				second = System::Convert::ToDouble(textBox1->Text);
			label1->Text = label1->Text + textBox1->Text;

			if (operate == "+")
			{
				result = first + second;
			}
			else
				if (operate == "-")
				{
					result = first - second;
				}
				else
					if (operate == "/")
					{
						if (second != 0)
						{
							result = first / second;
						}
						else
						{
							MessageBox::Show("Попытка деления на 0", "Ошибка");
							Clear();
							result = 0;
						}
					}
					else
						if (operate == "x")
						{
							result = first * second;
						}
						else
							if (operate == "^")
							{
								result = pow(first, second);
							}
			if (numb_system != 16)
			{
				result = converter(result);
				textBox1->Text = System::Convert::ToString(result);
			}
			else
			{
				int b = 0, m;
				string str = "";
				double x, y, l = 0;
				int* mas = new int[100];
				int i = 0;
				y = std::modf(result, &x); // целая часть запишется в x, дробная - в y
				b = (int)x;
				while (b > 0)
				{
					mas[i] = b % 16;
					b /= 16;
					i++;
				}
				textBox1->Text = "";
				for (int k = i - 1; k >= 0; --k)
				{
					if (mas[k] < 10)
					{
						if (textBox1->Text == "0")
							textBox1->Text = System::Convert::ToString(mas[k]);
						else
							textBox1->Text += mas[k];
					}
					else
					{
						switch (mas[k])
						{
						case 10:
							if (textBox1->Text == "0")
								textBox1->Text = "A";
							else
								textBox1->Text += "A";
							break;
						case 11:
							if (textBox1->Text == "0")
								textBox1->Text = "B";
							else
								textBox1->Text += "B";
							break;
						case 12:
							if (textBox1->Text == "0")
								textBox1->Text = "C";
							else
								textBox1->Text += "C";
							break;
						case 13:
							if (textBox1->Text == "0")
								textBox1->Text = "D";
							else
								textBox1->Text += "D";
							break;
						case 14:
							if (textBox1->Text == "0")
								textBox1->Text = "E";
							else
								textBox1->Text += "E";
							break;
						case 15:
							if (textBox1->Text == "0")
								textBox1->Text = "F";
							else
								textBox1->Text += "F";
							break;
						}
					}
				}
				if (y != 0)
				{
					textBox1->Text += ",";
					for (int k = 0; k < 5; k++)
					{
						if (((int)y) > 0)
							y -= ((int)y);
						if (y == 0)
						{
							k = 6;
						}
						else
						{

							y *= 16;
							if (((int)y) < 10)
							{
								if (textBox1->Text == "0")
									textBox1->Text = System::Convert::ToString(((int)y));
								else
								{
									m = int(y);
									textBox1->Text += m;
								}

							}
							else
							{
								switch (((int)y))
								{
								case 10:
									if (textBox1->Text == "0")
										textBox1->Text = "A";
									else
										textBox1->Text += "A";
									break;
								case 11:
									if (textBox1->Text == "0")
										textBox1->Text = "B";
									else
										textBox1->Text += "B";
									break;
								case 12:
									if (textBox1->Text == "0")
										textBox1->Text = "C";
									else
										textBox1->Text += "C";
									break;
								case 13:
									if (textBox1->Text == "0")
										textBox1->Text = "D";
									else
										textBox1->Text += "D";
									break;
								case 14:
									if (textBox1->Text == "0")
										textBox1->Text = "E";
									else
										textBox1->Text += "E";
									break;
								case 15:
									if (textBox1->Text == "0")
										textBox1->Text = "F";
									else
										textBox1->Text += "F";
									break;
								}
							}
						}
					}
					delete[]mas;
				}
			}
		}
}
private: System::Void Operations(System::Object^ sender, System::EventArgs^ e) {
	if (!clicked2)
	{
		if (!choice)
		{
			MessageBox::Show("Не выбрана система счисления!", "Ошибка");
		}
		else {
			clicked = true;
			Button^ op = safe_cast<Button^>(sender);

			if (numb_system != 10)
				first = to_dec();
			else
				first = System::Convert::ToDouble(textBox1->Text);
			label1->Text = label1->Text + textBox1->Text;
			textBox1->Text = "";
			operate = op->Text;
			label1->Text = label1->Text + op->Text;
		}
	}
	else
	{
		MessageBox::Show("Сперва очистите экран!", "Ошибка");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // двоичная
	choice = true;
	numb_system = 2;
	numb = 2;
	button8->Enabled = false;
	button11->Enabled = false;
	button12->Enabled = false;
	button13->Enabled = false;
	button15->Enabled = false;
	button16->Enabled = false;
	button17->Enabled = false;
	button19->Enabled = false;
	button20->Enabled = false;
	button29->Enabled = false;
	button30->Enabled = false;
	button31->Enabled = false;
	button32->Enabled = false;
	button33->Enabled = false;
	button34->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // троичная
	choice = true;
	numb_system = 3;
	numb = 3;
	button8->Enabled = false;
	button20->Enabled = false;
	button11->Enabled = false;
	button12->Enabled = false;
	button13->Enabled = false;
	button15->Enabled = false;
	button16->Enabled = false;
	button17->Enabled = false;
	button19->Enabled = true;
	button29->Enabled = false;
	button30->Enabled = false;
	button31->Enabled = false;
	button32->Enabled = false;
	button33->Enabled = false;
	button34->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // восьмеричная
	choice = true;
	numb_system = 8;
	numb = 8;
	button8->Enabled = false;
	button11->Enabled = true;
	button12->Enabled = false;
	button13->Enabled = false;
	button15->Enabled = true;
	button16->Enabled = true;
	button17->Enabled = true;
	button19->Enabled = true;
	button20->Enabled = true;
	button29->Enabled = false;
	button30->Enabled = false;
	button31->Enabled = false;
	button32->Enabled = false;
	button33->Enabled = false;
	button34->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // девятеричная
	choice = true;
	numb_system = 9;
	numb = 9;
	button8->Enabled = false;
	button11->Enabled = true;
	button12->Enabled = true;
	button13->Enabled = false;
	button15->Enabled = true;
	button16->Enabled = true;
	button17->Enabled = true;
	button19->Enabled = true;
	button20->Enabled = true;
	button29->Enabled = false;
	button30->Enabled = false;
	button31->Enabled = false;
	button32->Enabled = false;
	button33->Enabled = false;
	button34->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { // десятичная
	choice = true;
	numb_system = 10;
	numb = 10;
	button8->Enabled = true;
	button11->Enabled = true;//7
	button12->Enabled = true;//8
	button13->Enabled = true;//9
	button15->Enabled = true;//4
	button16->Enabled = true;//5
	button17->Enabled = true;//6
	button19->Enabled = true;//2
	button20->Enabled = true;//3
	button29->Enabled = false;//A
	button30->Enabled = false;//B
	button31->Enabled = false;//C
	button32->Enabled = false;//D
	button33->Enabled = false;//E
	button34->Enabled = false;//F

}
 private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // шестнадцатеричная
	 choice = true;
	 numb_system = 16;
	 numb = 16;
	 button8->Enabled = false;
	 button11->Enabled = true;
	 button12->Enabled = true;
	 button13->Enabled = true;
	 button15->Enabled = true;
	 button16->Enabled = true;
	 button17->Enabled = true;
	 button19->Enabled = true;
	 button20->Enabled = true;
	 button29->Enabled = true;
	 button30->Enabled = true;
	 button31->Enabled = true;
	 button32->Enabled = true;
	 button33->Enabled = true;
	 button34->Enabled = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!flag)
	{
		flag = true;
		if (textBox1->Text == "0")
		{
			MessageBox::Show("Введите число", "Ошибка");
		}
		double a = 0;
		double l;
		int i, k = 0;
		for (i = 0; i < textBox1->Text->Length; i++)
		{
			if (textBox1->Text[i] != ',')
			{
				a *= 10;
				a += textBox1->Text[i] - '0';

			}
			else
			{
				k = i + 1;
				i = textBox1->Text->Length;
			}
		}
		int m = k;
		if (k > 0)
		{
			for (k; k < i - 1; k++)
			{
				l = 0.1;
				for (int j = m; j < k; j++)
					l *= 0.1;
				a += (textBox1->Text[k] - '0') * l;
			}
		}
		label1->Text = textBox1->Text;
		if (numb!=10)
			a = to_dec();
		if (numb_system != 16)
		{
			result = converter(a);
			textBox1->Text = System::Convert::ToString(result);
		}
		else
		{
			int b = 0, m;
			string str = "";
			double x, y, l = 0;
			int* mas = new int[100];
			int i = 0;
			y = std::modf(a, &x); // целая часть запишется в x, дробная - в y 1011
			b = (int)x;
			while (b > 0)
			{
				mas[i] = b % 16;
				b /= 16;
				i++;
			}
			textBox1->Text = "";
			for (int k = i - 1; k >= 0; --k)
			{
				if (mas[k] < 10)
				{
					if (textBox1->Text == "0")
						textBox1->Text = System::Convert::ToString(mas[k]);
					else
						textBox1->Text += mas[k];
				}
				else
				{
					switch (mas[k])
					{
					case 10:
						if (textBox1->Text == "0")
							textBox1->Text = "A";
						else
							textBox1->Text += "A";
						break;
					case 11:
						if (textBox1->Text == "0")
							textBox1->Text = "B";
						else
							textBox1->Text += "B";
						break;
					case 12:
						if (textBox1->Text == "0")
							textBox1->Text = "C";
						else
							textBox1->Text += "C";
						break;
					case 13:
						if (textBox1->Text == "0")
							textBox1->Text = "D";
						else
							textBox1->Text += "D";
						break;
					case 14:
						if (textBox1->Text == "0")
							textBox1->Text = "E";
						else
							textBox1->Text += "E";
						break;
					case 15:
						if (textBox1->Text == "0")
							textBox1->Text = "F";
						else
							textBox1->Text += "F";
						break;
					}
				}
			}
			if (y != 0)
			{
				textBox1->Text += ",";
				for (int k = 0; k < 5; k++)
				{
					if (((int)y) > 0)
						y -= ((int)y);
					if (y == 0)
					{
						k = 6;
					}
					else
					{
						
						y *= 16;
						if (((int)y) < 10)
						{
							if (textBox1->Text == "0")
								textBox1->Text = System::Convert::ToString(((int)y));
							else
							{
								m = int(y);
								textBox1->Text += m;
							}
								
						}
						else
						{
							switch (((int)y))
							{
							case 10:
								if (textBox1->Text == "0")
									textBox1->Text = "A";
								else
									textBox1->Text += "A";
								break;
							case 11:
								if (textBox1->Text == "0")
									textBox1->Text = "B";
								else
									textBox1->Text += "B";
								break;
							case 12:
								if (textBox1->Text == "0")
									textBox1->Text = "C";
								else
									textBox1->Text += "C";
								break;
							case 13:
								if (textBox1->Text == "0")
									textBox1->Text = "D";
								else
									textBox1->Text += "D";
								break;
							case 14:
								if (textBox1->Text == "0")
									textBox1->Text = "E";
								else
									textBox1->Text += "E";
								break;
							case 15:
								if (textBox1->Text == "0")
									textBox1->Text = "F";
								else
									textBox1->Text += "F";
								break;
							}
						}
					}
				}
				delete[]mas;
			}
		}
	}
	else
	{
		MessageBox::Show("Сперва очистите экран!", "Ошибка");
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	button8->Enabled = false;
	if (comboBox1->SelectedItem == "Десятичной")
	{
		numb = 10;
		choice = true;
		button11->Enabled = true;//7
		button12->Enabled = true;//8
		button13->Enabled = true;//9
		button15->Enabled = true;//4
		button16->Enabled = true;//5
		button17->Enabled = true;//6
		button19->Enabled = true;//2
		button20->Enabled = true;//3
		button29->Enabled = false;//A
		button30->Enabled = false;//B
		button31->Enabled = false;//C
		button32->Enabled = false;//D
		button33->Enabled = false;//E
		button34->Enabled = false;//F
	}
	else
		if (comboBox1->SelectedItem == "Двоичной")
		{
			numb = 2;
			choice = true;
			button11->Enabled = false;
			button12->Enabled = false;
			button13->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = false;
			button17->Enabled = false;
			button19->Enabled = false;
			button20->Enabled = false;
			button29->Enabled = false;
			button30->Enabled = false;
			button31->Enabled = false;
			button32->Enabled = false;
			button33->Enabled = false;
			button34->Enabled = false;
		}
		else
			if (comboBox1->SelectedItem == "Троичной")
			{
				numb = 3;
				choice = true;
				button20->Enabled = false;
				button11->Enabled = false;
				button12->Enabled = false;
				button13->Enabled = false;
				button15->Enabled = false;
				button16->Enabled = false;
				button17->Enabled = false;
				button19->Enabled = true;
				button29->Enabled = false;
				button30->Enabled = false;
				button31->Enabled = false;
				button32->Enabled = false;
				button33->Enabled = false;
				button34->Enabled = false;
			}
			else
				if (comboBox1->SelectedItem == "Восьмеричной")
				{
					numb = 8;
					choice = true;
					button11->Enabled = true;
					button12->Enabled = false;
					button13->Enabled = false;
					button15->Enabled = true;
					button16->Enabled = true;
					button17->Enabled = true;
					button19->Enabled = true;
					button20->Enabled = true;
					button29->Enabled = false;
					button30->Enabled = false;
					button31->Enabled = false;
					button32->Enabled = false;
					button33->Enabled = false;
					button34->Enabled = false;
				}
				else
					if (comboBox1->SelectedItem == "Девятеричной")
					{
						numb = 9;
						choice = true;
						button11->Enabled = true;
						button12->Enabled = true;
						button13->Enabled = false;
						button15->Enabled = true;
						button16->Enabled = true;
						button17->Enabled = true;
						button19->Enabled = true;
						button20->Enabled = true;
						button29->Enabled = false;
						button30->Enabled = false;
						button31->Enabled = false;
						button32->Enabled = false;
						button33->Enabled = false;
						button34->Enabled = false;
					}
					else
						if (comboBox1->SelectedItem == "Шестнадцатеричной")
						{
							numb = 16;
							choice = true;
							button11->Enabled = true;
							button12->Enabled = true;
							button13->Enabled = true;
							button15->Enabled = true;
							button16->Enabled = true;
							button17->Enabled = true;
							button19->Enabled = true;
							button20->Enabled = true;
							button29->Enabled = true;
							button30->Enabled = true;
							button31->Enabled = true;
							button32->Enabled = true;
							button33->Enabled = true;
							button34->Enabled = true;
						}
						if (comboBox2->SelectedItem == "Двоичную")
						{
							numb_system = 2;
						}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	button8->Enabled = false;
	if (comboBox2->SelectedItem == "Двоичную")
	{
		numb_system = 2;
	}
	else
		if (comboBox2->SelectedItem == "Троичную")
		{
			numb_system = 3;
		}
		else
			if (comboBox2->SelectedItem == "Восьмеричную")
			{
				numb_system = 8;
			}
			else
				if (comboBox2->SelectedItem == "Десятичную")
				{
					numb_system = 10;
				}
				else
					if (comboBox2->SelectedItem == "Девятеричную")
					{
						numb_system = 9;
					}
					else
						if (comboBox2->SelectedItem == "Шестнадцатеричную")
						{
							numb_system = 16;
						}
}
};
}
