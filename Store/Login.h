#pragma once
#include "Dashboard.h"
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
	/// Summary for Login
	/// </summary>
	public ref class Login: public System::Windows::Forms::Form {
		public:
		Login(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~Login() {
			if (components) {
				delete components;
			}
		}
		private: System::Windows::Forms::TextBox^ user;
		private: System::Windows::Forms::TextBox^ pass;
		protected:

		protected:

		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Panel^ panel1;
		private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// user
			// 
			this->user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(9, 91);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(373, 31);
			this->user->TabIndex = 0;
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(9, 142);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(373, 31);
			this->pass->TabIndex = 1;
			this->pass->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(389, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"رقم التليفون";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(388, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"الرقم السري";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(180, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 52);
			this->button1->TabIndex = 4;
			this->button1->Text = L"تسجيل";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 33);
			this->label3->TabIndex = 5;
			this->label3->Text = L"تسجيل الدخول";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(493, 45);
			this->panel1->TabIndex = 6;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::panel1_MouseUp);
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
			this->button2->Location = System::Drawing::Point(451, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 290);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->user);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
		private: System::Void reOpen() {
			this->Show();
		}
		public: String^ connectionString = "";
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(this->user->Text)) {
				MessageBox::Show(L"ادخل رقم التليفون");
				return;
			}
			if (String::IsNullOrEmpty(this->pass->Text)) {
				MessageBox::Show(L"ادخل الرقم السري");
				return;
			}

			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				String^ selectQuery = "Select * from Employee Where phone='" + this->user->Text + "' and password ='" + this->pass->Text + "';";
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				String^ name = "";
				bool type = 0;
				int ID = 0;
				if (reader->HasRows) {
					while (reader->Read()) {
						ID = reader->GetInt32(0);
						name = reader->GetString(1);
						type = reader->GetBoolean(5);
					}
					Dashboard^ dash = gcnew Dashboard(ID,name,type);
					dash->reopen += gcnew Dashboard::ReOpenHandler(this, &Login::reOpen);
					dash->Show();

					connection->Close();
					this->Hide();
				}
				else {
					MessageBox::Show(L"رقم التليفون او الرقم السري غير صحيح");
				}

			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
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
	};
}
