#pragma once
#include "Functions.h"
namespace Store {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for ItemManager
	/// </summary>
	public ref class ItemManager: public System::Windows::Forms::Form {
		public:
		ItemManager(String^ id) {
			ID = id;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~ItemManager() {
			if (components) {
				delete components;
			}
		}
		private: String^ ID;
		private: System::Windows::Forms::Panel^ panel1;
		protected:
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::RadioButton^ radioButton2;
		private: System::Windows::Forms::RadioButton^ radioButton1;

		private: System::Windows::Forms::NumericUpDown^ in_price;
		private: System::Windows::Forms::NumericUpDown^ in_kilo_qunt;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::NumericUpDown^ min_price;
		private: System::Windows::Forms::NumericUpDown^ min_qunt_kilo;
		private: System::Windows::Forms::NumericUpDown^ price;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::GroupBox^ groupBox2;
		private: System::Windows::Forms::GroupBox^ groupBox3;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label15;
		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label19;
		private: System::Windows::Forms::Label^ label18;
		private: System::Windows::Forms::Label^ label20;
		private: System::Windows::Forms::Panel^ panel3;
		private: System::Windows::Forms::Label^ label23;
		private: System::Windows::Forms::Label^ label22;
		private: System::Windows::Forms::Label^ label21;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ItemManager::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->in_kilo_qunt = (gcnew System::Windows::Forms::NumericUpDown());
			this->in_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::NumericUpDown());
			this->min_qunt_kilo = (gcnew System::Windows::Forms::NumericUpDown());
			this->min_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->in_kilo_qunt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->in_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_qunt_kilo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_price))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(444, 45);
			this->panel1->TabIndex = 4;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ItemManager::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ItemManager::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ItemManager::panel1_MouseUp);
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
			this->button2->Location = System::Drawing::Point(402, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ItemManager::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 12);
			this->label2->Margin = System::Windows::Forms::Padding(0, 3, 0, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"اداره العنصر";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 51);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(419, 68);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"نوع العمليه";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(260, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(153, 28);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"اضافه الي المخزن";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &ItemManager::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(122, 28);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"تعديل الاسعار";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &ItemManager::radioButton1_CheckedChanged);
			// 
			// in_kilo_qunt
			// 
			this->in_kilo_qunt->DecimalPlaces = 2;
			this->in_kilo_qunt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->in_kilo_qunt->Location = System::Drawing::Point(11, 28);
			this->in_kilo_qunt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->in_kilo_qunt->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, System::Int32::MinValue });
			this->in_kilo_qunt->Name = L"in_kilo_qunt";
			this->in_kilo_qunt->Size = System::Drawing::Size(276, 29);
			this->in_kilo_qunt->TabIndex = 0;
			this->in_kilo_qunt->ValueChanged += gcnew System::EventHandler(this, &ItemManager::in_kilo_qunt_ValueChanged);
			// 
			// in_price
			// 
			this->in_price->DecimalPlaces = 2;
			this->in_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->in_price->Location = System::Drawing::Point(11, 84);
			this->in_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->in_price->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, System::Int32::MinValue });
			this->in_price->Name = L"in_price";
			this->in_price->Size = System::Drawing::Size(276, 29);
			this->in_price->TabIndex = 1;
			this->in_price->ValueChanged += gcnew System::EventHandler(this, &ItemManager::in_price_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(314, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"الوزن الكامل";
			this->label1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(311, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"اجمالي السعر";
			this->label3->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(73, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"اضافه الي المخزن";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ItemManager::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(329, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"سعر الكيلو";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(301, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"اقل سعر للكيلو";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(344, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 24);
			this->label6->TabIndex = 2;
			this->label6->Text = L"اقل كميه";
			this->label6->Visible = false;
			// 
			// price
			// 
			this->price->DecimalPlaces = 2;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(11, 28);
			this->price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(276, 29);
			this->price->TabIndex = 3;
			this->price->ValueChanged += gcnew System::EventHandler(this, &ItemManager::price_ValueChanged);
			// 
			// min_qunt_kilo
			// 
			this->min_qunt_kilo->DecimalPlaces = 2;
			this->min_qunt_kilo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(0)));
			this->min_qunt_kilo->Location = System::Drawing::Point(11, 141);
			this->min_qunt_kilo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->min_qunt_kilo->Name = L"min_qunt_kilo";
			this->min_qunt_kilo->Size = System::Drawing::Size(276, 29);
			this->min_qunt_kilo->TabIndex = 4;
			// 
			// min_price
			// 
			this->min_price->DecimalPlaces = 2;
			this->min_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->min_price->Location = System::Drawing::Point(11, 84);
			this->min_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->min_price->Name = L"min_price";
			this->min_price->Size = System::Drawing::Size(276, 29);
			this->min_price->TabIndex = 5;
			this->min_price->ValueChanged += gcnew System::EventHandler(this, &ItemManager::min_price_ValueChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(73, 197);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(256, 49);
			this->button3->TabIndex = 5;
			this->button3->Text = L"تعديل";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ItemManager::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(24, 130);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(276, 32);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ItemManager::comboBox1_SelectedIndexChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->price);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->min_qunt_kilo);
			this->groupBox2->Controls->Add(this->min_price);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(13, 174);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(418, 265);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"تعديل الاسعار";
			this->groupBox2->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(349, 143);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 24);
			this->label11->TabIndex = 8;
			this->label11->Text = L"اقل عدد";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(291, 86);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 24);
			this->label10->TabIndex = 7;
			this->label10->Text = L"اقل سعر للواحده";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(319, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 24);
			this->label9->TabIndex = 6;
			this->label9->Text = L"سعر الواحده";
			this->label9->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->in_kilo_qunt);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->in_price);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(13, 174);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(418, 265);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"اضافه الي المخزن";
			this->groupBox3->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(278, 143);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(134, 24);
			this->label20->TabIndex = 16;
			this->label20->Text = L"سعر شراء الواحده";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(288, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(124, 24);
			this->label19->TabIndex = 15;
			this->label19->Text = L"سعر شراء الكيلو";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::ForestGreen;
			this->label18->Location = System::Drawing::Point(16, 143);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(49, 24);
			this->label18->TabIndex = 15;
			this->label18->Text = L"0.00";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(322, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"العدد الكامل";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(374, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 24);
			this->label7->TabIndex = 9;
			this->label7->Text = L"السُمك";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(292, 8);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(120, 24);
			this->label12->TabIndex = 9;
			this->label12->Text = L"اعلى ربح للكيلو";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(303, 44);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(109, 24);
			this->label13->TabIndex = 10;
			this->label13->Text = L"اقل ربح للكيلو";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::ForestGreen;
			this->label14->Location = System::Drawing::Point(7, 8);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 24);
			this->label14->TabIndex = 11;
			this->label14->Text = L"0.00";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::ForestGreen;
			this->label15->Location = System::Drawing::Point(7, 44);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 24);
			this->label15->TabIndex = 12;
			this->label15->Text = L"0.00";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Location = System::Drawing::Point(13, 445);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(418, 78);
			this->panel2->TabIndex = 13;
			this->panel2->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(293, 44);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(119, 24);
			this->label17->TabIndex = 14;
			this->label17->Text = L"اقل ربح للواحده";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(282, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 24);
			this->label16->TabIndex = 13;
			this->label16->Text = L"اعلى ربح للواحده";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Location = System::Drawing::Point(13, 445);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(418, 78);
			this->panel3->TabIndex = 15;
			this->panel3->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::ForestGreen;
			this->label23->Location = System::Drawing::Point(12, 27);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 24);
			this->label23->TabIndex = 15;
			this->label23->Text = L"0.00";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(265, 27);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(148, 24);
			this->label22->TabIndex = 16;
			this->label22->Text = L"الوزن الموجود حاليا";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(273, 27);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(140, 24);
			this->label21->TabIndex = 15;
			this->label21->Text = L"العدد الموجود حاليا";
			// 
			// ItemManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 526);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ItemManager";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ItemManager";
			this->Load += gcnew System::EventHandler(this, &ItemManager::ItemManager_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->in_kilo_qunt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->in_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_qunt_kilo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->min_price))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		String^ connectionString = "";
		private: System::Void ItemManager_Load(System::Object^ sender, System::EventArgs^ e) {
			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			int borderRadius = 20; // Adjust the radius value as per your preference

			// Create a rounded rectangle shape using the border radius value
			path->AddArc(0, 0, borderRadius, borderRadius, 180, 90);
			path->AddArc(this->Width - borderRadius, 0, borderRadius, borderRadius, 270, 90);
			path->AddArc(this->Width - borderRadius, this->Height - borderRadius, borderRadius, borderRadius, 0, 90);
			path->AddArc(0, this->Height - borderRadius, borderRadius, borderRadius, 90, 90);
			path->CloseAllFigures();

			this->Region = gcnew System::Drawing::Region(path);
			connectionString = Load_Data();
			getdata();
			
		}
		/// <summary>
		/// load the data
		/// </summary>
		public: String^ catg = "";
		public: String^ name = "";
		public: bool ogtype;
		public: int ctID;
		private: void getdata() {

			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				connection->Open();
				String^ selectQuery = L"SELECT i.name, c.name, i.enThick, i.enQunt, i.enKilo, i.category_id, s.enkilo FROM Items i JOIN Category c ON i.category_id = c.id LEFT JOIN Storage s ON i.id = s.item_id WHERE i.id = " + ID + "; ";
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				Boolean thick;

				while (reader->Read()) {
					this->label2->Text += " " + reader->GetString(1) + " : " + reader->GetString(0);
					catg = reader->GetString(1);
					name = reader->GetString(0);
					thick = reader->GetBoolean(2);
					ctID = reader->GetInt32(5);
					ogtype = reader->GetBoolean(6);
				}
				reader->Close();

				if (thick) {
					this->label7->Enabled = 1;
					this->comboBox1->Enabled = 1;
					selectQuery = L"Select enThick,thickness from items where name=N'" + name + "' and category_id=" + ctID + ";";
					command = gcnew SqlCommand(selectQuery, connection);
					reader = command->ExecuteReader();
					while (reader->Read()) {
						if (reader->GetBoolean(0)) {
							this->comboBox1->Items->Add(reader->GetDecimal(1));
						}
					}
					reader->Close();
				}
				else {
					sID = ID;
					get_all_qunt_kilo();
					this->label7->Enabled = 0;
					this->comboBox1->Enabled = 0;
					selectQuery = L"Select * from Items where id=" + ID + ";";
					command = gcnew SqlCommand(selectQuery, connection);
					reader = command->ExecuteReader();
					while (reader->Read()) {
						if (ogtype) {
							this->label16->Visible = 0;
							this->label17->Visible = 0;
							this->label12->Visible = 1;
							this->label13->Visible = 1;

							this->label4->Visible = 1;
							this->label5->Visible = 1;
							this->label6->Visible = 1;

							this->label9->Visible = 0;
							this->label10->Visible = 0;
							this->label11->Visible = 0;

							this->label1->Visible = 1;
							this->label8->Visible = 0;
							this->label3->Visible = 1;

							this->label19->Visible = 1;
							this->label20->Visible = 0;
							this->label22->Visible = 1;
							this->label21->Visible = 0;
							////  
							this->price->Value = reader->GetDecimal(reader->GetOrdinal("kilo_price"));
							this->min_price->Value = reader->GetDecimal(reader->GetOrdinal("kilo_min_price"));
							this->min_qunt_kilo->Value = reader->GetDecimal(reader->GetOrdinal("min_kilo"));
							ogprice = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));
						}
						else {
							this->label16->Visible = 1;
							this->label17->Visible = 1;
							this->label12->Visible = 0;
							this->label13->Visible = 0;

							this->label9->Visible = 1;
							this->label10->Visible = 1;
							this->label11->Visible = 1;

							this->label4->Visible = 0;
							this->label5->Visible = 0;
							this->label6->Visible = 0;

							this->label8->Visible = 1;
							this->label1->Visible = 0;
							this->label3->Visible = 1;

							this->label19->Visible = 0;
							this->label20->Visible = 1;
							this->label22->Visible = 0;
							this->label21->Visible = 1;
							////
							this->price->Value = reader->GetDecimal(reader->GetOrdinal("qun_price"));
							this->min_price->Value = reader->GetDecimal(reader->GetOrdinal("qun_min_price"));
							this->min_qunt_kilo->Value = reader->GetDecimal(reader->GetOrdinal("min_qun"));
							ogprice = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("qun_in_price")));
						}
						this->label14->Text = FormatNumberWithCommas(Convert::ToDouble(this->price->Value) - ogprice);
						this->label15->Text = FormatNumberWithCommas(Convert::ToDouble(this->min_price->Value) - ogprice);
					}
					reader->Close();
				}
				connection->Close();
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
			this->Close();
		}
		public: String^ sID;
		public: double ogprice = 0;
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ thick = this->comboBox1->SelectedItem->ToString();
				String^ selectQuery = L"SELECT i.*, s.enkilo as ogtype FROM Items i LEFT JOIN Storage s ON i.id = s.item_id WHERE i.name = N'" + name + "' AND i.thickness = " + thick + " AND i.category_id = " + ctID + ";";

				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read()) {
					sID = Convert::ToString(reader->GetInt32(0));
					ogtype = reader->GetBoolean(reader->GetOrdinal("ogtype"));
					get_all_qunt_kilo();
					if (ogtype) {
						this->label16->Visible = 0;
						this->label17->Visible = 0;
						this->label12->Visible = 1;
						this->label13->Visible = 1;

						this->label4->Visible = 1;
						this->label5->Visible = 1;
						this->label6->Visible = 1;

						this->label9->Visible = 0;
						this->label10->Visible = 0;
						this->label11->Visible = 0;

						this->label1->Visible = 1;
						this->label8->Visible = 0;
						this->label3->Visible = 1;

						this->label19->Visible = 1;
						this->label20->Visible = 0;
						this->label22->Visible = 1;
						this->label21->Visible = 0;
						////  
						this->price->Value = reader->GetDecimal(reader->GetOrdinal("kilo_price"));
						this->min_price->Value = reader->GetDecimal(reader->GetOrdinal("kilo_min_price"));
						this->min_qunt_kilo->Value = reader->GetDecimal(reader->GetOrdinal("min_kilo"));
						ogprice = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));
					}
					else {
						this->label16->Visible = 1;
						this->label17->Visible = 1;
						this->label12->Visible = 0;
						this->label13->Visible = 0;

						this->label9->Visible = 1;
						this->label10->Visible = 1;
						this->label11->Visible = 1;

						this->label4->Visible = 0;
						this->label5->Visible = 0;
						this->label6->Visible = 0;

						this->label8->Visible = 1;
						this->label1->Visible = 0;
						this->label3->Visible = 1;

						this->label19->Visible = 0;
						this->label20->Visible = 1;
						this->label22->Visible = 0;
						this->label21->Visible = 1;
						////
						this->price->Value = reader->GetDecimal(reader->GetOrdinal("qun_price"));
						this->min_price->Value = reader->GetDecimal(reader->GetOrdinal("qun_min_price"));
						this->min_qunt_kilo->Value = reader->GetDecimal(reader->GetOrdinal("min_qun"));
						ogprice = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("qun_in_price")));
					}
					this->label14->Text = FormatNumberWithCommas(Convert::ToDouble(this->price->Value) - ogprice);
					this->label15->Text = FormatNumberWithCommas(Convert::ToDouble(this->min_price->Value) - ogprice);
				}
				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->radioButton2->Checked) {
				this->groupBox2->Visible = 0;
				this->groupBox3->Visible = 1;
				this->panel2->Visible = 0;
				this->panel3->Visible = 1;
			}
			else {
				this->groupBox3->Visible = 0;
				this->panel2->Visible = 1;
				this->panel3->Visible = 0;
			}
		}
		private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->radioButton1->Checked) {
				this->groupBox2->Visible = 1;
				this->panel2->Visible = 1;
				this->groupBox3->Visible = 0;
				this->panel3->Visible = 0;
			}
			else {
				this->groupBox2->Visible = 0;
				this->panel2->Visible = 0;
				this->panel3->Visible = 1;
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->price->Value < this->min_price->Value) {
				MessageBox::Show(L"سعر بيع العنصر يجب ان يكون اكبر من اقل سعر للبيع", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (Convert::ToDouble(this->price->Value) < ogprice || Convert::ToDouble(this->min_price->Value) < ogprice) {
				MessageBox::Show(L"غير مسموح البيع بخساره", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ query = "Update Items set kilo_price=@kilo_price, kilo_min_price=@kilo_min_price , min_kilo=@min_kilo , qun_price=@qun_price , qun_min_price=@qun_min_price , min_qun=@min_qun where id=" + sID + ";";

				SqlCommand^ command = gcnew SqlCommand(query, connection);
				command->Parameters->AddWithValue("@kilo_price", ogtype ? this->price->Value : safe_cast<System::Object^>(0));
				command->Parameters->AddWithValue("@kilo_min_price", ogtype ? this->min_price->Value : safe_cast<System::Object^>(0));
				command->Parameters->AddWithValue("@min_kilo", ogtype ? this->min_qunt_kilo->Value : safe_cast<System::Object^>(0));

				command->Parameters->AddWithValue("@qun_price", !ogtype ? this->price->Value : safe_cast<System::Object^>(0));
				command->Parameters->AddWithValue("@qun_min_price", !ogtype ? this->min_price->Value : safe_cast<System::Object^>(0));
				command->Parameters->AddWithValue("@min_qun", !ogtype ? this->min_qunt_kilo->Value : safe_cast<System::Object^>(0));

				connection->Open();
				if (MessageBox::Show(L"هل انت متاكد من تغيير هذه الاسعار", L"تاكيد", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK) {
					command->ExecuteNonQuery();
					MessageBox::Show(L"تم تغيير الاسعار", L"تاكيد", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					return;
				}

				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			double new_ogprice = Convert::ToDouble(this->in_price->Value) / Convert::ToDouble(this->in_kilo_qunt->Value);
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ query = "";
				if (new_ogprice == ogprice) {
					query = "update items set kilo=kilo+@kilo,quantity=quantity+@quantity where id=" + sID + ";";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					command->Parameters->AddWithValue("@kilo", ogtype ? this->in_kilo_qunt->Value : safe_cast<System::Object^>(0));
					command->Parameters->AddWithValue("@quantity", !ogtype ? this->in_kilo_qunt->Value : safe_cast<System::Object^>(0));
					connection->Open();
					command->ExecuteNonQuery();
					connection->Close();
				}
				else {
					query = "INSERT INTO Storage (item_id,enkilo, in_kilo, kilo_in_price,enqunt, in_qun, qun_in_price) VALUES (@item_id,@enkilo, @in_kilo, @kilo_in_price,@enqunt, @in_qun, @qun_in_price);";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					command->Parameters->AddWithValue("@item_id", sID);
					command->Parameters->AddWithValue("@enkilo", ogtype ? ogtype : safe_cast<System::Object^>(0));
					command->Parameters->AddWithValue("@enqunt", !ogtype ? !ogtype : safe_cast<System::Object^>(0));
					command->Parameters->AddWithValue("@in_kilo", ogtype ? this->in_kilo_qunt->Value : safe_cast<System::Object^>(0));
					command->Parameters->AddWithValue("@in_qun", !ogtype ? this->in_kilo_qunt->Value : safe_cast<System::Object^>(0));
					command->Parameters->AddWithValue("@kilo_in_price", ogtype ? new_ogprice : safe_cast<System::Object^>(0));
					command->Parameters->AddWithValue("@qun_in_price", !ogtype ? new_ogprice : safe_cast<System::Object^>(0));
					connection->Open();
					command->ExecuteNonQuery();
					connection->Close();
				}
				if (ogtype) {
					MessageBox::Show(L"تم اضفه" + " " + this->in_kilo_qunt->Value + " " + L"كيلو", L"عمليه ناجحه", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show(L"تم اضفه" + " " + this->in_kilo_qunt->Value + " " + L"واحده", L"عمليه ناجحه", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				get_all_qunt_kilo();

			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: System::Void price_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double value = Convert::ToDouble(this->price->Value);
			this->label14->Text = FormatNumberWithCommas(value - ogprice);

		}
		private: System::Void min_price_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double value = Convert::ToDouble(this->min_price->Value);
			this->label15->Text = FormatNumberWithCommas(value - ogprice);
		}
		private: System::Void in_kilo_qunt_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double new_ogprice = Convert::ToDouble(this->in_price->Value) / Convert::ToDouble(this->in_kilo_qunt->Value);
			this->label18->Text = FormatNumberWithCommas(new_ogprice);
		}
		private: System::Void in_price_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double new_ogprice = Convert::ToDouble(this->in_price->Value) / Convert::ToDouble(this->in_kilo_qunt->Value);
			this->label18->Text = FormatNumberWithCommas(new_ogprice);
		}
		private: void get_all_qunt_kilo() {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ subKilo1 = L"(SELECT COALESCE(SUM(s.in_kilo), 0) FROM Storage s WHERE s.item_id = i.id)";
				String^ subKilo2 = L"(SELECT COALESCE(SUM(r.kilo), 0) FROM Item_return r WHERE r.item_id = i.id)";
				String^ subQunt1 = L"(SELECT COALESCE(SUM(s.in_qun), 0) FROM Storage s WHERE s.item_id = i.id)";
				String^ subQunt2 = L"(SELECT COALESCE(SUM(r.quantity), 0) FROM Item_return r WHERE r.item_id = i.id)";

				String^ selectQuery = L"Select i.*," + subKilo1 + "+" + subKilo2 + "+ i.kilo AS total_kilo," + subQunt1 + "+" + subQunt2 + "+ i.quantity AS total_qunt from Items i where i.id=" + sID + ";";
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read()) {
					
					if (ogtype) {
						this->label23->Text = Convert::ToString(reader->GetDecimal(reader->GetOrdinal("total_kilo")));
					}
					else {
						this->label23->Text = Convert::ToString(reader->GetDecimal(reader->GetOrdinal("total_qunt")));
					}
				}
				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}
