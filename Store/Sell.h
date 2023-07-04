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
	/// Summary for Sell
	/// </summary>
	public ref class Sell: public System::Windows::Forms::Form {
		public:
		Sell(String^ IDD) {
			ID = IDD;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~Sell() {
			if (components) {
				delete components;
			}
		}
		String^ ID;
		private:ListBox^ listBox;
		private: System::Windows::Forms::Panel^ panel1;
		protected:

		private: System::Windows::Forms::Panel^ panel3;
		private: System::Windows::Forms::Button^ button1;


		private: System::Windows::Forms::GroupBox^ groupBox2;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::NumericUpDown^ qun_price;
		private: System::Windows::Forms::NumericUpDown^ qunt;


		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::NumericUpDown^ kilo_price;
		private: System::Windows::Forms::NumericUpDown^ kilo;


		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sell::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->qun_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->qunt = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->kilo_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->kilo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qun_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_price))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(371, 45);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Sell::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Sell::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Sell::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Sell::panel1_MouseUp);
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
			this->button1->Location = System::Drawing::Point(329, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 45);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sell::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(81, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"اسم السلعه";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Sell::label1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->groupBox2);
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(371, 405);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Sell::panel3_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(74, 343);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(222, 50);
			this->button4->TabIndex = 11;
			this->button4->Text = L"اضافه";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Sell::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(18, 82);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(224, 32);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Sell::comboBox1_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Enabled = false;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(290, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L": السُمك";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Green;
			this->label7->Location = System::Drawing::Point(13, 296);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"00.00";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(263, 296);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L": الاجمالي";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(85, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"البيع بالعدد";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Sell::button3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(222, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"البيع بالكيلو";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Sell::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->qun_price);
			this->groupBox2->Controls->Add(this->qunt);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 129);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(347, 150);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"البيع بالعدد";
			this->groupBox2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(236, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L": سعر الواحده";
			// 
			// qun_price
			// 
			this->qun_price->DecimalPlaces = 2;
			this->qun_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->qun_price->Location = System::Drawing::Point(6, 94);
			this->qun_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->qun_price->Name = L"qun_price";
			this->qun_price->Size = System::Drawing::Size(224, 29);
			this->qun_price->TabIndex = 7;
			this->qun_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->qun_price->ThousandsSeparator = true;
			this->qun_price->ValueChanged += gcnew System::EventHandler(this, &Sell::numericUpDown3_ValueChanged);
			// 
			// qunt
			// 
			this->qunt->DecimalPlaces = 2;
			this->qunt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->qunt->Location = System::Drawing::Point(6, 37);
			this->qunt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->qunt->Name = L"qunt";
			this->qunt->Size = System::Drawing::Size(224, 29);
			this->qunt->TabIndex = 6;
			this->qunt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->qunt->ThousandsSeparator = true;
			this->qunt->ValueChanged += gcnew System::EventHandler(this, &Sell::numericUpDown4_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(287, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L": العدد";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->kilo_price);
			this->groupBox1->Controls->Add(this->kilo);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(347, 150);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"البيع بالكيلو";
			this->groupBox1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(246, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L": سعر الكيلو";
			// 
			// kilo_price
			// 
			this->kilo_price->DecimalPlaces = 2;
			this->kilo_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->kilo_price->Location = System::Drawing::Point(6, 94);
			this->kilo_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->kilo_price->Name = L"kilo_price";
			this->kilo_price->Size = System::Drawing::Size(224, 29);
			this->kilo_price->TabIndex = 3;
			this->kilo_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->kilo_price->ThousandsSeparator = true;
			this->kilo_price->ValueChanged += gcnew System::EventHandler(this, &Sell::numericUpDown2_ValueChanged);
			// 
			// kilo
			// 
			this->kilo->DecimalPlaces = 2;
			this->kilo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->kilo->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->kilo->Location = System::Drawing::Point(6, 37);
			this->kilo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->kilo->Name = L"kilo";
			this->kilo->Size = System::Drawing::Size(224, 29);
			this->kilo->TabIndex = 2;
			this->kilo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->kilo->ThousandsSeparator = true;
			this->kilo->ValueChanged += gcnew System::EventHandler(this, &Sell::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(279, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L": الوزن";
			// 
			// Sell
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 450);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Sell";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sell";
			this->Load += gcnew System::EventHandler(this, &Sell::Sell_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qun_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qunt))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo_price))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kilo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: Boolean k;
		public: Boolean q;
			  String^ name;
			  String^ catg;
			  Boolean clicked1 = 0, clicked2 = 0;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}
		private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		}
		public: String^ connectionString = "";
		private: System::Void Sell_Load(System::Object^ sender, System::EventArgs^ e) {
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
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
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

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			clicked1 = 1;
			clicked2 = 0;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Enabled = 0;
			if (q) {
				this->button3->Enabled = 1;
			}

			this->groupBox1->Visible = 1;
			this->groupBox2->Visible = 0;
			this->label7->Text = "00.00";
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			clicked2 = 1;
			clicked1 = 0;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			if (k) {
				this->button2->Enabled = 1;
			}
			this->button3->Enabled = 0;
			this->groupBox1->Visible = 0;
			this->groupBox2->Visible = 1;
			this->label7->Text = "00.00";
		}
		private:
			//format the number to add comma for the thousands

		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double kilo = Convert::ToDouble(this->kilo->Value);
			double price = Convert::ToDouble(this->kilo_price->Value);
			String^ formattedNumber = FormatNumberWithCommas(kilo * price);
			this->label7->Text = formattedNumber;
		}

		private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double kilo = Convert::ToDouble(this->kilo->Value);
			double price = Convert::ToDouble(this->kilo_price->Value);
			String^ formattedNumber = FormatNumberWithCommas(kilo * price);
			this->label7->Text = formattedNumber;
		}
		private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double price = Convert::ToDouble(this->qun_price->Value);
			double qunt = Convert::ToDouble(this->qunt->Value);
			String^ formattedNumber = FormatNumberWithCommas(qunt * price);
			this->label7->Text = formattedNumber;
		}
		private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			double price = Convert::ToDouble(this->qun_price->Value);
			double qunt = Convert::ToDouble(this->qunt->Value);
			String^ formattedNumber = FormatNumberWithCommas(qunt * price);
			this->label7->Text = formattedNumber;
		}
		private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: bool og = 0;
		private: void getdata() {

			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {

				connection->Open();
				String^ selectQuery = L"SELECT i.name AS item_name, c.name AS category_name ,i.enThick,enQunt,enKilo,i.category_id FROM Items i JOIN Category c ON i.category_id = c.id WHERE i.id = " + ID + "; ";
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				Boolean thick;
				int ctID;
				while (reader->Read()) {
					this->label1->Text = reader->GetString(1) + " : " + reader->GetString(0);
					catg = reader->GetString(1);
					name = reader->GetString(0);
					thick = reader->GetBoolean(2);
					if (reader->GetBoolean(3)) {
						this->button3->Enabled = 1;
						q = reader->GetBoolean(3);
					}
					if (reader->GetBoolean(4)) {
						this->button2->Enabled = 1;
						k = reader->GetBoolean(4);
					}
					ctID = reader->GetInt32(5);
				}
				reader->Close();
				if (thick) {
					this->label8->Enabled = 1;
					this->comboBox1->Enabled = 1;
					selectQuery = L"Select enThick,thickness from items where name=N'" + name + "' AND (quantity > 0 OR kilo > 0 and category_id=" + ctID + ");";
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
					this->label8->Enabled = 0;
					this->comboBox1->Enabled = 0;
					String^ subKilo1 = L"(SELECT COALESCE(SUM(s.in_kilo), 0) FROM Storage s WHERE s.item_id = i.id)";
					String^ subKilo2 = L"(SELECT COALESCE(SUM(r.kilo), 0) FROM Item_return r WHERE r.item_id = i.id)";
					String^ subQunt1 = L"(SELECT COALESCE(SUM(s.in_qun), 0) FROM Storage s WHERE s.item_id = i.id)";
					String^ subQunt2 = L"(SELECT COALESCE(SUM(r.quantity), 0) FROM Item_return r WHERE r.item_id = i.id)";
					String^ subtype = L"(SELECT s.enkilo FROM Storage s WHERE s.item_id = i.id)";

					selectQuery = L"Select i.*," + subKilo1 + "+" + subKilo2 + "+ i.kilo AS total_kilo," + subQunt1 + "+" + subQunt2 + "+ i.quantity AS total_qunt," + subtype + " as ogtype from Items i where i.id=" + ID + " and (i.quantity >0 or i.kilo >0);";
					command = gcnew SqlCommand(selectQuery, connection);
					reader = command->ExecuteReader();
					while (reader->Read()) {
						ID = Convert::ToString(reader->GetInt32(0));
						if (reader->GetBoolean(reader->GetOrdinal("ogtype"))) {
							og = 1;
							k = 1;
							q = 0;
							this->button2->Enabled = 1;
							this->kilo_price->Minimum = reader->GetDecimal(reader->GetOrdinal("kilo_min_price"));
							this->kilo_price->Value = reader->GetDecimal(reader->GetOrdinal("kilo_price"));
							this->kilo->Value = reader->GetDecimal(reader->GetOrdinal("total_kilo"));
							if (reader->GetBoolean(reader->GetOrdinal("enQunt"))) {
								q = 1;
								this->button3->Enabled = 1;
								this->qunt->Value = this->kilo->Value / reader->GetDecimal(reader->GetOrdinal("piece_weight"));
								this->qun_price->Minimum = this->kilo_price->Minimum * reader->GetDecimal(reader->GetOrdinal("piece_weight"));
								this->qun_price->Value = this->kilo_price->Value * reader->GetDecimal(reader->GetOrdinal("piece_weight"));
							}
							this->button2->PerformClick();
						}
						else {
							og = 0;
							k = 0;
							q = 1;
							this->button3->Enabled = 1;
							this->qunt->Value = reader->GetDecimal(reader->GetOrdinal("total_qunt"));
							this->qun_price->Minimum = reader->GetDecimal(reader->GetOrdinal("qun_min_price"));
							this->qun_price->Value = reader->GetDecimal(reader->GetOrdinal("qun_price"));
							if (reader->GetBoolean(reader->GetOrdinal("enKilo"))) {
								k = 1;
								this->button2->Enabled = 1;
								this->kilo_price->Minimum = this->qun_price->Minimum / reader->GetDecimal(reader->GetOrdinal("piece_weight"));;
								this->kilo_price->Value = this->qun_price->Value / reader->GetDecimal(reader->GetOrdinal("piece_weight"));;
								this->kilo->Value = this->qunt->Value * reader->GetDecimal(reader->GetOrdinal("piece_weight"));;
							}
							this->button3->PerformClick();
						}
					}
					reader->Close();
				}
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
		}

		public:
		delegate void ItemAddedToCartEventHandler(System::String^ name, System::String^ category, double thick, int id, double price, double quantity, bool type, double sellprice);
		event ItemAddedToCartEventHandler^ ItemAddedToCart;

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (clicked1 || clicked2) {
				System::String^ name = this->name;
				System::String^ category = catg;
				double thick;
				if (comboBox1->SelectedItem != nullptr) {
					thick = Convert::ToDouble(this->comboBox1->SelectedItem->ToString());
				}
				else {
					thick = 0;
				}
				int id = Convert::ToInt32(ID);
				bool type;
				double price = System::Convert::ToDouble(this->label7->Text);
				double Sell = 0;
				double quantity;
				if (clicked2) {
					Sell = Convert::ToDouble(this->qun_price->Value);
					quantity = System::Convert::ToDouble(this->qunt->Value);
					type = 0;
				}
				if (clicked1) {
					Sell = Convert::ToDouble(this->kilo_price->Value);
					quantity = System::Convert::ToDouble(this->kilo->Value);
					type = 1;
				}
				if (price != 0) {
					ItemAddedToCart(name, category, thick, id, price, quantity, type, Sell);
				}
				// Trigger the event to notify the Dashboard form about the item being added to the cart
			}
		}
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ thick = this->comboBox1->SelectedItem->ToString();
				connection->Open();
				String^ subKilo1 = L"(SELECT COALESCE(SUM(s.in_kilo), 0) FROM Storage s WHERE s.item_id = i.id)";
				String^ subKilo2 = L"(SELECT COALESCE(SUM(r.kilo), 0) FROM Item_return r WHERE r.item_id = i.id)";
				String^ subQunt1 = L"(SELECT COALESCE(SUM(s.in_qun), 0) FROM Storage s WHERE s.item_id = i.id)";
				String^ subQunt2 = L"(SELECT COALESCE(SUM(r.quantity), 0) FROM Item_return r WHERE r.item_id = i.id)";
				String^ subtype = L"(SELECT s.enkilo FROM Storage s WHERE s.item_id = i.id)";

				String^ selectQuery = L"SELECT i.*," + subKilo1 + "+" + subKilo2 + "+ i.kilo AS total_kilo," + subQunt1 + "+" + subQunt2 + "+ i.quantity AS total_qunt," + subtype + " as ogtype from Items i where i.name=N'" + name + "' and i.thickness=" + thick + "and (i.quantity >0 or i.kilo >0);";
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read()) {
					ID = Convert::ToString(reader->GetInt32(0));

					if (reader->GetBoolean(reader->GetOrdinal("ogtype"))) {
						og = 1;
						k = 1;
						q = 0;
						this->button2->Enabled = 1;
						this->button3->Enabled = 0;
						this->kilo_price->Minimum = reader->GetDecimal(reader->GetOrdinal("kilo_min_price"));
						this->kilo_price->Value = reader->GetDecimal(reader->GetOrdinal("kilo_price"));
						this->kilo->Value = reader->GetDecimal(reader->GetOrdinal("total_kilo"));
						if (reader->GetBoolean(reader->GetOrdinal("enQunt"))) {
							q = 1;
							this->button3->Enabled = 1;
							this->qunt->Value = this->kilo->Value / reader->GetDecimal(reader->GetOrdinal("piece_weight"));
							this->qun_price->Minimum = this->kilo_price->Minimum * reader->GetDecimal(reader->GetOrdinal("piece_weight"));
							this->qun_price->Value = this->kilo_price->Value * reader->GetDecimal(reader->GetOrdinal("piece_weight"));
						}
						this->button2->PerformClick();
					}
					else {
						og = 0;
						k = 0;
						q = 1;
						this->button3->Enabled = 1;
						this->button2->Enabled = 0;
						this->qunt->Value = reader->GetDecimal(reader->GetOrdinal("total_qunt"));
						this->qun_price->Minimum = reader->GetDecimal(reader->GetOrdinal("qun_min_price"));
						this->qun_price->Value = reader->GetDecimal(reader->GetOrdinal("qun_price"));
						if (reader->GetBoolean(reader->GetOrdinal("enKilo"))) {
							k = 1;
							this->button2->Enabled = 1;
							this->kilo_price->Minimum = this->qun_price->Minimum / reader->GetDecimal(reader->GetOrdinal("piece_weight"));;
							this->kilo_price->Value = this->qun_price->Value / reader->GetDecimal(reader->GetOrdinal("piece_weight"));;
							this->kilo->Value = this->qunt->Value * reader->GetDecimal(reader->GetOrdinal("piece_weight"));;
						}
						this->button3->PerformClick();
					}

				}
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
		}
	};
}
