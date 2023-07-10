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
#include "Return.h"
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



		private: System::Windows::Forms::ListBox^ cart;

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
		private: System::Windows::Forms::Panel^ panel4;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Button^ button6;

		private: System::Windows::Forms::CheckBox^ checkBox1;
		private: System::Windows::Forms::Panel^ panel7;
		private: System::Windows::Forms::Panel^ panel5;
		private: System::Windows::Forms::Panel^ panel6;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Panel^ panel8;
		private: System::Windows::Forms::Button^ button7;






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
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->control = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cart = (gcnew System::Windows::Forms::ListBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->shop = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->head->SuspendLayout();
			this->control->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->shop->SuspendLayout();
			this->panel8->SuspendLayout();
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
			this->head->Controls->Add(this->button1);
			this->head->Dock = System::Windows::Forms::DockStyle::Top;
			this->head->Location = System::Drawing::Point(0, 0);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(934, 40);
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
			this->checkBox1->Location = System::Drawing::Point(704, 0);
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
			this->button3->Location = System::Drawing::Point(850, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 40);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
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
			this->button1->Location = System::Drawing::Point(892, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 40);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// control
			// 
			this->control->BackColor = System::Drawing::SystemColors::Control;
			this->control->Controls->Add(this->panel8);
			this->control->Controls->Add(this->panel7);
			this->control->Controls->Add(this->panel5);
			this->control->Controls->Add(this->panel6);
			this->control->Controls->Add(this->button2);
			this->control->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->control->Location = System::Drawing::Point(0, 481);
			this->control->Name = L"control";
			this->control->Padding = System::Windows::Forms::Padding(5);
			this->control->Size = System::Drawing::Size(934, 90);
			this->control->TabIndex = 1;
			this->control->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::control_Paint);
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
			this->panel5->Location = System::Drawing::Point(617, 5);
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
			this->panel6->Location = System::Drawing::Point(773, 5);
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(460, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(542, 40);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(392, 441);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel3_Paint);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->cart);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(392, 370);
			this->panel1->TabIndex = 0;
			// 
			// cart
			// 
			this->cart->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->cart->FormattingEnabled = true;
			this->cart->ItemHeight = 24;
			this->cart->Location = System::Drawing::Point(0, 0);
			this->cart->Name = L"cart";
			this->cart->Size = System::Drawing::Size(392, 370);
			this->cart->TabIndex = 0;
			this->cart->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::cart_SelectedIndexChanged);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(392, 33);
			this->panel4->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(90, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 33);
			this->label6->TabIndex = 2;
			this->label6->Text = L"الكميه";
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 33);
			this->label4->TabIndex = 1;
			this->label4->Text = L"اجمالي";
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Right;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(253, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 33);
			this->label5->TabIndex = 0;
			this->label5->Text = L"اسم العنصر";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 403);
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
			this->tabControl1->Size = System::Drawing::Size(542, 441);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->flowLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(534, 403);
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
			this->flowLayoutPanel1->Size = System::Drawing::Size(528, 397);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::flowLayoutPanel1_Paint);
			// 
			// shop
			// 
			this->shop->Controls->Add(this->tabControl1);
			this->shop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->shop->Location = System::Drawing::Point(0, 40);
			this->shop->Name = L"shop";
			this->shop->Size = System::Drawing::Size(542, 441);
			this->shop->TabIndex = 3;
			this->shop->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::shop_Paint);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->button7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel8->Location = System::Drawing::Point(161, 5);
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
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 571);
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
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->shop->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);

		}

		// cart list item

#pragma endregion
		double total = 0;
		public: void AddItemToCart(String^ name, String^ category, double thick, int id, double price, double quantity, bool type, double sellprice) {
			ListItem^ newItem = gcnew ListItem(name, category, thick, id, price, quantity, type, sellprice);
			cart->Items->Add(newItem);
		}
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
			cart->Items->Add(newItem);
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
		private:
		System::Void cart_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			// Get the selected item from the cart ListBox
			if (cart->SelectedIndex != -1) {
				String^ selectedItem = cart->SelectedItem->ToString();

				// Remove any previously added remove buttons
				RemoveButtons();
				std::cout << "me";
				// Add a remove button next to the selected item
				Label^ removeButton = gcnew Label();
				removeButton->Text = L"حزف";
				removeButton->ForeColor = Color::Red;
				removeButton->Width = 75;
				removeButton->Height = cart->ItemHeight;

				// Calculate the position of the remove button
				int buttonX = cart->Width - removeButton->Width;
				int buttonY = cart->Top + (cart->ItemHeight * cart->SelectedIndex);
				removeButton->Location = Point(buttonX, buttonY);

				// Set the event handler for the remove button
				removeButton->Click += gcnew EventHandler(this, &Dashboard::RemoveButton_Click);

				// Add the remove button to the form
				this->cart->Controls->Add(removeButton);
			}
			///////////////////////////////////////////////
			ListItem^ selectedItem = dynamic_cast<ListItem^>(cart->SelectedItem);
			if (selectedItem != nullptr) {
				String^ itemName = selectedItem->Name;
				int itemID = selectedItem->ID;
				double itemPrice = selectedItem->Price;
				double itemQuantity = selectedItem->Quantity;

				// Now you can use these values as needed
				// For example, display them in labels or perform calculations
				//this->label1->Text = Convert::ToString(itemPrice);

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
		private: System::Void RemoveButton_Click(System::Object^ sender, System::EventArgs^ e) {
				  // Handle the remove button click event here
				  // You can remove the selected item from the cart ListBox
			if (cart->SelectedIndex != -1) {
				Label^ removeLabel = safe_cast<Label^>(sender);
				ListItem^ selectedItem = dynamic_cast<ListItem^>(cart->SelectedItem);
				if (selectedItem != nullptr) {
					updatetotal(0, selectedItem->Price);
				}
				cart->Controls->Remove(removeLabel);
				cart->Items->RemoveAt(cart->SelectedIndex);
			}


		}

		private: void RemoveButtons() {
		 // Remove any previously added remove buttons from the form
			for each (Control ^ control in cart->Controls) {
				if (control->GetType() == Label::typeid && control->Text == L"حزف") {
					cart->Controls->Remove(control);
					break;
				}
			}
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
			   System::Void PrintDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
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
			cart->Items->Clear();
			updatetotal(0, Convert::ToDouble(this->label3->Text));
		}
		private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
			List<ListItem^>^ itemList = gcnew List<ListItem^>();

			// Iterate over the items in the source ListBox and create ListItem objects
			for each (ListItem ^ item in cart->Items) {
				// Create a new instance of ListItem using the constructor
				ListItem^ newItem = gcnew ListItem(item->Name, item->Catg, item->Thick, item->ID, item->Price, item->Quantity, item->Type, item->Sellprice);

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
};
}
