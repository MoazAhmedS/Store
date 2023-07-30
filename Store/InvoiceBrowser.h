#pragma once
#include "Functions.h"
#include "cartitem.h"
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
	/// Summary for InvoiceBrowser
	/// </summary>
	public ref class InvoiceBrowser: public System::Windows::Forms::Form {
		public:
		InvoiceBrowser(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~InvoiceBrowser() {
			if (components) {
				delete components;
			}
		}
		private: System::Windows::Forms::Panel^ panel1;
		protected:
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Panel^ panel3;
		private: System::Windows::Forms::Panel^ panel4;
		private: System::Windows::Forms::GroupBox^ groupBox3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::TextBox^ cust_phone;

		private: System::Windows::Forms::GroupBox^ groupBox2;
		private: System::Windows::Forms::Button^ button3;

		private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Label^ label4;

		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		private: System::Windows::Forms::DataGridView^ dataGridView1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
		private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
		private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InvoiceBrowser::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cust_phone = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->panel1->Size = System::Drawing::Size(1177, 45);
			this->panel1->TabIndex = 7;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &InvoiceBrowser::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &InvoiceBrowser::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &InvoiceBrowser::panel1_MouseUp);
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
			this->button2->Location = System::Drawing::Point(1135, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 12);
			this->label2->Margin = System::Windows::Forms::Padding(0, 3, 0, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"فواتير";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 45);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(348, 647);
			this->panel2->TabIndex = 8;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::ForestGreen;
			this->label13->Location = System::Drawing::Point(12, 606);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 24);
			this->label13->TabIndex = 14;
			this->label13->Text = L"0.00";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::ForestGreen;
			this->label12->Location = System::Drawing::Point(12, 563);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 24);
			this->label12->TabIndex = 13;
			this->label12->Text = L"0.00";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::ForestGreen;
			this->label11->Location = System::Drawing::Point(12, 478);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 24);
			this->label11->TabIndex = 12;
			this->label11->Text = L"0.00";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::ForestGreen;
			this->label10->Location = System::Drawing::Point(12, 521);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 24);
			this->label10->TabIndex = 11;
			this->label10->Text = L"0.00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(160, 606);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 24);
			this->label9->TabIndex = 10;
			this->label9->Text = L"اجمالي المبالغ المستحقه";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(231, 478);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"اجمالي المبلغ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(161, 563);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(171, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"اجمالي المبالغ المدفوعه";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(220, 521);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"مجموع الارباح";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->cust_phone);
			this->groupBox3->Location = System::Drawing::Point(3, 329);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(339, 132);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"البحث برقم العميل";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(9, 80);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(320, 40);
			this->button4->TabIndex = 8;
			this->button4->Text = L"بحث";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(286, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"الرقم";
			// 
			// cust_phone
			// 
			this->cust_phone->Location = System::Drawing::Point(9, 39);
			this->cust_phone->Name = L"cust_phone";
			this->cust_phone->Size = System::Drawing::Size(244, 29);
			this->cust_phone->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->dateTimePicker2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(3, 142);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(339, 181);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"البحث في فتره";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(10, 129);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(319, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"بحث";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button3_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	   static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker2->Location = System::Drawing::Point(10, 85);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(244, 29);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(297, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"الي";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(300, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"من";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(3, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(339, 130);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"البحث في تاريخ معين";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"بحث";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(271, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"التاريخ";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->flowLayoutPanel1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(348, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(449, 647);
			this->panel3->TabIndex = 9;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(447, 645);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dataGridView1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(797, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(380, 647);
			this->panel4->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
																		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(380, 647);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InvoiceBrowser::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"الاسم";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"الوزن/العدد";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 113;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"الاجمالي";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 115;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	   static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(10, 39);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(244, 29);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	   static_cast<System::Byte>(0)));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker3->Location = System::Drawing::Point(10, 39);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(244, 29);
			this->dateTimePicker3->TabIndex = 9;
			// 
			// InvoiceBrowser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1177, 692);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"InvoiceBrowser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InvoiceBrowser";
			this->Load += gcnew System::EventHandler(this, &InvoiceBrowser::InvoiceBrowser_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

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
		private: System::Void InvoiceBrowser_Load(System::Object^ sender, System::EventArgs^ e) {
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


		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(this->cust_phone->Text)) {
				MessageBox::Show(L"ادخل الرقم");
				return;
			}
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				connection->Open();
				String^ query = "SELECT * FROM customer Where phone_number=" + this->cust_phone->Text + " or phone_number_2=" + this->cust_phone->Text + "; ";
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->HasRows) {
					flowLayoutPanel1->Controls->Clear();
					while (reader->Read()) {

						Label^ label = gcnew Label();
						label->Text = reader->GetString(1);
						label->Size = System::Drawing::Size(300, 25);
						label->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);
						flowLayoutPanel1->Controls->Add(label);

						Label^ label2 = gcnew Label();
						label2->Text = "            " + L"باقي" + "      " + L"الاجمالي" + "               " + L"تاريخ الشراء";
						label2->Size = System::Drawing::Size(440, 25);
						label2->Font = gcnew System::Drawing::Font(label->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);
						flowLayoutPanel1->Controls->Add(label2);

						int cust_id = reader->GetInt32(0);
						SqlConnection^ itemconnection = gcnew SqlConnection(connectionString);
						String^ selectQuery = L"SELECT *, FORMAT(date, 'yyyy-MM-dd')+'  '+CONVERT(VARCHAR(15),CAST(FORMAT(date, 'HH:mm')as time),100) AS formatted_date FROM invoice WHERE cust_id = " + cust_id + " ORDER BY date ASC; ";
						try {

							itemconnection->Open();
							SqlCommand^ command2 = gcnew SqlCommand(selectQuery, itemconnection);
							SqlDataReader^ reader2 = command2->ExecuteReader();

							double totalProfit = 0;
							double total = 0;
							double totalPaid = 0;
							double totalRemaining = 0;

							while (reader2->Read()) {
								Button^ button = gcnew Button();
								button->Text = Convert::ToString(reader2->GetString(9)) + "    " + reader2->GetDecimal(3) + "    " + reader2->GetDecimal(6);
								button->Name = Convert::ToString(reader2->GetInt32(0));
								button->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button_Click);
								button->Size = System::Drawing::Size(440, 40);
								button->FlatStyle = FlatStyle::Flat;
								button->Font = gcnew System::Drawing::Font(button->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);

								flowLayoutPanel1->Controls->Add(button);

								totalProfit += Convert::ToDouble(reader2->GetDecimal(4));
								total += Convert::ToDouble(reader2->GetDecimal(3));
								totalPaid += Convert::ToDouble(reader2->GetDecimal(5));
								totalRemaining += Convert::ToDouble(reader2->GetDecimal(6));
							}
							this->label10->Text = Convert::ToString(totalProfit);
							this->label11->Text = Convert::ToString(total);
							this->label12->Text = Convert::ToString(totalPaid);
							this->label13->Text = Convert::ToString(totalRemaining);

							itemconnection->Close();
						}
						catch (SqlException^ ex) {
							MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
					}
				}
				else {
					MessageBox::Show(L"الرقم غير صحيح او غير مسجل");
					return;
				}
				connection->Close();
			}
			catch (SqlException^ ex) {
						// Handle any SQL errors
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
			this->dataGridView1->Rows->Clear();
			Button^ clickedButton = safe_cast<Button^>(sender);
			getdata(clickedButton->Name);
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dateTimePicker3->Value > DateTime::Now) {
				MessageBox::Show(L"التاريخ يجب ان يكون اقل من التاريخ الحالي");
				return;
			}
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			String^ formattedDate = dateTimePicker3->Value.ToString("yyyy-MM-dd");
			String^ selectQuery = L"SELECT *, FORMAT(date, 'yyyy-MM-dd')+'  '+CONVERT(VARCHAR(15),CAST(FORMAT(date, 'HH:mm')as time),100) AS formatted_date FROM invoice WHERE  CONVERT(date, date) = '" + formattedDate + "' ORDER BY date ASC;";
			try {
				flowLayoutPanel1->Controls->Clear();


				Label^ label2 = gcnew Label();
				label2->Text = "            " + L"باقي" + "      " + L"الاجمالي" + "               " + L"تاريخ الشراء";
				label2->Size = System::Drawing::Size(440, 25);
				label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);
				flowLayoutPanel1->Controls->Add(label2);


				connection->Open();
				SqlCommand^ command2 = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader2 = command2->ExecuteReader();

				double totalProfit = 0;
				double total = 0;
				double totalPaid = 0;
				double totalRemaining = 0;

				while (reader2->Read()) {
					Button^ button = gcnew Button();
					button->Text = Convert::ToString(reader2->GetString(9)) + "    " + reader2->GetDecimal(3) + "    " + reader2->GetDecimal(6);
					button->Name = Convert::ToString(reader2->GetInt32(0));
					button->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button_Click);
					button->Size = System::Drawing::Size(420, 40);
					button->FlatStyle = FlatStyle::Flat;
					button->Font = gcnew System::Drawing::Font(button->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);

					flowLayoutPanel1->Controls->Add(button);

					totalProfit += Convert::ToDouble(reader2->GetDecimal(4));
					total += Convert::ToDouble(reader2->GetDecimal(3));
					totalPaid += Convert::ToDouble(reader2->GetDecimal(5));
					totalRemaining += Convert::ToDouble(reader2->GetDecimal(6));
				}
				this->label10->Text = Convert::ToString(totalProfit);
				this->label11->Text = Convert::ToString(total);
				this->label12->Text = Convert::ToString(totalPaid);
				this->label13->Text = Convert::ToString(totalRemaining);

				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: void getdata(String^ inv_id) {

			SqlConnection^ connectionX = gcnew SqlConnection(connectionString);
			String^ queryX = "SELECT item_id,SUM(kilo) AS total_kilo, SUM(quantity) AS total_quantity FROM Purchase WHERE invoice_id = " + inv_id + " GROUP BY item_id;";
			try {
				connectionX->Open();
				SqlCommand^ commandX = gcnew SqlCommand(queryX, connectionX);
				SqlDataReader^ readerX = commandX->ExecuteReader();
				while (readerX->Read()) {

					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					try {
						connection->Open();
						String^ query = "SELECT TOP 1 * FROM Purchase Where item_id=" + readerX->GetInt32(0) + " and invoice_id=" + inv_id + "; ";
						SqlCommand^ command = gcnew SqlCommand(query, connection);
						SqlDataReader^ reader = command->ExecuteReader();

						while (reader->Read()) {
							SqlConnection^ itemconnection = gcnew SqlConnection(connectionString);
							int itemID = reader->GetInt32(reader->GetOrdinal("item_id"));
							String^ selectQuery = L"SELECT i.name AS item_name, c.name AS category_name ,i.enThick,i.thickness,enQunt,enKilo,i.category_id FROM Items i JOIN Category c ON i.category_id = c.id WHERE i.id = " + itemID + "; ";
							try {

								itemconnection->Open();
								SqlCommand^ command2 = gcnew SqlCommand(selectQuery, itemconnection);
								SqlDataReader^ reader2 = command2->ExecuteReader();
								while (reader2->Read()) {
									String^ name = reader2->GetString(reader2->GetOrdinal("item_name"));
									String^ category = reader2->GetString(reader2->GetOrdinal("category_name"));
									double thick = Convert::ToDouble(reader2->GetDecimal(reader2->GetOrdinal("thickness")));
									double quantity = 0;
									bool type = 0;
									double sellprice = 0;
									if (reader->GetBoolean(reader->GetOrdinal("enkilo"))) {
										type = 1;
										quantity = Convert::ToDouble(readerX->GetDecimal(1));

										sellprice = Convert::ToDouble(reader->GetDecimal(5));
									}
									else {
										type = 0;
										quantity = Convert::ToDouble(readerX->GetDecimal(2));

										sellprice = Convert::ToDouble(reader->GetDecimal(10));
									}
									double price = quantity * sellprice;
									String^ fullname;
									if (thick) {
										fullname = String::Format(L"{2} {1} {0} ", name, category, thick);
									}
									else {
										fullname = String::Format(L"{1} {0} ", name, category);
									}

									this->dataGridView1->Rows->Add(fullname, quantity, price);
								}
								itemconnection->Close();
							}
							catch (SqlException^ ex) {
								Console::WriteLine("An error occurred: " + ex->Message);
							}
						}

						connection->Close();
					}
					catch (SqlException^ ex) {
								// Handle any SQL errors
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				connectionX->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}



		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dateTimePicker1->Value > DateTime::Now || dateTimePicker2->Value > DateTime::Now) {
				MessageBox::Show(L"التاريخ يجب ان يكون اقل من التاريخ الحالي");
				return;
			}
			if (dateTimePicker1->Value > dateTimePicker2->Value) {
				MessageBox::Show(L"تاريخ البدايه يجب ان يكون اقل من تاريخ نهايه الفتره");
				return;
			}
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			String^ formattedDateFrom = dateTimePicker1->Value.ToString("yyyy-MM-dd");
			String^ formattedDateTo = dateTimePicker2->Value.ToString("yyyy-MM-dd");
			String^ selectQuery = L"SELECT *, FORMAT(date, 'yyyy-MM-dd')+'  '+CONVERT(VARCHAR(15),CAST(FORMAT(date, 'HH:mm')as time),100) AS formatted_date FROM invoice WHERE  CONVERT(date, date) >= '" + formattedDateFrom + "' and CONVERT(date, date) <= '" + formattedDateTo + "' ORDER BY date ASC;";
			try {
				flowLayoutPanel1->Controls->Clear();


				Label^ label2 = gcnew Label();
				label2->Text = "            " + L"باقي" + "      " + L"الاجمالي" + "               " + L"تاريخ الشراء";
				label2->Size = System::Drawing::Size(440, 25);
				label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);
				flowLayoutPanel1->Controls->Add(label2);


				connection->Open();
				SqlCommand^ command2 = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader2 = command2->ExecuteReader();

				double totalProfit = 0;
				double total = 0;
				double totalPaid = 0;
				double totalRemaining = 0;

				while (reader2->Read()) {
					Button^ button = gcnew Button();
					button->Text = Convert::ToString(reader2->GetString(9)) + "    " + reader2->GetDecimal(3) + "    " + reader2->GetDecimal(6);
					button->Name = Convert::ToString(reader2->GetInt32(0));
					button->Click += gcnew System::EventHandler(this, &InvoiceBrowser::button_Click);
					button->Size = System::Drawing::Size(420, 40);
					button->FlatStyle = FlatStyle::Flat;
					button->Font = gcnew System::Drawing::Font(button->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);

					flowLayoutPanel1->Controls->Add(button);

					totalProfit += Convert::ToDouble(reader2->GetDecimal(4));
					total += Convert::ToDouble(reader2->GetDecimal(3));
					totalPaid += Convert::ToDouble(reader2->GetDecimal(5));
					totalRemaining += Convert::ToDouble(reader2->GetDecimal(6));
				}
				this->label10->Text = Convert::ToString(totalProfit);
				this->label11->Text = Convert::ToString(total);
				this->label12->Text = Convert::ToString(totalPaid);
				this->label13->Text = Convert::ToString(totalRemaining);

				connection->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}
};
}
