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
	/// Summary for CreateUser
	/// </summary>
	public ref class CreateUser: public System::Windows::Forms::Form {
		public:
		CreateUser(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~CreateUser() {
			if (components) {
				delete components;
			}
		}
		private: System::Windows::Forms::Panel^ panel1;
		protected:
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::RadioButton^ radioButton2;
		private: System::Windows::Forms::RadioButton^ radioButton1;
		private: System::Windows::Forms::GroupBox^ groupBox2;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::CheckBox^ mode;

		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::NumericUpDown^ user_salary;

		private: System::Windows::Forms::TextBox^ user_pass;

		private: System::Windows::Forms::TextBox^ user_phone;
		private: System::Windows::Forms::TextBox^ user_name;



		private: System::Windows::Forms::GroupBox^ groupBox3;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::NumericUpDown^ remaining;

		private: System::Windows::Forms::TextBox^ cust_phone2;

		private: System::Windows::Forms::TextBox^ cust_phone;

		private: System::Windows::Forms::TextBox^ cust_name;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateUser::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->mode = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->user_salary = (gcnew System::Windows::Forms::NumericUpDown());
			this->user_pass = (gcnew System::Windows::Forms::TextBox());
			this->user_phone = (gcnew System::Windows::Forms::TextBox());
			this->user_name = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->remaining = (gcnew System::Windows::Forms::NumericUpDown());
			this->cust_phone2 = (gcnew System::Windows::Forms::TextBox());
			this->cust_phone = (gcnew System::Windows::Forms::TextBox());
			this->cust_name = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_salary))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remaining))->BeginInit();
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
			this->panel1->Size = System::Drawing::Size(520, 45);
			this->panel1->TabIndex = 7;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateUser::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateUser::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &CreateUser::panel1_MouseUp);
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
			this->button2->Location = System::Drawing::Point(478, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateUser::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 12);
			this->label2->Margin = System::Windows::Forms::Padding(0, 3, 0, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"انشاء حساب";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(13, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(494, 70);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"نوع الحساب";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(300, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 28);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"موظف";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &CreateUser::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(113, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(64, 28);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"عميل";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &CreateUser::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->mode);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->user_salary);
			this->groupBox2->Controls->Add(this->user_pass);
			this->groupBox2->Controls->Add(this->user_phone);
			this->groupBox2->Controls->Add(this->user_name);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 128);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(494, 356);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"انشاء حساب موظف";
			this->groupBox2->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(453, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"انشاء حساب";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateUser::button1_Click);
			// 
			// mode
			// 
			this->mode->AutoSize = true;
			this->mode->Location = System::Drawing::Point(20, 239);
			this->mode->Name = L"mode";
			this->mode->Size = System::Drawing::Size(133, 28);
			this->mode->TabIndex = 8;
			this->mode->Text = L"صلاحيه الاداره";
			this->mode->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(352, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"الراتب / اليوميه";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(380, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"الرقم السري";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(381, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"رقم التليفون";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(429, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"الاسم";
			// 
			// user_salary
			// 
			this->user_salary->DecimalPlaces = 2;
			this->user_salary->Location = System::Drawing::Point(20, 186);
			this->user_salary->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->user_salary->Name = L"user_salary";
			this->user_salary->Size = System::Drawing::Size(308, 29);
			this->user_salary->TabIndex = 3;
			// 
			// user_pass
			// 
			this->user_pass->Location = System::Drawing::Point(20, 137);
			this->user_pass->Name = L"user_pass";
			this->user_pass->Size = System::Drawing::Size(308, 29);
			this->user_pass->TabIndex = 2;
			this->user_pass->UseSystemPasswordChar = true;
			// 
			// user_phone
			// 
			this->user_phone->Location = System::Drawing::Point(20, 88);
			this->user_phone->Name = L"user_phone";
			this->user_phone->Size = System::Drawing::Size(308, 29);
			this->user_phone->TabIndex = 1;
			// 
			// user_name
			// 
			this->user_name->Location = System::Drawing::Point(20, 39);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(308, 29);
			this->user_name->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->remaining);
			this->groupBox3->Controls->Add(this->cust_phone2);
			this->groupBox3->Controls->Add(this->cust_phone);
			this->groupBox3->Controls->Add(this->cust_name);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 128);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(494, 356);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"حساب عميل";
			this->groupBox3->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(453, 52);
			this->button3->TabIndex = 9;
			this->button3->Text = L"انشاء حساب";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateUser::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(370, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"المبلغ مستحق";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(337, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"رقم تليفون او رمز";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(381, 91);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"رقم التليفون";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(429, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 24);
			this->label9->TabIndex = 4;
			this->label9->Text = L"الاسم";
			// 
			// remaining
			// 
			this->remaining->DecimalPlaces = 2;
			this->remaining->Location = System::Drawing::Point(20, 186);
			this->remaining->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->remaining->Name = L"remaining";
			this->remaining->Size = System::Drawing::Size(308, 29);
			this->remaining->TabIndex = 3;
			// 
			// cust_phone2
			// 
			this->cust_phone2->Location = System::Drawing::Point(20, 137);
			this->cust_phone2->Name = L"cust_phone2";
			this->cust_phone2->Size = System::Drawing::Size(308, 29);
			this->cust_phone2->TabIndex = 2;
			// 
			// cust_phone
			// 
			this->cust_phone->Location = System::Drawing::Point(20, 88);
			this->cust_phone->Name = L"cust_phone";
			this->cust_phone->Size = System::Drawing::Size(308, 29);
			this->cust_phone->TabIndex = 1;
			// 
			// cust_name
			// 
			this->cust_name->Location = System::Drawing::Point(20, 39);
			this->cust_name->Name = L"cust_name";
			this->cust_name->Size = System::Drawing::Size(308, 29);
			this->cust_name->TabIndex = 0;
			// 
			// CreateUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 497);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateUser";
			this->Load += gcnew System::EventHandler(this, &CreateUser::CreateUser_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_salary))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->remaining))->EndInit();
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

		private: System::Void CreateUser_Load(System::Object^ sender, System::EventArgs^ e) {
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
		private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->radioButton1->Checked) {
				this->groupBox3->Visible = 1;
				this->groupBox2->Visible = 0;
			}
			else {
				this->groupBox3->Visible = 0;
				this->groupBox2->Visible = 1;
			}
		}
		private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->radioButton2->Checked) {
				this->groupBox3->Visible = 0;
				this->groupBox2->Visible = 1;
			}
			else {
				this->groupBox3->Visible = 1;
				this->groupBox2->Visible = 0;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(this->user_name->Text)) {
				MessageBox::Show(L"ادخل الاسم");
				return;
			}
			if (String::IsNullOrEmpty(this->user_phone->Text)) {
				MessageBox::Show(L"ادخل الرقم");
				return;
			}
			if (String::IsNullOrEmpty(this->user_pass->Text)) {
				MessageBox::Show(L"ادخل الرقم السري");
				return;
			}
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {

				String^ checkQuery = "Select * from Employee Where phone=" + this->user_phone->Text + ";";
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(checkQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->HasRows) {
					MessageBox::Show(L"رقم الموبايل موجود بالفعل");
					return;
				}
				reader->Close();

				String^ insertQuery = "INSERT INTO Employee (name, phone, password, salary, isMode) VALUES (@name, @phone, @password, @salary, @isMode)";

				command = gcnew SqlCommand(insertQuery, connection);
				command->Parameters->AddWithValue("@name", this->user_name->Text);
				command->Parameters->AddWithValue("@phone", this->user_phone->Text);
				command->Parameters->AddWithValue("@password", this->user_pass->Text);
				command->Parameters->AddWithValue("@salary", this->user_salary->Value);
				command->Parameters->AddWithValue("@isMode", this->mode->Checked);
				
				command->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show(L"تم انشاء الحساب" ,L"عمليه ناجحه",MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(this->cust_name->Text)) {
			MessageBox::Show(L"ادخل الاسم");
			return;
		}
		if (String::IsNullOrEmpty(this->cust_phone->Text)) {
			MessageBox::Show(L"ادخل رقم التليفون");
			return;
		}
		if (String::IsNullOrEmpty(this->cust_phone2->Text)) {
			MessageBox::Show(L"ادخل الرقم الثاني او الرمز");
			return;
		}
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		try {

			String^ checkQuery = "Select * from Customer Where (phone_number=" + this->cust_phone->Text + " or phone_number=" + this->cust_phone2->Text + " or phone_number_2=" + this->cust_phone->Text + " or phone_number_2=" + this->cust_phone2->Text + ") ;";
			connection->Open();
			SqlCommand^ command = gcnew SqlCommand(checkQuery, connection);
			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->HasRows) {
				MessageBox::Show(L"رقم الموبايل او الرمز موجود بالفعل");
				return;
			}
			reader->Close();

			String^ insertQuery = "INSERT INTO Customer (name, phone_number, phone_number_2, past_rem) VALUES (@name, @phone1, @phone2, @past_rem)";

			command = gcnew SqlCommand(insertQuery, connection);
			command->Parameters->AddWithValue("@name", this->cust_name->Text);
			command->Parameters->AddWithValue("@phone1", this->cust_phone->Text);
			command->Parameters->AddWithValue("@phone2", this->cust_phone2->Text);
			command->Parameters->AddWithValue("@past_rem", this->remaining->Value);
			
			command->ExecuteNonQuery();
			connection->Close();
			MessageBox::Show(L"تم انشاء الحساب", L"عمليه ناجحه", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (SqlException^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
};
}
