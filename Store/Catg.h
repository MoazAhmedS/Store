#pragma once
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
	/// Summary for Catg
	/// </summary>

	public ref class Catg: public System::Windows::Forms::Form {
	public:
		Catg(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Catg() {
			if (components) {
				delete components;
			}
		}
	
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Catg::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(98, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"اضافه قسم";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Catg::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 35);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(241, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L": اسم القسم";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(356, 45);
			this->panel1->TabIndex = 3;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Catg::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Catg::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Catg::panel1_MouseUp);
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
			this->button2->Location = System::Drawing::Point(314, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Catg::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 12);
			this->label2->Margin = System::Windows::Forms::Padding(0, 3, 0, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"اضافه اقسام";
			// 
			// Catg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 259);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Catg";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Catg";
			this->Load += gcnew System::EventHandler(this, &Catg::Catg_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: delegate void CatgButton1ClickEventHandler();
	public: event CatgButton1ClickEventHandler^ CatgButton1ClickEvent;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(this->textBox1->Text)) {
			try {
				String^ connectionString = "Server=DESKTOP-4KT2SAO\\SQLEXPRESS;Database=store;User Id=sa;Password=123;";
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();
				String^ selectQuery = L"SELECT Name FROM Category WHERE Name = @Name";
				SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, connection);
				selectCommand->Parameters->AddWithValue("@Name", this->textBox1->Text);
				SqlDataReader^ reader = selectCommand->ExecuteReader();
				if (reader->Read()) {
					// Value already exists
					MessageBox::Show(L"القسم موجود بالفعل", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					reader->Close();
					// Create INSERT statement
					String^ insertQuery = L"INSERT INTO Category (Name) VALUES (@Name)";


					// Prepare SQL command
					SqlCommand^ command = gcnew SqlCommand(insertQuery, connection);
					command->Parameters->AddWithValue("@Name", this->textBox1->Text);
					// Execute SQL command
					command->ExecuteNonQuery();

					// Close the connection
					connection->Close();

					MessageBox::Show(L" تم اضافه القسم" + " " + this->textBox1->Text, "Success", MessageBoxButtons::OK, MessageBoxIcon::None);
					//Dashboard^ dash = gcnew Dashboard();
					CatgButton1ClickEvent();
				}
				
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else {
			MessageBox::Show(L"لا يمكن اضافه هذا الاسم", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void Catg_Load(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
		int borderRadius = 20; // Adjust the radius value as per your preference

		// Create a rounded rectangle shape using the border radius value
		path->AddArc(0, 0, borderRadius, borderRadius, 180, 90);
		path->AddArc(this->Width - borderRadius, 0, borderRadius, borderRadius, 270, 90);
		path->AddArc(this->Width - borderRadius, this->Height - borderRadius, borderRadius, borderRadius, 0, 90);
		path->AddArc(0, this->Height - borderRadius, borderRadius, borderRadius, 90, 90);
		path->CloseAllFigures();

		this->Region = gcnew System::Drawing::Region(path);
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

		this->Close();
	}
	};
}
