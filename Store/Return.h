#pragma once
#include "cartitem.h"
#include <algorithm>
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
	/// Summary for Return
	/// </summary>
	public ref class Return: public System::Windows::Forms::Form {
		public:
		bool Mode;
		Return(bool mode) {
			Mode = mode;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~Return() {
			if (components) {
				delete components;
			}
		}
		private: System::Windows::Forms::Panel^ head;
		protected:
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button1;

		private: System::Windows::Forms::Button^ search_inv;
		private: System::Windows::Forms::TextBox^ inv_id;
		private: System::Windows::Forms::Button^ search_num;



		private: System::Windows::Forms::TextBox^ cust_phone;




		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		private: System::Windows::Forms::SplitContainer^ splitContainer1;
		private: System::Windows::Forms::NumericUpDown^ qunt_kilo;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::DataGridView^ itembox;

		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
		private: System::Windows::Forms::NumericUpDown^ ret_value;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label5;









		protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Return::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->search_inv = (gcnew System::Windows::Forms::Button());
			this->inv_id = (gcnew System::Windows::Forms::TextBox());
			this->search_num = (gcnew System::Windows::Forms::Button());
			this->cust_phone = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->itembox = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ret_value = (gcnew System::Windows::Forms::NumericUpDown());
			this->qunt_kilo = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->head->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itembox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ret_value))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_kilo))->BeginInit();
			this->SuspendLayout();
			// 
			// head
			// 
			this->head->BackColor = System::Drawing::Color::LightGray;
			this->head->Controls->Add(this->label1);
			this->head->Controls->Add(this->button1);
			this->head->Dock = System::Windows::Forms::DockStyle::Top;
			this->head->Location = System::Drawing::Point(0, 0);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(884, 40);
			this->head->TabIndex = 2;
			this->head->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Return::panel1_MouseDown);
			this->head->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Return::panel1_MouseMove);
			this->head->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Return::panel1_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(10, 2, 0, 0);
			this->label1->Size = System::Drawing::Size(77, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ارجاع";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(842, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 40);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Return::button1_Click);
			// 
			// search_inv
			// 
			this->search_inv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->search_inv->Location = System::Drawing::Point(252, 6);
			this->search_inv->Name = L"search_inv";
			this->search_inv->Size = System::Drawing::Size(210, 32);
			this->search_inv->TabIndex = 0;
			this->search_inv->Text = L"بحث برقم الفاتوره";
			this->search_inv->UseVisualStyleBackColor = true;
			this->search_inv->Click += gcnew System::EventHandler(this, &Return::search_inv_Click);
			// 
			// inv_id
			// 
			this->inv_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->inv_id->Location = System::Drawing::Point(13, 7);
			this->inv_id->Name = L"inv_id";
			this->inv_id->Size = System::Drawing::Size(233, 31);
			this->inv_id->TabIndex = 1;
			// 
			// search_num
			// 
			this->search_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->search_num->Location = System::Drawing::Point(252, 44);
			this->search_num->Name = L"search_num";
			this->search_num->Size = System::Drawing::Size(210, 32);
			this->search_num->TabIndex = 2;
			this->search_num->Text = L"بحث برقم العميل";
			this->search_num->UseVisualStyleBackColor = true;
			this->search_num->Click += gcnew System::EventHandler(this, &Return::search_num_Click);
			// 
			// cust_phone
			// 
			this->cust_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->cust_phone->Location = System::Drawing::Point(13, 45);
			this->cust_phone->Name = L"cust_phone";
			this->cust_phone->Size = System::Drawing::Size(233, 31);
			this->cust_phone->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->itembox);
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->cust_phone);
			this->panel2->Controls->Add(this->search_num);
			this->panel2->Controls->Add(this->inv_id);
			this->panel2->Controls->Add(this->search_inv);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(884, 560);
			this->panel2->TabIndex = 4;
			// 
			// itembox
			// 
			this->itembox->AllowUserToAddRows = false;
			this->itembox->AllowUserToDeleteRows = false;
			this->itembox->AllowUserToOrderColumns = true;
			this->itembox->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->itembox->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->itembox->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->itembox->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->itembox->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->itembox->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
																		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->itembox->DefaultCellStyle = dataGridViewCellStyle2;
			this->itembox->Location = System::Drawing::Point(468, 0);
			this->itembox->MultiSelect = false;
			this->itembox->Name = L"itembox";
			this->itembox->ReadOnly = true;
			this->itembox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->itembox->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->itembox->RowHeadersVisible = false;
			this->itembox->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->itembox->Size = System::Drawing::Size(416, 554);
			this->itembox->TabIndex = 9;
			this->itembox->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Return::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"الاسم";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 160;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"الوزن/العدد";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 128;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"الاجمالي";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 128;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Window;
			this->flowLayoutPanel1->Location = System::Drawing::Point(13, 83);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(449, 471);
			this->flowLayoutPanel1->TabIndex = 6;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Return::flowLayoutPanel1_Paint);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->splitContainer1->Location = System::Drawing::Point(0, 600);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->ret_value);
			this->splitContainer1->Panel1->Controls->Add(this->qunt_kilo);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Enabled = false;
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Return::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::LightGray;
			this->splitContainer1->Panel2->Controls->Add(this->button4);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Size = System::Drawing::Size(884, 178);
			this->splitContainer1->SplitterDistance = 464;
			this->splitContainer1->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(334, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L": المبلغ المستحق";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"0.00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(334, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L": المبلغ";
			// 
			// ret_value
			// 
			this->ret_value->DecimalPlaces = 2;
			this->ret_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->ret_value->Location = System::Drawing::Point(14, 41);
			this->ret_value->Name = L"ret_value";
			this->ret_value->Size = System::Drawing::Size(296, 29);
			this->ret_value->TabIndex = 6;
			// 
			// qunt_kilo
			// 
			this->qunt_kilo->DecimalPlaces = 2;
			this->qunt_kilo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->qunt_kilo->Location = System::Drawing::Point(14, 6);
			this->qunt_kilo->Name = L"qunt_kilo";
			this->qunt_kilo->Size = System::Drawing::Size(296, 29);
			this->qunt_kilo->TabIndex = 0;
			this->qunt_kilo->ValueChanged += gcnew System::EventHandler(this, &Return::qunt_kilo_ValueChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGreen;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(156, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ارجاع العنصر";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Return::button3_Click);
			// 
			// label4
			// 
			this->label4->AccessibleDescription = L"المبلغ المسموح ارجاعه للعميل";
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(334, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L": المبلغ المرتجع";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"0.00";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(334, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L": كميه المرتجع";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleGreen;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(204, 54);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(179, 53);
			this->button4->TabIndex = 6;
			this->button4->Text = L"تاكيد اختيار العنصر";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Return::button4_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(34, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"اختيار عنصر مختلف";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Return::button2_Click);
			// 
			// Return
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 778);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->head);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Return";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"    ";
			this->Load += gcnew System::EventHandler(this, &Return::Return_Load);
			this->head->ResumeLayout(false);
			this->head->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itembox))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ret_value))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt_kilo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connectionString = "";
		private: System::Void Return_Load(System::Object^ sender, System::EventArgs^ e) {
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
		private: System::Void search_inv_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(this->inv_id->Text)) {
				MessageBox::Show(L"ادخل رقم الفاتوره");
				return;
			}
			invoice = this->inv_id->Text;
			getdata(this->inv_id->Text);
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void search_num_Click(System::Object^ sender, System::EventArgs^ e) {
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
						String^ selectQuery = L"SELECT *,FORMAT(date, 'yyyy-MM-dd')+'  '+CONVERT(VARCHAR(15),CAST(FORMAT(date, 'HH:mm tt')as time),100) AS formatted_date FROM invoice WHERE cust_id = " + cust_id + " ORDER BY date ASC; ";
						try {

							itemconnection->Open();
							SqlCommand^ command2 = gcnew SqlCommand(selectQuery, itemconnection);
							SqlDataReader^ reader2 = command2->ExecuteReader();
							while (reader2->Read()) {
								Button^ button = gcnew Button();
								button->Text = Convert::ToString(reader2->GetString(9)) + "    " + reader2->GetDecimal(3) + "    " + reader2->GetDecimal(6);
								button->Name = Convert::ToString(reader2->GetInt32(0));
								button->Click += gcnew System::EventHandler(this, &Return::button_Click);
								button->Size = System::Drawing::Size(420, 40);
								button->FlatStyle = FlatStyle::Flat;
								button->Font = gcnew System::Drawing::Font(button->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);

								flowLayoutPanel1->Controls->Add(button);
							}
							itemconnection->Close();
						}
						catch (SqlException^ ex) {
							Console::WriteLine("An error occurred: " + ex->Message);
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
		private: String^ invoice;
		private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ clickedButton = safe_cast<Button^>(sender);
			getdata(clickedButton->Name);
			invoice = clickedButton->Name;
		}

		private: void getdata(String^ inv_id) {
			SqlConnection^ connectionX = gcnew SqlConnection(connectionString);
			String^ queryX = "SELECT item_id,SUM(kilo) AS total_kilo, SUM(quantity) AS total_quantity FROM Purchase WHERE invoice_id = " + inv_id + " GROUP BY item_id;";
			try {
				connectionX->Open();
				SqlCommand^ commandX = gcnew SqlCommand(queryX, connectionX);
				SqlDataReader^ readerX = commandX->ExecuteReader();
				if (readerX->HasRows) {
					this->itembox->Rows->Clear();
					this->splitContainer1->Panel1->Enabled = 0;
					SetItemBoxEnabled(1);
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
										ListItem^ newItem = gcnew ListItem(name, category, thick, itemID, price, quantity, type, sellprice);

										String^ fullname;
										if (thick) {
											fullname = String::Format(L"{2} {1} {0} ", name, category, thick);
										}
										else {
											fullname = String::Format(L"{1} {0} ", name, category);
										}

										int rowIndex = itembox->Rows->Add(fullname, quantity, price);

										this->itembox->Rows[rowIndex]->Tag = newItem;
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
					this->itembox->ClearSelection();
					connectionX->Close();
				}
				else {
					MessageBox::Show(L"رقم الفاتوره غير صحيح او لا توجد فاتوره بهذا الرقم");
					return;
				}
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}


		}

		private: System::Void SetItemBoxEnabled(bool isEnabled) {
			itembox->Enabled = isEnabled;

			// Set custom style when disabled
			if (!isEnabled) {
				itembox->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Control;
				itembox->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::GrayText;
			}
			// Set regular style when enabled
			else {
				itembox->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Window;
				itembox->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::WindowText;
			}
		}

		private: double changeprice = 0;
		private: System::Void itembox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			SetItemBoxEnabled(1);
			this->splitContainer1->Panel1->Enabled = 0;
		}

		private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (itembox->SelectedRows->Count > 0) {
				SetItemBoxEnabled(0);
				this->splitContainer1->Panel1->Enabled = 1;
			}

		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (itembox->SelectedRows->Count > 0) {
				int selectedIndex = itembox->CurrentCell->RowIndex;
				ListItem^ selectedItem = safe_cast<ListItem^>(itembox->Rows[selectedIndex]->Tag);
				//get the origin price of the selected item from items table
				//return the the qunt/kilo with same origin price to items table
				//return the rest to item_return
				double retqunt_kilo = Convert::ToDouble(this->qunt_kilo->Value);
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				try {
					connection->Open();
					String^ query = "SELECT P.* FROM Purchase P JOIN Items I ON P.item_id = I.id WHERE P.id = " + selectedItem->ID + ";";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					SqlDataReader^ reader = command->ExecuteReader();



					connection->Close();
				}
				catch (SqlException^ ex) {
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}

		private: System::Void qunt_kilo_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			if (itembox->SelectedRows->Count > 0) {
				this->label2->Text = FormatNumberWithCommas(changeprice * Convert::ToDouble(this->qunt_kilo->Value));
			}
		}
		private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: double remaining;
		private: void getInvData(String^ inv_id) {
			SqlConnection^ itemconnection = gcnew SqlConnection(connectionString);
			String^ selectQuery = L"SELECT * from Invoice where id=" + inv_id + ";";

			try {

				itemconnection->Open();
				SqlCommand^ command2 = gcnew SqlCommand(selectQuery, itemconnection);
				SqlDataReader^ reader2 = command2->ExecuteReader();
				while (reader2->Read()) {
					remaining = Convert::ToDouble(reader2->GetDecimal(reader2->GetOrdinal("remaining")));
				}
				itemconnection->Close();
			}
			catch (SqlException^ ex) {
				Console::WriteLine("An error occurred: " + ex->Message);
			}
		}

		private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (itembox->CurrentCell != nullptr) {
				int selectedIndex = itembox->CurrentCell->RowIndex;
				ListItem^ selectedItem = safe_cast<ListItem^>(itembox->Rows[e->RowIndex]->Tag);

				this->qunt_kilo->Maximum = Convert::ToDecimal(selectedItem->Quantity);
				this->qunt_kilo->Value = Convert::ToDecimal(selectedItem->Quantity);

				changeprice = selectedItem->Sellprice;
				double totalam = changeprice * Convert::ToDouble(this->qunt_kilo->Value);
				getInvData(invoice);
				double mx_withdraw = totalam- min(totalam, Convert::ToDouble(remaining));
				
				this->ret_value->Maximum = Convert::ToDecimal(totalam);
				this->ret_value->Value = Convert::ToDecimal(mx_withdraw);
				this->label2->Text = FormatNumberWithCommas(totalam);
			}

		}
	};
}
