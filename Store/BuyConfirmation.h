#pragma once
#include "cartitem.h"
#include "Functions.h"
#include <algorithm>
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
	/// Summary for BuyConfirmation
	/// </summary>
	public ref class BuyConfirmation: public System::Windows::Forms::Form {

		public:
		BuyConfirmation(List<ListItem^>^ ReceivedItems, int id, double tot) {
			total = tot;
			emp_id = id;
			receivedItems = ReceivedItems;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~BuyConfirmation() {
			if (components) {
				delete components;
			}
		}
		private: double total;
		private: int emp_id;
		private: List<ListItem^>^ receivedItems;
		private: System::Windows::Forms::Panel^ head;
		protected:
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Panel^ panel1;




		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::NumericUpDown^ discount;

		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::NumericUpDown^ paid;

		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::TextBox^ cust_num;

		private: System::Windows::Forms::CheckBox^ checkBox1;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::Label^ cust_rem;

		private: System::Windows::Forms::Label^ cust_name;

		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Panel^ panel2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BuyConfirmation::typeid));
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cust_rem = (gcnew System::Windows::Forms::Label());
			this->cust_name = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->cust_num = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->discount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->paid = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->head->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->discount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paid))->BeginInit();
			this->panel2->SuspendLayout();
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
			this->head->Size = System::Drawing::Size(437, 40);
			this->head->TabIndex = 1;
			this->head->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BuyConfirmation::panel1_MouseDown);
			this->head->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &BuyConfirmation::panel1_MouseMove);
			this->head->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BuyConfirmation::panel1_MouseUp);
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
			this->label1->Size = System::Drawing::Size(182, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"تاكيد عمليه البيع";
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
			this->button1->Location = System::Drawing::Point(395, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 40);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BuyConfirmation::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->discount);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->paid);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(437, 466);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BuyConfirmation::panel1_Paint);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(182, 16);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(243, 28);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"اضافه فاتوره الي حساب العميل";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &BuyConfirmation::checkBox1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cust_rem);
			this->groupBox1->Controls->Add(this->cust_name);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->cust_num);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Enabled = false;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(14, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(411, 219);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"بيانات العميل";
			// 
			// cust_rem
			// 
			this->cust_rem->AutoSize = true;
			this->cust_rem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->cust_rem->Location = System::Drawing::Point(21, 174);
			this->cust_rem->Margin = System::Windows::Forms::Padding(10);
			this->cust_rem->Name = L"cust_rem";
			this->cust_rem->Size = System::Drawing::Size(49, 24);
			this->cust_rem->TabIndex = 11;
			this->cust_rem->Text = L"0.00";
			// 
			// cust_name
			// 
			this->cust_name->AutoSize = true;
			this->cust_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->cust_name->Location = System::Drawing::Point(21, 130);
			this->cust_name->Margin = System::Windows::Forms::Padding(10);
			this->cust_name->Name = L"cust_name";
			this->cust_name->Size = System::Drawing::Size(52, 24);
			this->cust_name->TabIndex = 10;
			this->cust_name->Text = L"------";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(285, 174);
			this->label8->Margin = System::Windows::Forms::Padding(10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"المبلغ المستحق";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(316, 130);
			this->label7->Margin = System::Windows::Forms::Padding(10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"اسم العميل";
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(13, 77);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(385, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"فحص الرقم";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &BuyConfirmation::button4_Click);
			// 
			// cust_num
			// 
			this->cust_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->cust_num->Location = System::Drawing::Point(13, 35);
			this->cust_num->Margin = System::Windows::Forms::Padding(10);
			this->cust_num->Name = L"cust_num";
			this->cust_num->Size = System::Drawing::Size(266, 29);
			this->cust_num->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(316, 38);
			this->label4->Margin = System::Windows::Forms::Padding(10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"رقم العميل";
			// 
			// discount
			// 
			this->discount->DecimalPlaces = 2;
			this->discount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->discount->Location = System::Drawing::Point(19, 324);
			this->discount->Margin = System::Windows::Forms::Padding(10);
			this->discount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->discount->Name = L"discount";
			this->discount->Size = System::Drawing::Size(254, 29);
			this->discount->TabIndex = 10;
			this->discount->ValueChanged += gcnew System::EventHandler(this, &BuyConfirmation::discount_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(326, 326);
			this->label6->Margin = System::Windows::Forms::Padding(10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"اضافه خصم";
			// 
			// paid
			// 
			this->paid->DecimalPlaces = 2;
			this->paid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->paid->Location = System::Drawing::Point(19, 280);
			this->paid->Margin = System::Windows::Forms::Padding(10);
			this->paid->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->paid->Name = L"paid";
			this->paid->Size = System::Drawing::Size(254, 29);
			this->paid->TabIndex = 8;
			this->paid->ValueChanged += gcnew System::EventHandler(this, &BuyConfirmation::paid_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(312, 282);
			this->label5->Margin = System::Windows::Forms::Padding(10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"المبلغ المدفوع";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(19, 370);
			this->label3->Margin = System::Windows::Forms::Padding(10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"0.00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(287, 370);
			this->label2->Margin = System::Windows::Forms::Padding(10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"اجمالي الفاتوره";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(224, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 50);
			this->button2->TabIndex = 0;
			this->button2->Text = L"تاكيد";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BuyConfirmation::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
																		static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(3, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 50);
			this->button3->TabIndex = 1;
			this->button3->Text = L"إلغاء";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BuyConfirmation::button3_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 451);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(437, 55);
			this->panel2->TabIndex = 0;
			// 
			// BuyConfirmation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 506);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->head);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BuyConfirmation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BuyConfirmation";
			this->Load += gcnew System::EventHandler(this, &BuyConfirmation::BuyConfirmation_Load);
			this->head->ResumeLayout(false);
			this->head->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->discount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->paid))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		public: delegate void clearthecart();
		public: event clearthecart^ clearthecartitems;
		public: delegate void CatgButton1ClickEventHandler();
		public: event CatgButton1ClickEventHandler^ CatgButton1ClickEvent;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}
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
		public: String^ connectionString = "";
		private: System::Void BuyConfirmation_Load(System::Object^ sender, System::EventArgs^ e) {
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
			this->label3->Text = FormatNumberWithCommas(total);
			this->paid->Value = Convert::ToDecimal(total);
		}

		public: int cust_id = 1002;
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (receivedItems->Count == 0) {
				MessageBox::Show(L"لا يوجد عناصر للبيع", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (Convert::ToDouble(this->paid->Value) < (total - Convert::ToDouble(this->discount->Value)) && !this->checkBox1->Checked) {
				MessageBox::Show(L"المبلغ المدفوع اقل من المبلغ المطلوب\n او قم بالاضافه الي حساب العميل", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				// Construct the SQL query to insert the invoice details
				String^ invoiceQuery = "INSERT INTO invoice (cust_id, emp_id, paid, discount) "
					"VALUES (@cust_id, @emp_id, @paid, @discount);"
					"SELECT SCOPE_IDENTITY()"; // Retrieve the last inserted invoice ID
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(invoiceQuery, connection);
				// Set the parameter values for the invoice query
				command->CommandText = invoiceQuery;
				command->Parameters->AddWithValue("@cust_id", cust_id);
				command->Parameters->AddWithValue("@emp_id", emp_id);
				command->Parameters->AddWithValue("@paid", this->paid->Value);
				command->Parameters->AddWithValue("@discount", this->discount->Value);

				// Execute the invoice query and retrieve the last inserted invoice ID
				int invoiceId;
				if (MessageBox::Show(L"هل تريد تاكيد عمليه البيع!", L"تاكيد", MessageBoxButtons::OKCancel, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::OK) {
					invoiceId = Convert::ToInt32(command->ExecuteScalar());
				}
				else {
					return;
				}
				
				//label1->Text = Convert::ToString(invoiceId);
				purchaseitem(invoiceId, cust_id);

				connection->Close();
			}


			catch (Exception^ exx) {
				// Handle any exceptions that occur during the database operation
				MessageBox::Show("Error: " + exx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

				// Display an error message or perform error handling as needed
			}

		}
		private: bool change = 0;
		public: void purchaseitem(int invoice, int cust_id) {

			try {
				for each (ListItem ^ item in receivedItems) {

					SqlConnection^ connection_R = gcnew SqlConnection(connectionString);

					try {
						String^ query = "SELECT TOP 1 s.*, i.piece_weight FROM Storage s JOIN Items i ON s.item_id = i.id WHERE s.item_id =" + item->ID + ";";
						connection_R->Open();
						SqlCommand^ command_R = gcnew SqlCommand(query, connection_R);
						SqlDataReader^ reader_R = command_R->ExecuteReader();
						while (reader_R->Read()) {
							change = 0;
							if (reader_R->GetBoolean(reader_R->GetOrdinal("enkilo")) && !item->Type) {
								item->Quantity *= Convert::ToDouble(reader_R->GetDecimal(reader_R->GetOrdinal("piece_weight")));
								item->Type = 1;
								change = 1;
							}
							else if (reader_R->GetBoolean(reader_R->GetOrdinal("enqunt")) && item->Type) {
								item->Quantity /= Convert::ToDouble(reader_R->GetDecimal(reader_R->GetOrdinal("piece_weight")));
								item->Type = 0;
								change = 1;
							}

							item->Quantity = from_Returned_Item(item, invoice, Convert::ToDouble(reader_R->GetDecimal(reader_R->GetOrdinal("piece_weight"))));
				
							if (item->Quantity) {
								item->Quantity = from_Items(item, invoice, Convert::ToDouble(reader_R->GetDecimal(reader_R->GetOrdinal("piece_weight"))));
							}

							if (item->Quantity) {
								item->Quantity = from_Storage(item, invoice, Convert::ToDouble(reader_R->GetDecimal(reader_R->GetOrdinal("piece_weight"))));
								from_storage_to_items(item);
							}





						}
					}
					catch (SqlException^ ex) {
			  // Handle any SQL errors
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}



				}

				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				String^ query = "update Invoice set remaining = remaining where id = " + invoice + "; ";
				query += "update Customer set remaining = remaining where id = " + cust_id + "; ";
				SqlCommand^ command0 = gcnew SqlCommand(query, connection);

				connection->Open();
				command0->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show(L"تم البيع", L"عمليه ناجحه", MessageBoxButtons::OK,MessageBoxIcon::Information);

				clearthecartitems();
				CatgButton1ClickEvent();

			}
			catch (SqlException^ ex) {
			   // Handle any SQL errors
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}

		private: double from_Returned_Item(ListItem^ item, int invoice, double weight) {

			bool otype = item->Type;

			double quantity = item->Quantity;;

			String^ query_ret = "Select * from Item_return where item_id=" + item->ID + " and (kilo+quantity)>0 ;";
			SqlConnection^ connect_ret = gcnew SqlConnection(connectionString);
			try {

				connect_ret->Open();
				SqlCommand^ comm_ret = gcnew SqlCommand(query_ret, connect_ret);
				SqlDataReader^ read_ret = comm_ret->ExecuteReader();

				while (read_ret->Read()) {

					String^ purchaseQuery = "INSERT INTO purchase (item_id, invoice_id, enkilo, kilo, kilo_price, kilo_in_price,enQunt, quantity, qun_in_price, qun_price) VALUES (@item_id, @invoice_id, @enkilo, @kilo, @kilo_price, @kilo_in_price, @enQunt, @quantity, @qun_in_price, @qun_price)";
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					try {
						SqlCommand^ command = gcnew SqlCommand(purchaseQuery, connection);
						command->Parameters->AddWithValue("@item_id", item->ID);
						command->Parameters->AddWithValue("@invoice_id", invoice);

						//check the type of the item
						double qunts;
						if (item->Type) {
							otype = 1;

							command->Parameters->AddWithValue("@enkilo", 1);
							command->Parameters->AddWithValue("@enQunt", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@qun_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@quantity", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@qun_in_price", safe_cast<System::Object^>(0));

							if (change) {
								command->Parameters->AddWithValue("@kilo_price", item->Sellprice / weight);
							}
							else {
								command->Parameters->AddWithValue("@kilo_price", item->Sellprice);
							}

							qunts = min(Convert::ToDouble(read_ret->GetDecimal(read_ret->GetOrdinal("kilo"))), quantity);
							quantity -= qunts;
							if (qunts) {
								command->Parameters->AddWithValue("@kilo", qunts);
								command->Parameters->AddWithValue("@kilo_in_price", read_ret->GetDecimal(read_ret->GetOrdinal("in_price")));
							}
							else {
								return item->Quantity;
							}

						}
						else {
							otype = 0;

							command->Parameters->AddWithValue("@enQunt", 1);
							command->Parameters->AddWithValue("@enkilo", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo_in_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo", safe_cast<System::Object^>(0));
							//// check and return the type of the origin item qunatity
							if (change) {
								command->Parameters->AddWithValue("@qun_price", item->Sellprice * weight);
							}
							else {
								command->Parameters->AddWithValue("@qun_price", item->Sellprice);
							}

							qunts = min(Convert::ToDouble(read_ret->GetDecimal(read_ret->GetOrdinal("quantity"))), quantity);
							quantity -= qunts;
							if (qunts) {
								command->Parameters->AddWithValue("@quantity", qunts);
								command->Parameters->AddWithValue("@qun_in_price", read_ret->GetDecimal(read_ret->GetOrdinal("in_price")));
							}
							else {
								return item->Quantity;
							}

						}

						connection->Open();
						command->ExecuteNonQuery();
						connection->Close();

						//update the item_return
						String^ query = "update Item_return set kilo = kilo - @kilo, quantity=quantity - @quantity where id=@id;";
						SqlCommand^ command0 = gcnew SqlCommand(query, connection);
						command0->Parameters->AddWithValue("@kilo", otype ? qunts : safe_cast<System::Object^>(0));
						command0->Parameters->AddWithValue("@quantity", !otype ? qunts : safe_cast<System::Object^>(0));
						command0->Parameters->AddWithValue("@id", read_ret->GetInt32(0));

						connection->Open();
						command0->ExecuteNonQuery();
						connection->Close();
						item->Quantity = quantity;


					}
					catch (SqlException^ ex) {
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				connect_ret->Close();
				return quantity;

			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return item->Quantity;
			}

		}

		private: double from_Storage(ListItem^ item, int invoice, double weight) {

			bool otype = item->Type;

			double quantity = item->Quantity;;

			String^ query_ret = "Select * from Storage where item_id=" + item->ID + " and (in_kilo+in_qun)>0 ;";
			SqlConnection^ connect_ret = gcnew SqlConnection(connectionString);
			try {

				connect_ret->Open();
				SqlCommand^ comm_ret = gcnew SqlCommand(query_ret, connect_ret);
				SqlDataReader^ read_ret = comm_ret->ExecuteReader();

				while (read_ret->Read()) {

					String^ purchaseQuery = "INSERT INTO purchase (item_id, invoice_id, enkilo, kilo, kilo_price, kilo_in_price,enQunt, quantity, qun_in_price, qun_price) VALUES (@item_id, @invoice_id, @enkilo, @kilo, @kilo_price, @kilo_in_price, @enQunt, @quantity, @qun_in_price, @qun_price)";
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					try {
						SqlCommand^ command = gcnew SqlCommand(purchaseQuery, connection);
						command->Parameters->AddWithValue("@item_id", item->ID);
						command->Parameters->AddWithValue("@invoice_id", invoice);

						//check the type of the item
						double qunts;
						if (item->Type) {
							otype = 1;

							command->Parameters->AddWithValue("@enkilo", 1);
							command->Parameters->AddWithValue("@enQunt", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@qun_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@quantity", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@qun_in_price", safe_cast<System::Object^>(0));

							if (change) {
								command->Parameters->AddWithValue("@kilo_price", (item->Sellprice / weight));
							}
							else {
								command->Parameters->AddWithValue("@kilo_price", item->Sellprice);
							}

							qunts = min(Convert::ToDouble(read_ret->GetDecimal(read_ret->GetOrdinal("in_kilo"))), quantity);
							quantity -= qunts;
							if (qunts) {
								command->Parameters->AddWithValue("@kilo", qunts);
								command->Parameters->AddWithValue("@kilo_in_price", read_ret->GetDecimal(read_ret->GetOrdinal("kilo_in_price")));
							}
							else {
								return item->Quantity;
							}

						}
						else {
							otype = 0;

							command->Parameters->AddWithValue("@enQunt", 1);
							command->Parameters->AddWithValue("@enkilo", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo_in_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo", safe_cast<System::Object^>(0));
							//// check and return the type of the origin item qunatity
							if (change) {
								command->Parameters->AddWithValue("@qun_price", item->Sellprice * weight);
							}
							else {
								command->Parameters->AddWithValue("@qun_price", item->Sellprice);
							}

							qunts = min(Convert::ToDouble(read_ret->GetDecimal(read_ret->GetOrdinal("in_qun"))), quantity);
							quantity -= qunts;
							if (qunts) {
								command->Parameters->AddWithValue("@quantity", qunts);
								command->Parameters->AddWithValue("@qun_in_price", read_ret->GetDecimal(read_ret->GetOrdinal("qun_in_price")));
							}
							else {
								return item->Quantity;
							}

						}

						connection->Open();
						command->ExecuteNonQuery();
						connection->Close();

						//update the item_return
						String^ query = "update Storage set in_kilo = in_kilo - @in_kilo, in_qun=in_qun - @in_qun where id=@id;";
						SqlCommand^ command0 = gcnew SqlCommand(query, connection);
						command0->Parameters->AddWithValue("@in_kilo", otype ? qunts : safe_cast<System::Object^>(0));
						command0->Parameters->AddWithValue("@in_qun", !otype ? qunts : safe_cast<System::Object^>(0));
						command0->Parameters->AddWithValue("@id", read_ret->GetInt32(0));

						connection->Open();
						command0->ExecuteNonQuery();
						connection->Close();
						item->Quantity = quantity;


					}
					catch (SqlException^ ex) {
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				connect_ret->Close();
				MessageBox::Show("Storage 2" + Convert::ToString(quantity));
				return quantity;

			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return item->Quantity;
			}

		}

		private: double from_Items(ListItem^ item, int invoice, double weight) {

			bool otype = item->Type;

			double quantity = item->Quantity;;

			String^ query_ret = "Select * from Items where id=" + item->ID + " ;";
			SqlConnection^ connect_ret = gcnew SqlConnection(connectionString);
			try {

				connect_ret->Open();
				SqlCommand^ comm_ret = gcnew SqlCommand(query_ret, connect_ret);
				SqlDataReader^ read_ret = comm_ret->ExecuteReader();

				while (read_ret->Read()) {

					String^ purchaseQuery = "INSERT INTO purchase (item_id, invoice_id, enkilo, kilo, kilo_price, kilo_in_price,enQunt, quantity, qun_in_price, qun_price) VALUES (@item_id, @invoice_id, @enkilo, @kilo, @kilo_price, @kilo_in_price, @enQunt, @quantity, @qun_in_price, @qun_price)";
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					try {
						SqlCommand^ command = gcnew SqlCommand(purchaseQuery, connection);
						command->Parameters->AddWithValue("@item_id", item->ID);
						command->Parameters->AddWithValue("@invoice_id", invoice);

						//check the type of the item
						double qunts;
						if (item->Type) {
							otype = 1;

							command->Parameters->AddWithValue("@enkilo", 1);
							command->Parameters->AddWithValue("@enQunt", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@qun_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@quantity", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@qun_in_price", safe_cast<System::Object^>(0));

							if (change) {
								command->Parameters->AddWithValue("@kilo_price", (item->Sellprice / weight));
							}
							else {
								command->Parameters->AddWithValue("@kilo_price", item->Sellprice);
							}

							qunts = min(Convert::ToDouble(read_ret->GetDecimal(read_ret->GetOrdinal("kilo"))), quantity);
							quantity -= qunts;
							if (qunts) {
								command->Parameters->AddWithValue("@kilo", qunts);
								command->Parameters->AddWithValue("@kilo_in_price", read_ret->GetDecimal(read_ret->GetOrdinal("kilo_in_price")));
							}
							else {
								return item->Quantity;
							}

						}
						else {
							otype = 0;

							command->Parameters->AddWithValue("@enQunt", 1);
							command->Parameters->AddWithValue("@enkilo", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo_in_price", safe_cast<System::Object^>(0));
							command->Parameters->AddWithValue("@kilo", safe_cast<System::Object^>(0));
							//// check and return the type of the origin item qunatity
							if (change) {
								command->Parameters->AddWithValue("@qun_price", item->Sellprice * weight);
							}
							else {
								command->Parameters->AddWithValue("@qun_price", item->Sellprice);
							}

							qunts = min(Convert::ToDouble(read_ret->GetDecimal(read_ret->GetOrdinal("quantity"))), quantity);
							quantity -= qunts;
							if (qunts) {
								command->Parameters->AddWithValue("@quantity", qunts);
								command->Parameters->AddWithValue("@qun_in_price", read_ret->GetDecimal(read_ret->GetOrdinal("qun_in_price")));
							}
							else {
								return item->Quantity;
							}

						}

						connection->Open();
						command->ExecuteNonQuery();
						connection->Close();

						//update the item_return
						String^ query = "update Items set kilo = kilo - @kilo, quantity=quantity - @quantity where id=@id;";
						SqlCommand^ command0 = gcnew SqlCommand(query, connection);
						command0->Parameters->AddWithValue("@kilo", otype ? qunts : safe_cast<System::Object^>(0));
						command0->Parameters->AddWithValue("@quantity", !otype ? qunts : safe_cast<System::Object^>(0));
						command0->Parameters->AddWithValue("@id", read_ret->GetInt32(0));

						connection->Open();
						command0->ExecuteNonQuery();
						connection->Close();
						item->Quantity = quantity;


					}
					catch (SqlException^ ex) {
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				connect_ret->Close();
				return quantity;

			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return item->Quantity;
			}

		}
		private: void from_storage_to_items(ListItem^ item) {
			SqlConnection^ connection_R = gcnew SqlConnection(connectionString);
			try {
				connection_R->Open();

				String^ getQuery = "Select TOP 1 * from Storage Where item_id=" + item->ID + " and (in_kilo+in_qun)>0 ;";
				SqlCommand^ command = gcnew SqlCommand(getQuery, connection_R);
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read()) {

					String^ query = "update Items set kilo =kilo + @kilo ,kilo_in_price=@kilo_price, quantity =quantity + @quantity,qun_in_price=@qun_price where id=@id;";
					query += "Update Storage set in_kilo=0,in_qun=0 where id=" + reader->GetInt32(0) + ";";
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					SqlCommand^ command0 = gcnew SqlCommand(query, connection);
					command0->Parameters->AddWithValue("@kilo", reader->GetDecimal(3));
					command0->Parameters->AddWithValue("@kilo_price", reader->GetDecimal(4));
					command0->Parameters->AddWithValue("@quantity", reader->GetDecimal(6));
					command0->Parameters->AddWithValue("@qun_price", reader->GetDecimal(7));
					command0->Parameters->AddWithValue("@id", item->ID);

					connection->Open();
					command0->ExecuteNonQuery();
					connection->Close();

				}

				connection_R->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->checkBox1->Checked) {
				this->groupBox1->Enabled = 1;
				this->button2->Enabled = 0;
			}
			else {
				this->groupBox1->Enabled = 0;
				this->button2->Enabled = 1;
			}
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ query = "Select * from Customer Where phone_number='" + this->cust_num->Text + "' or phone_number_2='" + this->cust_num->Text + "';";
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->HasRows) {
					while (reader->Read()) {
						this->cust_name->Text = reader->GetString(1);
						this->cust_rem->Text = FormatNumberWithCommas(Convert::ToDouble(reader->GetDecimal(4)));
						cust_id = reader->GetInt32(0);
					}
					connection->Close();
					this->button2->Enabled = 1;
				}
				else {
					this->button2->Enabled = 0;
					cust_id = 1002;
					MessageBox::Show(L"رقم العميل غير صحيح او غير مسجل", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: System::Void discount_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			this->label3->Text = FormatNumberWithCommas(total - Convert::ToDouble(this->discount->Value));
		}
		private: System::Void paid_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		}
};
}
