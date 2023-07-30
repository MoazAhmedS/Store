#pragma once
#include <iostream>
#include "Catg.h"
#include "Sell.h"
#include "Additems.h"
#include "cartitem.h"
#include "BuyConfirmation.h"
#include <vector>
#include "ItemManager.h"
#include <string>
#include "Functions.h"
#include "Shortage.h"
#include "ItemAvailable.h"
#include "Return.h"
#include "CreateUser.h"
#include "InvoiceBrowser.h"
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
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard: public System::Windows::Forms::Form {
		public:
		Dashboard(int id, String^ name, bool type) {
			emp_id = id;
			emp_name = name;
			isMode = type;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~Dashboard() {
			if (components) {
				delete components;
			}
		}
		private: int emp_id;
		private: bool isMode;
		private: String^ emp_name;
		private: System::Windows::Forms::Panel^ head;
		private: System::Windows::Forms::Panel^ control;
		protected:

		protected:

		private: System::Windows::Forms::Panel^ panel3;





		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::TabControl^ tabControl1;



		private: System::Windows::Forms::Panel^ shop;
		private: System::Windows::Forms::TabPage^ tabPage1;
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Panel^ panel1;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label2;




		private: System::Windows::Forms::Button^ button6;

		private: System::Windows::Forms::CheckBox^ checkBox1;
		private: System::Windows::Forms::Panel^ panel7;
		private: System::Windows::Forms::Panel^ panel5;
		private: System::Windows::Forms::Panel^ panel6;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Panel^ panel8;
		private: System::Windows::Forms::Button^ button7;
		private: System::Windows::Forms::Panel^ panel9;
		private: System::Windows::Forms::Button^ button8;
		private: System::Windows::Forms::Panel^ panel10;
		private: System::Windows::Forms::Button^ button9;
		private: System::Windows::Forms::Panel^ panel11;
		private: System::Windows::Forms::Button^ button10;
		private: System::Windows::Forms::DataGridView^ cart;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;






























		protected:








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->control = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cart = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->shop = (gcnew System::Windows::Forms::Panel());
			this->head->SuspendLayout();
			this->control->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cart))->BeginInit();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->shop->SuspendLayout();
			this->SuspendLayout();
			// 
			// head
			// 
			this->head->BackColor = System::Drawing::Color::LightGray;
			this->head->Controls->Add(this->label8);
			this->head->Controls->Add(this->label7);
			this->head->Controls->Add(this->checkBox1);
			this->head->Controls->Add(this->label1);
			this->head->Controls->Add(this->button3);
			this->head->Controls->Add(this->button2);
			this->head->Controls->Add(this->button1);
			this->head->Dock = System::Windows::Forms::DockStyle::Top;
			this->head->Location = System::Drawing::Point(0, 0);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(1309, 40);
			this->head->TabIndex = 0;
			this->head->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::head_Paint);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(164, 0);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(10, 2, 0, 0);
			this->label8->Size = System::Drawing::Size(34, 33);
			this->label8->TabIndex = 6;
			this->label8->Text = L"-";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(130, 0);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(10, 2, 0, 0);
			this->label7->Size = System::Drawing::Size(34, 33);
			this->label7->TabIndex = 5;
			this->label7->Text = L"-";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(1079, 0);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Padding = System::Windows::Forms::Padding(5);
			this->checkBox1->Size = System::Drawing::Size(146, 40);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L" وضع الاداره";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Dashboard::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(10, 2, 0, 0);
			this->label1->Size = System::Drawing::Size(130, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"اسم المتجر";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Dock = System::Windows::Forms::DockStyle::Right;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1225, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 40);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(463, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
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
			this->button1->Location = System::Drawing::Point(1267, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 40);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// control
			// 
			this->control->BackColor = System::Drawing::SystemColors::Control;
			this->control->Controls->Add(this->panel9);
			this->control->Controls->Add(this->panel8);
			this->control->Controls->Add(this->panel11);
			this->control->Controls->Add(this->panel10);
			this->control->Controls->Add(this->panel7);
			this->control->Controls->Add(this->panel5);
			this->control->Controls->Add(this->panel6);
			this->control->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->control->Location = System::Drawing::Point(0, 539);
			this->control->Name = L"control";
			this->control->Padding = System::Windows::Forms::Padding(5);
			this->control->Size = System::Drawing::Size(1309, 90);
			this->control->TabIndex = 1;
			this->control->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::control_Paint);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->button8);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel9->Location = System::Drawing::Point(629, 5);
			this->panel9->Name = L"panel9";
			this->panel9->Padding = System::Windows::Forms::Padding(5);
			this->panel9->Size = System::Drawing::Size(156, 80);
			this->panel9->TabIndex = 8;
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(5, 5);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(5);
			this->button8->Size = System::Drawing::Size(146, 70);
			this->button8->TabIndex = 1;
			this->button8->Text = L"جرد";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Dashboard::button8_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->button7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel8->Location = System::Drawing::Point(473, 5);
			this->panel8->Name = L"panel8";
			this->panel8->Padding = System::Windows::Forms::Padding(5);
			this->panel8->Size = System::Drawing::Size(156, 80);
			this->panel8->TabIndex = 6;
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(5, 5);
			this->button7->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 70);
			this->button7->TabIndex = 3;
			this->button7->Text = L"النقص في العناصر";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click_1);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->button10);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel11->Location = System::Drawing::Point(317, 5);
			this->panel11->Name = L"panel11";
			this->panel11->Padding = System::Windows::Forms::Padding(5);
			this->panel11->Size = System::Drawing::Size(156, 80);
			this->panel11->TabIndex = 10;
			// 
			// button10
			// 
			this->button10->AutoSize = true;
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		 static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(5, 5);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(5);
			this->button10->Size = System::Drawing::Size(146, 70);
			this->button10->TabIndex = 1;
			this->button10->Text = L"فواتير";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Dashboard::button10_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->button9);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(161, 5);
			this->panel10->Name = L"panel10";
			this->panel10->Padding = System::Windows::Forms::Padding(5);
			this->panel10->Size = System::Drawing::Size(156, 80);
			this->panel10->TabIndex = 9;
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(5, 5);
			this->button9->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(146, 70);
			this->button9->TabIndex = 3;
			this->button9->Text = L"انشاء حساب موظف/عميل";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Dashboard::button9_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button4);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel7->Location = System::Drawing::Point(5, 5);
			this->panel7->Name = L"panel7";
			this->panel7->Padding = System::Windows::Forms::Padding(5);
			this->panel7->Size = System::Drawing::Size(156, 80);
			this->panel7->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(5, 5);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(5);
			this->button4->Size = System::Drawing::Size(146, 70);
			this->button4->TabIndex = 1;
			this->button4->Text = L"اضافه قسم";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(992, 5);
			this->panel5->Name = L"panel5";
			this->panel5->Padding = System::Windows::Forms::Padding(5);
			this->panel5->Size = System::Drawing::Size(156, 80);
			this->panel5->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(5, 5);
			this->button6->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 70);
			this->button6->TabIndex = 3;
			this->button6->Text = L"ارجاع بالفاتوره";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Dashboard::button6_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button5);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel6->Location = System::Drawing::Point(1148, 5);
			this->panel6->Name = L"panel6";
			this->panel6->Padding = System::Windows::Forms::Padding(5);
			this->panel6->Size = System::Drawing::Size(156, 80);
			this->panel6->TabIndex = 6;
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(5, 5);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(5);
			this->button5->Size = System::Drawing::Size(146, 70);
			this->button5->TabIndex = 2;
			this->button5->Text = L"بيع / إنشاء فاتوره";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Dashboard::button5_Click_1);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(917, 40);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(392, 499);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel3_Paint);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->cart);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(392, 461);
			this->panel1->TabIndex = 0;
			// 
			// cart
			// 
			this->cart->AllowUserToAddRows = false;
			this->cart->AllowUserToDeleteRows = false;
			this->cart->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->cart->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->cart->BackgroundColor = System::Drawing::SystemColors::Control;
			this->cart->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->cart->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->cart->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->cart->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4, this->Column1,
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
			this->cart->DefaultCellStyle = dataGridViewCellStyle5;
			this->cart->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cart->Location = System::Drawing::Point(0, 0);
			this->cart->MultiSelect = false;
			this->cart->Name = L"cart";
			this->cart->ReadOnly = true;
			this->cart->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->cart->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::DarkRed;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::DarkRed;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->cart->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->cart->RowHeadersVisible = false;
			this->cart->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->cart->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->cart->Size = System::Drawing::Size(392, 461);
			this->cart->TabIndex = 10;
			this->cart->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::cart_CellContentClick);
			this->cart->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::cart_CellContentClick_1);
			this->cart->CellPainting += gcnew System::Windows::Forms::DataGridViewCellPaintingEventHandler(this, &Dashboard::dataGridView1_CellPainting);
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::DarkRed;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column4->Width = 35;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column1->HeaderText = L"الاسم";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column1->Width = 145;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			dataGridViewCellStyle3->Format = L"N2";
			dataGridViewCellStyle3->NullValue = nullptr;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column2->HeaderText = L"الوزن/العدد";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column2->Width = 105;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			dataGridViewCellStyle4->Format = L"N2";
			dataGridViewCellStyle4->NullValue = nullptr;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column3->HeaderText = L"الاجمالي";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column3->Width = 105;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 461);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(392, 38);
			this->panel2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"0.00";
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Right;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(258, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"اجمالي الفاتوره";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(178)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(917, 499);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->flowLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(909, 461);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Dashboard::tabPage1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(903, 455);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::flowLayoutPanel1_Paint);
			// 
			// shop
			// 
			this->shop->Controls->Add(this->tabControl1);
			this->shop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->shop->Location = System::Drawing::Point(0, 40);
			this->shop->Name = L"shop";
			this->shop->Size = System::Drawing::Size(917, 499);
			this->shop->TabIndex = 3;
			this->shop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::shop_Paint);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1309, 629);
			this->Controls->Add(this->shop);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->control);
			this->Controls->Add(this->head);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->head->ResumeLayout(false);
			this->head->PerformLayout();
			this->control->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cart))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->shop->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		// cart list item

#pragma endregion
		double total = 0;

		public: String^ connectionString = "";
		private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
			this->label8->Text = emp_name;
			if (isMode) {
				this->checkBox1->Visible = 1;
			}
			else {
				this->checkBox1->Visible = 0;
			}
			connectionString = Load_Data();
			refresh();
		}
		public: delegate void ReOpenHandler();
		public: event ReOpenHandler^ reopen;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			reopen();
			Close();
		}

		private: void SellForm_ItemAddedToCart(System::String^ name, System::String^ category, double thick, int id, double price, double quantity, bool type, double sellprice) {

			ListItem^ newItem = gcnew ListItem(name, category, thick, id, price, quantity, type, sellprice);
			updatetotal(1, price);
			String^ fullname;
			if (thick) {
				fullname = String::Format(L"{2} {1} {0} ", name, category, thick);
			}
			else {
				fullname = String::Format(L"{1} {0} ", name, category);
			}

			int rowIndex = cart->Rows->Add("", fullname, quantity, price);
			
			this->cart->Rows[rowIndex]->Tag = newItem;
			
		}
		private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ clickedButton = safe_cast<Button^>(sender);

			Sell^ openc = gcnew Sell(clickedButton->Name);
			openc->ItemAddedToCart += gcnew Sell::ItemAddedToCartEventHandler(this, &Dashboard::SellForm_ItemAddedToCart);

			openc->ShowDialog();
		}

		private: System::Void manager_button(System::Object^ sender, System::EventArgs^ e) {
			Button^ clickedButton = safe_cast<Button^>(sender);
			ItemManager^ openc = gcnew ItemManager(clickedButton->Name);
			openc->ShowDialog();
		}

		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
		}
		private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		}

		private: System::Void dataGridView1_CellPainting(System::Object^ sender, System::Windows::Forms::DataGridViewCellPaintingEventArgs^ e) {
			
			// Check if it's a row header cell
			if (cart->Rows->Count > 0) {
				if (e->ColumnIndex == 0 && e->RowIndex == cart->CurrentRow->Index) {
					e->Paint(e->CellBounds, DataGridViewPaintParts::All);

					// Set the color and thickness for the "X" symbol
					Color xColor = Color::Red;
					float xThickness = 5;
					int xPadding = 6;
					// Calculate the coordinates for drawing the "X" symbol
					int xLeft = e->CellBounds.Left + xPadding;
					int xTop = e->CellBounds.Top + xPadding;
					int xRight = e->CellBounds.Right - xPadding;
					int xBottom = e->CellBounds.Bottom - xPadding;

					// Draw the "X" symbol
					e->Graphics->DrawLine(gcnew Pen(xColor, xThickness), xLeft, xTop, xRight, xBottom);
					e->Graphics->DrawLine(gcnew Pen(xColor, xThickness), xLeft, xBottom, xRight, xTop);

					//this->cart->Rows[e->RowIndex]->HeaderCell->Value = "X";


					e->Handled = true;
				}
			}

		}


		private: System::Void cart_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			
			if (e->RowIndex >= 0 && e->ColumnIndex == 0) {
			// Remove the row from the DataGridView
				if (MessageBox::Show(L"هل انت متاكد من حزف العنصر المحدد", L"تاكيد", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK) {
					ListItem^ selectedItem = dynamic_cast<ListItem^>(this->cart->Rows[e->RowIndex]->Tag);
					if (selectedItem != nullptr) {
						updatetotal(0, selectedItem->Price);
					}
					cart->Rows->RemoveAt(e->RowIndex);
				}
				else {
					return;
				}
			}
		}

		private: void updatetotal(bool ty, double value) {
			double ntotal;
			if (ty) {
				ntotal = Convert::ToDouble(this->label3->Text) + value;
			}
			else {
				ntotal = Convert::ToDouble(this->label3->Text) - value;
			}
			this->label3->Text = FormatNumberWithCommas(ntotal);

		}
		//////Testing printer///////////////
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			System::Drawing::Printing::PrintDocument^ printDocument = gcnew System::Drawing::Printing::PrintDocument();

			// Set the PrintPage event handler to define the content to be printed
			printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Dashboard::PrintDocument_PrintPage);

			// Show the print preview dialog
			System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog = gcnew System::Windows::Forms::PrintPreviewDialog();
			printPreviewDialog->Document = printDocument;
			printPreviewDialog->ShowDialog();
		}
		private:System::Void PrintDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		// Define the content to be printed
			System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 8);
			System::Drawing::StringFormat^ format = gcnew System::Drawing::StringFormat();
			System::Drawing::RectangleF bounds = e->MarginBounds;

			// Specify the text to be printed
			System::String^ textToPrint = "This is the text to be printed.";

			// Draw the text on the page
			e->Graphics->DrawString(textToPrint, font, System::Drawing::Brushes::Black, bounds, format);
		}


		private: System::Void head_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void control_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void shop_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}


		private: System::Void CatgButton1ClickHandler() {
			refresh();
		}


		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Catg^ cat = gcnew Catg();
			cat->CatgButton1ClickEvent += gcnew Catg::CatgButton1ClickEventHandler(this, &Dashboard::CatgButton1ClickHandler);
			cat->ShowDialog();
		}
		public: void refresh() {
			//// get the current selected tabpage
			TabPage^ selectedTabPage = tabControl1->SelectedTab;
			String^ currkey;
			if (selectedTabPage != nullptr) {
				currkey = selectedTabPage->Name;
			}
			// Clear all existing buttons and tabs in each tab
			for each (TabPage ^ tabPage in this->tabControl1->TabPages) {
				FlowLayoutPanel^ flowLayoutPanel = dynamic_cast<FlowLayoutPanel^>(tabPage->Controls[0]);
				flowLayoutPanel->Controls->Clear();
			}
			this->tabControl1->TabPages->Clear();




			SqlConnection^ connection = gcnew SqlConnection(connectionString);


			try {
				// Open the database connection
				connection->Open();

				// Execute a SQL query
				String^ query = "SELECT id,name FROM Category;";
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				SqlDataReader^ reader = command->ExecuteReader();

				// Process the data
				while (reader->Read()) {
					String^ key = Convert::ToString(reader->GetInt32(0));
					this->tabControl1->TabPages->Add(key, reader->GetString(1));
					this->tabControl1->TabPages[key]->UseVisualStyleBackColor = true;


					flowLayoutPanel = (gcnew FlowLayoutPanel());
					flowLayoutPanel->Dock = DockStyle::Fill;
					this->tabControl1->TabPages[key]->Controls->Add(flowLayoutPanel);

					// Retrieve the item name and price
					SqlConnection^ connection2 = gcnew SqlConnection(connectionString);

					try {
						connection2->Open();
						query = "SELECT * FROM (SELECT *,ROW_NUMBER() OVER (PARTITION BY name ORDER BY (quantity + kilo) DESC, id) AS rn FROM Items WHERE category_id = '" + reader->GetInt32(0) + "') AS sub WHERE rn = 1 ORDER BY CASE WHEN kilo <= 0 AND quantity <= 0 THEN 1 ELSE 0 END;";

						SqlCommand^ command2 = gcnew SqlCommand(query, connection2);
						SqlDataReader^ readerdata = command2->ExecuteReader();
						while (readerdata->Read()) {
							String^ itemName = readerdata->GetString(1);
							String^ itemPrice = "";

							if (readerdata->GetBoolean(2) == true)
								itemPrice = Convert::ToString(readerdata->GetDecimal(3));

							Button^ button = gcnew Button();
							button->Text = itemName + "\n" + itemPrice;
							button->Name = Convert::ToString(readerdata->GetInt32(0));
							if (this->checkBox1->Checked) {
								button->Click += gcnew System::EventHandler(this, &Dashboard::manager_button);
							}
							else {
								button->Click += gcnew System::EventHandler(this, &Dashboard::button_Click);
							}

							button->Size = System::Drawing::Size(200, 100);
							button->FlatStyle = FlatStyle::Flat;
							if (readerdata->GetDecimal(3) > 0 || readerdata->GetDecimal(9) > 0) {
								button->FlatAppearance->BorderColor = Color::DarkSeaGreen;
							}
							else {
								button->FlatAppearance->BorderColor = Color::OrangeRed;
							}
							//button->FlatAppearance->BorderColor = Color::DarkSeaGreen;
							button->FlatAppearance->BorderSize = 8;
							//button->BackColor = SystemColors::Control;
							flowLayoutPanel->Controls->Add(button);

						}
						readerdata->Close();
					}
					catch (SqlException^ ex) {
						// Handle any SQL errors
						Console::WriteLine("An error occurred: " + ex->Message);
					}
					finally {
						// Close the database connection
						if (connection2->State == System::Data::ConnectionState::Open)
							connection2->Close();
					}
					if (this->checkBox1->Checked) {
						Button^ button = gcnew Button();
						button->Text = "+";
						button->Name = Convert::ToString(reader->GetInt32(0));
						button->Click += gcnew System::EventHandler(this, &Dashboard::buttonAdd_Click);
						button->Size = System::Drawing::Size(200, 100);
						button->FlatStyle = FlatStyle::Flat;
						button->BackColor = Color::PaleGreen;
						button->Font = gcnew System::Drawing::Font(button->Font->FontFamily, 50);

						flowLayoutPanel->Controls->Add(button);
					}


				}

				// Close the SqlDataReader
				reader->Close();
			}
			catch (SqlException^ ex) {
				// Handle any SQL errors
				Console::WriteLine("An error occurred: " + ex->Message);
			}
			finally {
				// Close the database connection
				if (connection->State == System::Data::ConnectionState::Open)
					connection->Close();
			}

			TabPage^ tabPage = tabControl1->TabPages[currkey];
			if (tabPage != nullptr) {
				tabControl1->SelectedTab = tabPage;
			}

		}
		private: System::Void AddButton1ClickHandler() {
			refresh();
		}
		private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ button = dynamic_cast<Button^>(sender);
			if (button != nullptr) {
				Control^ tabPage = button->Parent;
				while (tabPage != nullptr && !dynamic_cast<TabPage^>(tabPage)) {
					tabPage = tabPage->Parent;
				}

				TabPage^ tab = dynamic_cast<TabPage^>(tabPage);
				if (tab != nullptr) {
					String^ key = tabPage->Name;
					String^ name = tabPage->Text;
					Additems^ additem = gcnew Additems(Convert::ToInt32(key), name);
					additem->AddButton1ClickEvent += gcnew Additems::AddButton1ClickEventHandler(this, &Dashboard::AddButton1ClickHandler);
					additem->ShowDialog();
				}
			}
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			refresh();
		}
		private: void ClearCart() {
			cart->Rows->Clear();
			updatetotal(0, Convert::ToDouble(this->label3->Text));
		}
		private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
			List<ListItem^>^ itemList = gcnew List<ListItem^>();

			// Iterate over the items in the source ListBox and create ListItem objects
			for each (DataGridViewRow ^ row in cart->Rows) {
				// Create a new instance of ListItem using the constructor
				ListItem^ newItem = safe_cast<ListItem^>(row->Tag);
				// Add the new item to the list
				itemList->Add(newItem);
			}

			// Create an instance of the second form
			BuyConfirmation^ buy = gcnew BuyConfirmation(itemList, emp_id, Convert::ToDouble(this->label3->Text));
			buy->clearthecartitems += gcnew BuyConfirmation::clearthecart(this, &Dashboard::ClearCart);
			buy->CatgButton1ClickEvent += gcnew BuyConfirmation::CatgButton1ClickEventHandler(this, &Dashboard::CatgButton1ClickHandler);

			// Show the second form
			buy->ShowDialog();
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			Return^ ret = gcnew Return(1);
			ret->ShowDialog();
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			refresh();
		}
		private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
			Shortage^ shrt = gcnew Shortage();
			shrt->ShowDialog();
		}
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			ItemAvailable^ av = gcnew ItemAvailable();
			av->ShowDialog();
		}
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			CreateUser^ user = gcnew CreateUser();
			user->ShowDialog();
		}
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			InvoiceBrowser^ inv = gcnew InvoiceBrowser();
			inv->ShowDialog();
		}
		private: System::Void cart_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}
};
}
