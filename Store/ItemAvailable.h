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
	/// Summary for ItemAvailable
	/// </summary>
	public ref class ItemAvailable: public System::Windows::Forms::Form {
		public:
		ItemAvailable(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
		~ItemAvailable() {
			if (components) {
				delete components;
			}
		}
		private: System::Windows::Forms::Panel^ panel1;
		protected:
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::DataGridView^ dataGridView1;






		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label13;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ItemAvailable::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(1221, 45);
			this->panel1->TabIndex = 6;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ItemAvailable::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ItemAvailable::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ItemAvailable::panel1_MouseUp);
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
			this->button2->Location = System::Drawing::Point(1179, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 45);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ItemAvailable::button2_Click);
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
			this->label2->Text = L"جرد المخزن";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column7, this->Column8, this->Column9, this->Column5, this->Column6
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
																		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 45);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1221, 566);
			this->dataGridView1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"الاسم";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"الوزن المتاح";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 122;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"العدد المتاح";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 114;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"سعر البيع";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 102;
			// 
			// Column7
			// 
			this->Column7->Frozen = true;
			this->Column7->HeaderText = L"المبلغ المدفوع";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 131;
			// 
			// Column8
			// 
			this->Column8->Frozen = true;
			this->Column8->HeaderText = L"اعلي مبلغ للبيع";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 141;
			// 
			// Column9
			// 
			this->Column9->Frozen = true;
			this->Column9->HeaderText = L"اقل مبلغ للبيع";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 130;
			// 
			// Column5
			// 
			this->Column5->Frozen = true;
			this->Column5->HeaderText = L"اعلي ربح متوقع";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 146;
			// 
			// Column6
			// 
			this->Column6->Frozen = true;
			this->Column6->HeaderText = L"اقل ربح متوقع";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 135;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 611);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1221, 78);
			this->panel2->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::ForestGreen;
			this->label12->Location = System::Drawing::Point(1012, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 24);
			this->label12->TabIndex = 11;
			this->label12->Text = L"0.00";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1012, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(172, 24);
			this->label13->TabIndex = 10;
			this->label13->Text = L"اجمالي المبالغ المستحقه";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::ForestGreen;
			this->label10->Location = System::Drawing::Point(811, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 24);
			this->label10->TabIndex = 9;
			this->label10->Text = L"0.00";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(811, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(158, 24);
			this->label11->TabIndex = 8;
			this->label11->Text = L"اجمالي المبلغ المدفوع";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::ForestGreen;
			this->label8->Location = System::Drawing::Point(599, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L"0.00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(599, 8);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 24);
			this->label9->TabIndex = 6;
			this->label9->Text = L"اجمالي اعلي مبلغ للبيع";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::ForestGreen;
			this->label6->Location = System::Drawing::Point(400, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"0.00";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(400, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 24);
			this->label7->TabIndex = 4;
			this->label7->Text = L"اجمالي اقل مبلغ للبيع";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::ForestGreen;
			this->label5->Location = System::Drawing::Point(35, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 24);
			this->label5->TabIndex = 3;
			this->label5->Text = L"0.00";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::ForestGreen;
			this->label4->Location = System::Drawing::Point(210, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"0.00";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"اجمالي اقل الارباح";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(210, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"اجمالي اعلي الارباح";
			// 
			// ItemAvailable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 689);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ItemAvailable";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ItemAvailable";
			this->Load += gcnew System::EventHandler(this, &ItemAvailable::ItemAvailable_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
		private: System::Void ItemAvailable_Load(System::Object^ sender, System::EventArgs^ e) {
			System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			int borderRadius = 20; // Adjust the radius value as per your preference

			// Create a rounded rectangle shape using the border radius value
			path->AddArc(0, 0, borderRadius, borderRadius, 180, 90);
			path->AddArc(this->Width - borderRadius, 0, borderRadius, borderRadius, 270, 90);
			path->AddArc(this->Width - borderRadius, this->Height - borderRadius, borderRadius, borderRadius, 0, 90);
			path->AddArc(0, this->Height - borderRadius, borderRadius, borderRadius, 90, 90);
			path->CloseAllFigures();

			this->Region = gcnew System::Drawing::Region(path);
			get_data();
		}
		private: void get_data() {
			SqlConnection^ connection = gcnew SqlConnection(Load_Data());
			try {
				String^ subKilo1 = L"(SELECT COALESCE(SUM(s.in_kilo), 0) FROM Storage s WHERE s.item_id = i.id)";
				String^ subKilo2 = L"(SELECT COALESCE(SUM(r.kilo), 0) FROM Item_return r WHERE r.item_id = i.id)";
				String^ subQunt1 = L"(SELECT COALESCE(SUM(s.in_qun), 0) FROM Storage s WHERE s.item_id = i.id)";
				String^ subQunt2 = L"(SELECT COALESCE(SUM(r.quantity), 0) FROM Item_return r WHERE r.item_id = i.id)";

				String^ allKilos = subKilo1 + " + " + subKilo2 + " + i.kilo";
				String^ allQunt = subQunt1 + " + " + subQunt2 + " + i.quantity";

				String^ totalKiloPrf = "(((" + allKilos + ")* i.kilo_price)-((i.kilo)* i.kilo_in_price))";
				String^ totalQuntPrf = "(((" + allQunt + ")* i.qun_price)-((i.quantity)* i.qun_in_price))";

				String^ minKiloPrf = "(((" + allKilos + ")* i.kilo_min_price)-((i.kilo)* i.kilo_in_price))";
				String^ minQuntPrf = "(((" + allQunt + ")* i.qun_min_price)-((i.quantity)* i.qun_in_price))";

				String^ selectQuery = L"Select i.*," + allKilos + " AS total_kilo, " + allQunt + " AS total_qunt," + totalKiloPrf + " As maxKiloProfit ," + minKiloPrf + " as minKiloProfit, " + totalQuntPrf + " As maxQuntProfit ," + minQuntPrf + " As minQuntProfit, c.name AS category_name from Items i JOIN Category c ON i.category_id = c.id  where(" + allKilos + " > 0) or (" + allQunt + " > 0)";
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(selectQuery, connection);
				SqlDataReader^ reader = command->ExecuteReader();
				double totalmaxProfit = 0;
				double totalminProfit = 0;
				double totalmaxincome = 0;
				double totalminincome = 0;
				double totalpaid = 0;
				double totalremaining = 0;
				while (reader->Read()) {
					String^ name = reader->GetString(reader->GetOrdinal("category_name"));
					name += " " + reader->GetString(reader->GetOrdinal("name"));
					if (reader->GetBoolean(reader->GetOrdinal("enThick"))) {
						name += " " + Convert::ToString(reader->GetDecimal(reader->GetOrdinal("thickness")));
					}
					String^ total_kilo = Convert::ToString(reader->GetDecimal(reader->GetOrdinal("total_kilo")));
					String^ total_qunt = Convert::ToString(reader->GetDecimal(reader->GetOrdinal("total_qunt")));
					double price;
					double maxProfit;
					double minProfit;

					double paid;
					double maxincome;
					double minincome;

					if (reader->GetDecimal(reader->GetOrdinal("kilo_price")) != 0) {
						price = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo_price")));
						maxProfit = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("maxKiloProfit")));
						minProfit = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("minKiloProfit")));

						paid = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo"))) * Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));
						maxincome = Convert::ToDouble(total_kilo) * Convert::ToDouble(price);
						minincome = Convert::ToDouble(total_kilo) * Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo_min_price")));
					}
					else {
						price = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("qun_price")));
						maxProfit = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("maxQuntProfit")));
						minProfit = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("minQuntProfit")));

						paid = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("quantity"))) * Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("qun_in_price")));
						maxincome = Convert::ToDouble(total_qunt) * Convert::ToDouble(price);
						minincome = Convert::ToDouble(total_qunt) * Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("qun_min_price")));
					}


					SqlConnection^ connection2 = gcnew SqlConnection(Load_Data());
					try {
						String^ query = "Select * from Storage where item_id = " + reader->GetInt32(0) + "and (in_kilo >0 or in_qun>0) ;";
						connection2->Open();
						SqlCommand^ command2 = gcnew SqlCommand(query, connection2);
						SqlDataReader^ reader2 = command2->ExecuteReader();
						while (reader2->Read()) {
							if (reader2->GetBoolean(reader2->GetOrdinal("enkilo"))) {
								maxProfit -= Convert::ToDouble(reader2->GetDecimal(3)) * Convert::ToDouble(reader2->GetDecimal(4));
								minProfit -= Convert::ToDouble(reader2->GetDecimal(3)) * Convert::ToDouble(reader2->GetDecimal(4));

								paid += Convert::ToDouble(reader2->GetDecimal(3)) * Convert::ToDouble(reader2->GetDecimal(4));;
							}
							else {
								maxProfit -= Convert::ToDouble(reader2->GetDecimal(6)) * Convert::ToDouble(reader2->GetDecimal(7));
								minProfit -= Convert::ToDouble(reader2->GetDecimal(6)) * Convert::ToDouble(reader2->GetDecimal(7));

								paid += Convert::ToDouble(reader2->GetDecimal(6)) * Convert::ToDouble(reader2->GetDecimal(7));
							}
						}
						reader2->Close();

						query = "Select * from Item_return where item_id = " + reader->GetInt32(0) + " and (kilo >0 or quantity>0);";
						command2 = gcnew SqlCommand(query, connection2);
						reader2 = command2->ExecuteReader();
						while (reader2->Read()) {
							if (reader2->GetBoolean(reader2->GetOrdinal("enKilo"))) {
								maxProfit -= Convert::ToDouble(reader2->GetDecimal(3)) * Convert::ToDouble(reader2->GetDecimal(6));
								minProfit -= Convert::ToDouble(reader2->GetDecimal(3)) * Convert::ToDouble(reader2->GetDecimal(6));

								paid += Convert::ToDouble(reader2->GetDecimal(3)) * Convert::ToDouble(reader2->GetDecimal(6));
							}
							else {
								maxProfit -= Convert::ToDouble(reader2->GetDecimal(5)) * Convert::ToDouble(reader2->GetDecimal(6));
								minProfit -= Convert::ToDouble(reader2->GetDecimal(5)) * Convert::ToDouble(reader2->GetDecimal(6));

								paid += Convert::ToDouble(reader2->GetDecimal(5)) * Convert::ToDouble(reader2->GetDecimal(6));
							}
						}
						reader2->Close();


						query = "Select COALESCE(SUM(remaining), 0) from customer";
						command2 = gcnew SqlCommand(query, connection2);
						reader2 = command2->ExecuteReader();
						while (reader2->Read()) {
							totalremaining = Convert::ToDouble(reader2->GetDecimal(0));
						}
						reader2->Close();
					}
					catch (SqlException^ ex) {
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					if (total_kilo == "0.00")total_kilo = "";
					if (total_qunt == "0.00")total_qunt = "";
					this->dataGridView1->Rows->Add(name, total_kilo, total_qunt, price, paid, maxincome, minincome, maxProfit, minProfit);

					totalmaxProfit += maxProfit;
					totalminProfit += minProfit;
					totalmaxincome += maxincome;
					totalminincome += minincome;
					totalpaid += paid;
				}
				connection->Close();
				this->label4->Text = FormatNumberWithCommas(totalmaxProfit);
				this->label5->Text = FormatNumberWithCommas(totalminProfit);
				this->label6->Text = FormatNumberWithCommas(totalminincome);
				this->label8->Text = FormatNumberWithCommas(totalmaxincome);
				this->label10->Text = FormatNumberWithCommas(totalpaid);
				this->label12->Text = FormatNumberWithCommas(totalremaining);
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	};
}
