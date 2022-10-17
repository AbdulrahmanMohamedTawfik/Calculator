#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: double Ans;
	private: System::Windows::Forms::Button^ num0;
	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num6;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ decimalpoint;
	private: System::Windows::Forms::Button^ num9;
	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ modulus;
	private: System::Windows::Forms::Button^ DEL;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ power;
	private: System::Windows::Forms::Button^ AC;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::TextBox^ operationscreen;
	private: System::Windows::Forms::Label^ Answer;
	private: System::Windows::Forms::Button^ right_brace;
	private: System::Windows::Forms::Button^ left_brace;
	private: System::Windows::Forms::Button^ squareroot;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ LastAns;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->decimalpoint = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->modulus = (gcnew System::Windows::Forms::Button());
			this->DEL = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->power = (gcnew System::Windows::Forms::Button());
			this->AC = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->operationscreen = (gcnew System::Windows::Forms::TextBox());
			this->Answer = (gcnew System::Windows::Forms::Label());
			this->right_brace = (gcnew System::Windows::Forms::Button());
			this->left_brace = (gcnew System::Windows::Forms::Button());
			this->squareroot = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->LastAns = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::Color::LightGray;
			this->num1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num1->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num1->FlatAppearance->BorderSize = 2;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(15, 301);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(82, 38);
			this->num1->TabIndex = 0;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &MainForm::num1_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::Color::LightGray;
			this->num2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num2->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num2->FlatAppearance->BorderSize = 2;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(103, 301);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(82, 38);
			this->num2->TabIndex = 2;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &MainForm::num2_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::Color::LightGray;
			this->num3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num3->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num3->FlatAppearance->BorderSize = 2;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(191, 301);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(82, 38);
			this->num3->TabIndex = 3;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &MainForm::num3_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::Color::LightGray;
			this->num4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num4->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num4->FlatAppearance->BorderSize = 2;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(15, 257);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(82, 38);
			this->num4->TabIndex = 4;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &MainForm::num4_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::Color::LightGray;
			this->num5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num5->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num5->FlatAppearance->BorderSize = 2;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(103, 257);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(82, 38);
			this->num5->TabIndex = 5;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &MainForm::num5_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::Color::LightGray;
			this->num6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num6->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num6->FlatAppearance->BorderSize = 2;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(191, 257);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(82, 38);
			this->num6->TabIndex = 6;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &MainForm::num6_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::LightGray;
			this->equal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equal->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->equal->FlatAppearance->BorderSize = 2;
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equal->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->Location = System::Drawing::Point(191, 345);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(82, 38);
			this->equal->TabIndex = 12;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MainForm::equal_Click);
			// 
			// decimalpoint
			// 
			this->decimalpoint->BackColor = System::Drawing::Color::LightGray;
			this->decimalpoint->Cursor = System::Windows::Forms::Cursors::Hand;
			this->decimalpoint->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->decimalpoint->FlatAppearance->BorderSize = 2;
			this->decimalpoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decimalpoint->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimalpoint->Location = System::Drawing::Point(103, 345);
			this->decimalpoint->Name = L"decimalpoint";
			this->decimalpoint->Size = System::Drawing::Size(82, 38);
			this->decimalpoint->TabIndex = 11;
			this->decimalpoint->Text = L".";
			this->decimalpoint->UseVisualStyleBackColor = false;
			this->decimalpoint->Click += gcnew System::EventHandler(this, &MainForm::decimalpoint_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::Color::LightGray;
			this->num0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num0->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num0->FlatAppearance->BorderSize = 2;
			this->num0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num0->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->Location = System::Drawing::Point(15, 345);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(82, 38);
			this->num0->TabIndex = 10;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &MainForm::num0_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::Color::LightGray;
			this->num9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num9->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num9->FlatAppearance->BorderSize = 2;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(191, 213);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(82, 38);
			this->num9->TabIndex = 9;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &MainForm::num9_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::Color::LightGray;
			this->num8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num8->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num8->FlatAppearance->BorderSize = 2;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(103, 213);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(82, 38);
			this->num8->TabIndex = 8;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &MainForm::num8_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::Color::LightGray;
			this->num7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->num7->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->num7->FlatAppearance->BorderSize = 2;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(15, 213);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(82, 38);
			this->num7->TabIndex = 7;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &MainForm::num7_Click);
			// 
			// modulus
			// 
			this->modulus->BackColor = System::Drawing::Color::LightGray;
			this->modulus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modulus->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->modulus->FlatAppearance->BorderSize = 2;
			this->modulus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modulus->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modulus->Location = System::Drawing::Point(279, 301);
			this->modulus->Name = L"modulus";
			this->modulus->Size = System::Drawing::Size(82, 38);
			this->modulus->TabIndex = 16;
			this->modulus->Text = L"%";
			this->modulus->UseVisualStyleBackColor = false;
			this->modulus->Click += gcnew System::EventHandler(this, &MainForm::modulus_Click);
			// 
			// DEL
			// 
			this->DEL->BackColor = System::Drawing::Color::LightGray;
			this->DEL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DEL->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->DEL->FlatAppearance->BorderSize = 2;
			this->DEL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DEL->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEL->Location = System::Drawing::Point(279, 169);
			this->DEL->Name = L"DEL";
			this->DEL->Size = System::Drawing::Size(82, 38);
			this->DEL->TabIndex = 15;
			this->DEL->Text = L"DEL";
			this->DEL->UseVisualStyleBackColor = false;
			this->DEL->Click += gcnew System::EventHandler(this, &MainForm::DEL_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::LightGray;
			this->multiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiply->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->multiply->FlatAppearance->BorderSize = 2;
			this->multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->Location = System::Drawing::Point(279, 213);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(82, 38);
			this->multiply->TabIndex = 14;
			this->multiply->Text = L"x";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MainForm::multiply_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::LightGray;
			this->divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->divide->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->divide->FlatAppearance->BorderSize = 2;
			this->divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->Location = System::Drawing::Point(279, 257);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(82, 38);
			this->divide->TabIndex = 13;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MainForm::divide_Click);
			// 
			// power
			// 
			this->power->BackColor = System::Drawing::Color::LightGray;
			this->power->Cursor = System::Windows::Forms::Cursors::Hand;
			this->power->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->power->FlatAppearance->BorderSize = 2;
			this->power->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->power->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power->Location = System::Drawing::Point(367, 301);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(82, 38);
			this->power->TabIndex = 20;
			this->power->Text = L"^";
			this->power->UseVisualStyleBackColor = false;
			this->power->Click += gcnew System::EventHandler(this, &MainForm::power_Click);
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::Color::LightGray;
			this->AC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AC->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->AC->FlatAppearance->BorderSize = 2;
			this->AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AC->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AC->Location = System::Drawing::Point(367, 169);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(82, 38);
			this->AC->TabIndex = 19;
			this->AC->Text = L"AC";
			this->AC->UseVisualStyleBackColor = false;
			this->AC->Click += gcnew System::EventHandler(this, &MainForm::AC_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::LightGray;
			this->plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->plus->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->plus->FlatAppearance->BorderSize = 2;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(367, 213);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(82, 38);
			this->plus->TabIndex = 18;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MainForm::plus_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::LightGray;
			this->minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minus->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->minus->FlatAppearance->BorderSize = 2;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(367, 257);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(82, 38);
			this->minus->TabIndex = 17;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MainForm::minus_Click);
			// 
			// operationscreen
			// 
			this->operationscreen->BackColor = System::Drawing::Color::LightGray;
			this->operationscreen->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->operationscreen->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operationscreen->Location = System::Drawing::Point(5, 3);
			this->operationscreen->Name = L"operationscreen";
			this->operationscreen->Size = System::Drawing::Size(429, 33);
			this->operationscreen->TabIndex = 21;
			this->operationscreen->WordWrap = false;
			this->operationscreen->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::operationscreen_KeyDown);
			// 
			// Answer
			// 
			this->Answer->BackColor = System::Drawing::Color::LightGray;
			this->Answer->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Answer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Answer->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Answer->Location = System::Drawing::Point(4, 89);
			this->Answer->Name = L"Answer";
			this->Answer->Size = System::Drawing::Size(431, 38);
			this->Answer->TabIndex = 22;
			this->Answer->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// right_brace
			// 
			this->right_brace->BackColor = System::Drawing::Color::LightGray;
			this->right_brace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->right_brace->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->right_brace->FlatAppearance->BorderSize = 2;
			this->right_brace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->right_brace->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->right_brace->Location = System::Drawing::Point(103, 169);
			this->right_brace->Name = L"right_brace";
			this->right_brace->Size = System::Drawing::Size(82, 38);
			this->right_brace->TabIndex = 24;
			this->right_brace->Text = L")";
			this->right_brace->UseVisualStyleBackColor = false;
			this->right_brace->Click += gcnew System::EventHandler(this, &MainForm::right_brace_Click);
			// 
			// left_brace
			// 
			this->left_brace->BackColor = System::Drawing::Color::LightGray;
			this->left_brace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->left_brace->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->left_brace->FlatAppearance->BorderSize = 2;
			this->left_brace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->left_brace->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->left_brace->Location = System::Drawing::Point(15, 169);
			this->left_brace->Name = L"left_brace";
			this->left_brace->Size = System::Drawing::Size(82, 38);
			this->left_brace->TabIndex = 23;
			this->left_brace->Text = L"(";
			this->left_brace->UseVisualStyleBackColor = false;
			this->left_brace->Click += gcnew System::EventHandler(this, &MainForm::left_brace_Click);
			// 
			// squareroot
			// 
			this->squareroot->BackColor = System::Drawing::Color::LightGray;
			this->squareroot->Cursor = System::Windows::Forms::Cursors::Hand;
			this->squareroot->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->squareroot->FlatAppearance->BorderSize = 2;
			this->squareroot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->squareroot->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->squareroot->Location = System::Drawing::Point(191, 169);
			this->squareroot->Name = L"squareroot";
			this->squareroot->Size = System::Drawing::Size(82, 38);
			this->squareroot->TabIndex = 25;
			this->squareroot->Text = L"√‾";
			this->squareroot->UseVisualStyleBackColor = false;
			this->squareroot->Click += gcnew System::EventHandler(this, &MainForm::squareroot_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->Answer);
			this->panel1->Controls->Add(this->operationscreen);
			this->panel1->Location = System::Drawing::Point(12, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(438, 127);
			this->panel1->TabIndex = 26;
			// 
			// LastAns
			// 
			this->LastAns->BackColor = System::Drawing::Color::LightGray;
			this->LastAns->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LastAns->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->LastAns->FlatAppearance->BorderSize = 2;
			this->LastAns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LastAns->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastAns->Location = System::Drawing::Point(279, 345);
			this->LastAns->Name = L"LastAns";
			this->LastAns->Size = System::Drawing::Size(82, 38);
			this->LastAns->TabIndex = 27;
			this->LastAns->Text = L"Ans";
			this->LastAns->UseVisualStyleBackColor = false;
			this->LastAns->Click += gcnew System::EventHandler(this, &MainForm::LastAns_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(462, 633);
			this->Controls->Add(this->LastAns);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->squareroot);
			this->Controls->Add(this->right_brace);
			this->Controls->Add(this->left_brace);
			this->Controls->Add(this->power);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->modulus);
			this->Controls->Add(this->DEL);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->decimalpoint);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(480, 680);
			this->MinimumSize = System::Drawing::Size(480, 680);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num0_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DEL_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AC_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void modulus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void power_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void decimalpoint_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void left_brace_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void right_brace_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void squareroot_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void operationscreen_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void MainForm_Shown(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LastAns_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
