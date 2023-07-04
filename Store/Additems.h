#pragma once
#include "Functions.h"
namespace Store {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Additems
	/// </summary>
	public ref class Additems: public System::Windows::Forms::Form {
		public:
		Additems(int id, String^ catgname) {
			catID = id;
			catg = catgname;
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~Additems() {
			if (components) {
				delete components;
			}
		}
		int catID;
		String^ catg;
		private: System::Windows::Forms::Button^ button1;
		protected:
		private: System::Windows::Forms::CheckBox^ checkBox1;
		private: System::Windows::Forms::CheckBox^ checkBox2;
		private: System::Windows::Forms::CheckBox^ checkBox3;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::GroupBox^ groupBox2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::GroupBox^ groupBox3;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::GroupBox^ groupBox4;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::NumericUpDown^ min_kilo;

		private: System::Windows::Forms::NumericUpDown^ kilo_min_price;

		private: System::Windows::Forms::NumericUpDown^ kilo_price;

		private: System::Windows::Forms::NumericUpDown^ kilo_in_price;

		private: System::Windows::Forms::NumericUpDown^ kilo;
		private: System::Windows::Forms::NumericUpDown^ quantity;
		private: System::Windows::Forms::NumericUpDown^ qunt_in_price;
		private: System::Windows::Forms::NumericUpDown^ qunt_price;
		private: System::Windows::Forms::NumericUpDown^ qunt_min_price;

		private: System::Windows::Forms::NumericUpDown^ min_qunt;
		private: System::Windows::Forms::NumericUpDown^ piece_weight;












		private: System::Windows::Forms::Panel^ panel1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		private: System::Windows::Forms::RadioButton^ radioButton1;
		private: System::Windows::Forms::Label^ label15;
		private: System::Windows::Forms::RadioButton^ radioButton2;



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
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Additems::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->min_kilo = (gcnew System::Windows::Forms::NumericUpDown());
			this->kilo_min_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->kilo_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->kilo_in_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->kilo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->qunt_in_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->qunt_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->qunt_min_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->min_qunt = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->piece_weight = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_kilo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_min_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_in_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_in_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_min_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_qunt))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piece_weight))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 600);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(482, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"اضافه عنصر جديد";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Additems::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(406, 28);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 28);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"السمك";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Additems::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(187, 28);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(111, 28);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"البيع بالكيلو";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Additems::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(6, 28);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(105, 28);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"البيع بالعدد";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Additems::checkBox3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 95);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(482, 73);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"صلاحيات العنصر";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(18, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(303, 29);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(398, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"اسم العنصر";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->min_kilo);
			this->groupBox2->Controls->Add(this->kilo_min_price);
			this->groupBox2->Controls->Add(this->kilo_price);
			this->groupBox2->Controls->Add(this->kilo_in_price);
			this->groupBox2->Controls->Add(this->kilo);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 212);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(482, 270);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"تفاصيل البيع الكيلو";
			this->groupBox2->Visible = false;
			// 
			// min_kilo
			// 
			this->min_kilo->DecimalPlaces = 2;
			this->min_kilo->Location = System::Drawing::Point(6, 228);
			this->min_kilo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->min_kilo->Name = L"min_kilo";
			this->min_kilo->Size = System::Drawing::Size(303, 29);
			this->min_kilo->TabIndex = 21;
			// 
			// kilo_min_price
			// 
			this->kilo_min_price->DecimalPlaces = 2;
			this->kilo_min_price->Location = System::Drawing::Point(6, 178);
			this->kilo_min_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->kilo_min_price->Name = L"kilo_min_price";
			this->kilo_min_price->Size = System::Drawing::Size(303, 29);
			this->kilo_min_price->TabIndex = 20;
			// 
			// kilo_price
			// 
			this->kilo_price->DecimalPlaces = 2;
			this->kilo_price->Location = System::Drawing::Point(6, 128);
			this->kilo_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->kilo_price->Name = L"kilo_price";
			this->kilo_price->Size = System::Drawing::Size(303, 29);
			this->kilo_price->TabIndex = 19;
			// 
			// kilo_in_price
			// 
			this->kilo_in_price->DecimalPlaces = 2;
			this->kilo_in_price->Location = System::Drawing::Point(6, 78);
			this->kilo_in_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->kilo_in_price->Name = L"kilo_in_price";
			this->kilo_in_price->Size = System::Drawing::Size(303, 29);
			this->kilo_in_price->TabIndex = 18;
			// 
			// kilo
			// 
			this->kilo->DecimalPlaces = 2;
			this->kilo->Location = System::Drawing::Point(6, 28);
			this->kilo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->kilo->Name = L"kilo";
			this->kilo->Size = System::Drawing::Size(303, 29);
			this->kilo->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(379, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"الوزن المتاح";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(352, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"سعر شراء الكيلو";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(365, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"سعر بيع الكيلو";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(332, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"اقل سعر لبيع الكيلو";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(408, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 24);
			this->label7->TabIndex = 16;
			this->label7->Text = L"اقل وزن";
			this->label7->Click += gcnew System::EventHandler(this, &Additems::label7_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->quantity);
			this->groupBox3->Controls->Add(this->qunt_in_price);
			this->groupBox3->Controls->Add(this->qunt_price);
			this->groupBox3->Controls->Add(this->qunt_min_price);
			this->groupBox3->Controls->Add(this->min_qunt);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 212);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(482, 270);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"تفاصيل البيع بالعدد";
			this->groupBox3->Visible = false;
			// 
			// quantity
			// 
			this->quantity->DecimalPlaces = 2;
			this->quantity->Location = System::Drawing::Point(6, 28);
			this->quantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(303, 29);
			this->quantity->TabIndex = 19;
			// 
			// qunt_in_price
			// 
			this->qunt_in_price->DecimalPlaces = 2;
			this->qunt_in_price->Location = System::Drawing::Point(6, 78);
			this->qunt_in_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->qunt_in_price->Name = L"qunt_in_price";
			this->qunt_in_price->Size = System::Drawing::Size(303, 29);
			this->qunt_in_price->TabIndex = 20;
			// 
			// qunt_price
			// 
			this->qunt_price->DecimalPlaces = 2;
			this->qunt_price->Location = System::Drawing::Point(6, 128);
			this->qunt_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->qunt_price->Name = L"qunt_price";
			this->qunt_price->Size = System::Drawing::Size(303, 29);
			this->qunt_price->TabIndex = 21;
			// 
			// qunt_min_price
			// 
			this->qunt_min_price->DecimalPlaces = 2;
			this->qunt_min_price->Location = System::Drawing::Point(6, 178);
			this->qunt_min_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->qunt_min_price->Name = L"qunt_min_price";
			this->qunt_min_price->Size = System::Drawing::Size(303, 29);
			this->qunt_min_price->TabIndex = 22;
			// 
			// min_qunt
			// 
			this->min_qunt->DecimalPlaces = 2;
			this->min_qunt->Location = System::Drawing::Point(6, 228);
			this->min_qunt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->min_qunt->Name = L"min_qunt";
			this->min_qunt->Size = System::Drawing::Size(303, 29);
			this->min_qunt->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(372, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 24);
			this->label12->TabIndex = 17;
			this->label12->Text = L"الكميه المتاحه";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(408, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 24);
			this->label8->TabIndex = 21;
			this->label8->Text = L"اقل كميه";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(342, 80);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(134, 24);
			this->label11->TabIndex = 18;
			this->label11->Text = L"سعر شراء الواحده";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(322, 180);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 24);
			this->label9->TabIndex = 20;
			this->label9->Text = L"اقل سعر لبيع الواحده";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(355, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 24);
			this->label10->TabIndex = 19;
			this->label10->Text = L"سعر بيع الواحده";
			this->label10->Click += gcnew System::EventHandler(this, &Additems::label10_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(18, 179);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(303, 32);
			this->comboBox1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(388, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"اختيار السمك";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Controls->Add(this->piece_weight);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Enabled = false;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(12, 488);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(482, 106);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"اضافات";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(373, 66);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(103, 24);
			this->label15->TabIndex = 25;
			this->label15->Text = L"طريقه الشراء";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 64);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 28);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->Text = L"العدد";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Additems::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(243, 64);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(66, 28);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->Text = L"الكيلو";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Additems::radioButton1_CheckedChanged);
			// 
			// piece_weight
			// 
			this->piece_weight->DecimalPlaces = 2;
			this->piece_weight->Location = System::Drawing::Point(6, 29);
			this->piece_weight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->piece_weight->Name = L"piece_weight";
			this->piece_weight->Size = System::Drawing::Size(303, 29);
			this->piece_weight->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(382, 31);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 24);
			this->label13->TabIndex = 22;
			this->label13->Text = L"وزن الواحده";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 45);
			this->panel1->TabIndex = 13;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Additems::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Additems::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Additems::panel1_MouseUp);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Dock = System::Windows::Forms::DockStyle::Right;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(758, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Additems::button2_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Name = L"label14";
			this->label14->Padding = System::Windows::Forms::Padding(10, 10, 0, 0);
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label14->Size = System::Drawing::Size(91, 34);
			this->label14->TabIndex = 0;
			this->label14->Text = L"اسم السلعه";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::LightGray;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(500, 45);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->flowLayoutPanel1->Size = System::Drawing::Size(300, 617);
			this->flowLayoutPanel1->TabIndex = 14;
			// 
			// Additems
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 662);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Additems";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Additems";
			this->Load += gcnew System::EventHandler(this, &Additems::Additems_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_kilo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_min_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_in_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_in_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_min_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_qunt))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piece_weight))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//
		// Form Movment
		//
		private:
		bool isDragging;
		Point offset;

		private:
		System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			isDragging = true;
			offset = Point(e->X, e->Y);
		}
		private:
		System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (isDragging) {
				Point newLocation = Point(this->Left + e->X - offset.X, this->Top + e->Y - offset.Y);
				this->Location = newLocation;
			}

		}
		private:
		System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			isDragging = false;
		}
		//
		// End of Form Movment
		//


		String^ connectionString = "";
		private: System::Void Additems_Load(System::Object^ sender, System::EventArgs^ e) {
			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			int borderRadius = 20; // Adjust the radius value as per your preference

			// Create a rounded rectangle shape using the border radius value
			path->AddArc(0, 0, borderRadius, borderRadius, 180, 90);
			path->AddArc(this->Width - borderRadius, 0, borderRadius, borderRadius, 270, 90);
			path->AddArc(this->Width - borderRadius, this->Height - borderRadius, borderRadius, borderRadius, 0, 90);
			path->AddArc(0, this->Height - borderRadius, borderRadius, borderRadius, 90, 90);
			path->CloseAllFigures();

			this->Region = gcnew System::Drawing::Region(path);
			this->label14->Text = L"اضافه عناصر الي قسم" + " " + catg;
			connectionString = Load_Data();
		}
		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->checkBox1->Checked) {
				this->label2->Enabled = 1;
				this->comboBox1->Enabled = 1;
			}
			else {
				this->label2->Enabled = 0;
				this->comboBox1->Enabled = 0;
			}
		}
		private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: void checktype() {
			if (this->checkBox2->Checked && this->checkBox3->Checked) {
				this->groupBox2->Visible = 0;
				this->groupBox3->Visible = 0;
				radioButton2->Checked = 0;
				radioButton1->Checked = 0;
				this->groupBox4->Enabled = 1;
			}
			else if (this->checkBox2->Checked) {
				this->groupBox2->Visible = 1;
				this->groupBox3->Visible = 0;
				radioButton2->Checked = 0;
				radioButton1->Checked = 1;
				this->groupBox4->Enabled = 0;
			}
			else if (this->checkBox3->Checked) {
				this->groupBox2->Visible = 0;
				this->groupBox3->Visible = 1;
				radioButton2->Checked = 1;
				radioButton1->Checked = 0;
				this->groupBox4->Enabled = 0;
			}
			else {
				this->groupBox2->Visible = 0;
				this->groupBox3->Visible = 0;
				radioButton2->Checked = 0;
				radioButton1->Checked = 0;
				this->groupBox4->Enabled = 0;
			}
		}
		private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			checktype();
		}
		private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			checktype();
		}
		public: delegate void AddButton1ClickEventHandler();
		public: event AddButton1ClickEventHandler^ AddButton1ClickEvent;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(textBox1->Text)) {
				MessageBox::Show(L"لا يسمح باضافه عنصر بدون اسم");
				return;
			}

			if (!this->checkBox2->Checked && !this->checkBox3->Checked) {
				MessageBox::Show(L"اختار على الاقل طريقه للبيع");
				return;
			}
			if ((!this->radioButton1->Checked && !this->radioButton2->Checked)) {
				MessageBox::Show(L"اختر طريقه الشراء");
				return;
			}
			if (this->checkBox2->Checked && this->checkBox3->Checked && this->piece_weight->Value==0) {
				MessageBox::Show(L"ادخل وزن الواحده");
				return;
			}
			if (this->radioButton1->Checked && this->kilo_price->Value < this->kilo_min_price->Value) {
				MessageBox::Show(L"سعر البيع يجب ان يكون اكبر من اقل سعر للبيع");
				return;
			}
			if (this->radioButton2->Checked && this->qunt_price->Value < this->qunt_min_price->Value) {
				MessageBox::Show(L"سعر البيع يجب ان يكون اكبر من اقل سعر للبيع");
				return;
			}
			double thick;
			if (comboBox1->SelectedItem != nullptr) {
				thick = Convert::ToDouble(this->comboBox1->SelectedItem->ToString());
			}
			else {
				thick = 0;
			}
			//check if this item is in the database
			if (isAvaliable(this->textBox1->Text, catID, this->checkBox1->Checked, thick)) {
				return;
			};

			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {


				String^ insertQuery = "INSERT INTO Items (name, enKilo, kilo, kilo_price, kilo_min_price, kilo_in_price, min_kilo, enQunt, quantity, qun_price, qun_min_price, qun_in_price, min_qun, enThick, thickness, category_id, piece_weight) VALUES (@name, @enKilo, @kilo, @kilo_price, @kilo_min_price, @kilo_in_price, @min_kilo, @enQunt, @quantity, @qun_price, @qun_min_price, @qun_in_price, @min_qun, @enThick, @thickness, @category_id, @piece_weight); SELECT SCOPE_IDENTITY();";
				SqlCommand^ command = gcnew SqlCommand(insertQuery, connection);
				command->Parameters->AddWithValue("@name", this->textBox1->Text);
				command->Parameters->AddWithValue("@enKilo", checkBox2->Checked);
				command->Parameters->AddWithValue("@kilo", radioButton1->Checked ? this->kilo->Value : 0);
				command->Parameters->AddWithValue("@kilo_price", radioButton1->Checked ? this->kilo_price->Value : 0);
				command->Parameters->AddWithValue("@kilo_min_price", radioButton1->Checked ? this->kilo_min_price->Value : 0);
				command->Parameters->AddWithValue("@kilo_in_price", radioButton1->Checked ? this->kilo_in_price->Value : 0);
				command->Parameters->AddWithValue("@min_kilo", radioButton1->Checked ? this->min_kilo->Value : 0);
				command->Parameters->AddWithValue("@enQunt", checkBox3->Checked);
				command->Parameters->AddWithValue("@quantity", radioButton2->Checked ? this->quantity->Value : 0);
				command->Parameters->AddWithValue("@qun_price", radioButton2->Checked ? this->qunt_price->Value : 0);
				command->Parameters->AddWithValue("@qun_min_price", radioButton2->Checked ? this->qunt_min_price->Value : 0);
				command->Parameters->AddWithValue("@qun_in_price", radioButton2->Checked ? this->qunt_in_price->Value : 0);
				command->Parameters->AddWithValue("@min_qun", radioButton2->Checked ? this->min_qunt->Value : 0);
				command->Parameters->AddWithValue("@enThick", this->checkBox1->Checked);
				command->Parameters->AddWithValue("@thickness", thick);
				command->Parameters->AddWithValue("@category_id", catID);
				command->Parameters->AddWithValue("@piece_weight", this->piece_weight->Value);
				connection->Open();
				int insertedId = Convert::ToInt32(command->ExecuteScalar());
				connection->Close();
				insertStorage(insertedId);
				insertReturn(insertedId);
				Label^ label = gcnew Label();
				String^ thick1;
				if (comboBox1->SelectedItem != nullptr) {
					thick1 = this->comboBox1->SelectedItem->ToString();
				}
				else {
					thick1 = "";
				}
				label->Text = L"تم اضافه" + " " + L"العنصر" + " " + catg + " " + this->textBox1->Text + " " + thick1;
				label->ForeColor = Color::Green;
				label->AutoSize = 1;
				label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 12, FontStyle::Regular);
				flowLayoutPanel1->Controls->Add(label);
				AddButton1ClickEvent();
			}
			catch (SqlException^ ex) {
			   // Handle any SQL errors
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


			}
			finally {
				// Close the database connection
				if (connection->State == System::Data::ConnectionState::Open)
					connection->Close();
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

			Close();
		}
		private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->radioButton1->Checked) {
				groupBox2->Visible = 1;
				groupBox3->Visible = 0;
			}
		}
		private: bool isAvaliable(String^ name, int catID, bool enthick, double thick) {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
			// Open the connection
				connection->Open();

				// Create a SQL command to fetch the item from the database
				String^ query1 = "SELECT COUNT(*) FROM Items WHERE name = @name AND category_id = @catID AND enThick = @enthick AND thickness = @thick";
				String^ query2 = "SELECT COUNT(*) FROM Items WHERE name = @name AND category_id = @catID";
				String^ query;
				if (enthick) {
					query = query1;
				}
				else {
					query = query2;
				}
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				command->Parameters->AddWithValue("@name", name);
				command->Parameters->AddWithValue("@catID", catID);
				command->Parameters->AddWithValue("@enthick", enthick);
				command->Parameters->AddWithValue("@thick", thick);

				// Execute the command and get the result
				int count = Convert::ToInt32(command->ExecuteScalar());

				// Check if the item exists in the database
				if (count > 0) {
					MessageBox::Show(L"العنصر موجود بالفعل", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return 1;
				}

			}
			catch (SqlException^ ex) {
				// Handle any exceptions that occur during the database operation
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			finally {
				// Close the connection
				connection->Close();
			}
			return 0;
		}
		private: void insertStorage(int itemID) {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ insertQuery = "INSERT INTO Storage (item_id, enkilo, in_kilo, kilo_in_price, enqunt, in_qun, qun_in_price) VALUES (@item_id, @enkilo, @in_kilo, @kilo_in_price, @enqunt, @in_qun, @qun_in_price)";
				SqlCommand^ command = gcnew SqlCommand(insertQuery, connection);
				command->Parameters->AddWithValue("@enkilo", radioButton1->Checked);
				command->Parameters->AddWithValue("@enqunt", radioButton2->Checked);
				command->Parameters->AddWithValue("@item_id", itemID);
				command->Parameters->AddWithValue("@in_kilo", 0.0);
				command->Parameters->AddWithValue("@kilo_in_price", 0.0);
				command->Parameters->AddWithValue("@in_qun", 0.0);
				command->Parameters->AddWithValue("@qun_in_price", 0.0);
				connection->Open();
				command->ExecuteNonQuery();
				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		private: void insertReturn(int itemID) {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ insertQuery = "INSERT INTO Item_return (item_id, enKilo, kilo, enQunt, quantity, in_price) VALUES (@item_id, @enKilo, @kilo, @enQunt, @quantity, @in_price)";

				SqlCommand^ command = gcnew SqlCommand(insertQuery, connection);

				command->Parameters->AddWithValue("@enKilo", radioButton1->Checked);
				command->Parameters->AddWithValue("@enQunt", radioButton2->Checked);
				command->Parameters->AddWithValue("@item_id", itemID);
				command->Parameters->AddWithValue("@kilo", 0.0);
				command->Parameters->AddWithValue("@quantity", 0.0);
				command->Parameters->AddWithValue("@in_price", 0.0);
				connection->Open();
				command->ExecuteNonQuery();
				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->radioButton2->Checked) {
				groupBox2->Visible = 0;
				groupBox3->Visible = 1;
			}
		}
	};
}
