#pragma once
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
	/// Summary for BuyConfirmation
	/// </summary>
	public ref class BuyConfirmation: public System::Windows::Forms::Form {

		public:
		BuyConfirmation(List<ListItem^>^ ReceivedItems) {
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
		private: List<ListItem^>^ receivedItems;
		private: System::Windows::Forms::Panel^ head;
		protected:
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Panel^ panel1;

		private: System::Windows::Forms::Panel^ panel2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BuyConfirmation::typeid));
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->head->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(337, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"تاكيد عمليه البيع / وإنشاء فاتوره";
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
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(437, 118);
			this->panel1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 19);
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
			this->label2->Location = System::Drawing::Point(294, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"اجمالي الفاتوره";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 103);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(437, 55);
			this->panel2->TabIndex = 0;
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
			// BuyConfirmation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 158);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->head);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BuyConfirmation";
			this->Text = L"BuyConfirmation";
			this->Load += gcnew System::EventHandler(this, &BuyConfirmation::BuyConfirmation_Load);
			this->head->ResumeLayout(false);
			this->head->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
		private: System::Void BuyConfirmation_Load(System::Object^ sender, System::EventArgs^ e) {

		}


		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (receivedItems->Count == 0) {
				MessageBox::Show(L"لا يوجد عناصر للبيع", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			String^ connectionString = "Server=DESKTOP-4KT2SAO\\SQLEXPRESS;Database=store;User Id=sa;Password=123;";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				// Construct the SQL query to insert the invoice details
				String^ invoiceQuery = "INSERT INTO invoice (cust_id, emp_id, paid) "
					"VALUES (@cust_id, @emp_id, @paid);"
					"SELECT SCOPE_IDENTITY()"; // Retrieve the last inserted invoice ID
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(invoiceQuery, connection);
				// Set the parameter values for the invoice query
				command->CommandText = invoiceQuery;
				command->Parameters->AddWithValue("@cust_id", 1002);
				command->Parameters->AddWithValue("@emp_id", 4);
				command->Parameters->AddWithValue("@paid", 123);


				// Execute the invoice query and retrieve the last inserted invoice ID
				int invoiceId = Convert::ToInt32(command->ExecuteScalar());
				//label1->Text = Convert::ToString(invoiceId);
				purchaseitem(invoiceId);

				connection->Close();
			}


			catch (Exception^ exx) {
				// Handle any exceptions that occur during the database operation
				MessageBox::Show("Error: " + exx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

				// Display an error message or perform error handling as needed
			}

		}
		public: void purchaseitem(int invoice) {
			
			String^ connectionString = "Server=DESKTOP-4KT2SAO\\SQLEXPRESS;Database=store;User Id=sa;Password=123;";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			bool fromreturn = 0;
			double returnvalue = 0;
			bool fromstor = 0;
			double storvalue = 0;
			bool fromitems = 0;
			double itemvalue = 0;
			bool otype = 0;
			try {
				for each (ListItem ^ item in receivedItems) {
					String^ purchaseQuery = "INSERT INTO purchase (item_id, invoice_id, enkilo, kilo, kilo_price, kilo_in_price, "
						"enQunt, quantity, qun_in_price, qun_price, enStor, kill_or_qunt, stor_in_price) "
						"VALUES (@item_id, @invoice_id, @enkilo, @kilo, @kilo_price, @kilo_in_price, @enQunt, @quantity, "
						"@qun_in_price, @qun_price, @enStor, @kill_or_qunt, @stor_in_price)";
					SqlCommand^ command = gcnew SqlCommand(purchaseQuery, connection);
					command->Parameters->AddWithValue("@item_id", item->ID);
					command->Parameters->AddWithValue("@invoice_id", invoice);




					//get the data from the source table for each item

					try {
						SqlConnection^ itemconnection = gcnew SqlConnection(connectionString);
						String^ query = "SELECT i.*, s.enkilo as'SenKilo',s.in_kilo as 'Sin_kilo',s.kilo_in_price as 'Skilo_in_price' ,s.enqunt as 'Senqunt',s.in_qun as 'Sin_qun',s.qun_in_price as 'Squn_in_price', r.enKilo as 'RenKilo',r.kilo as 'Rkilo' , r.enQunt as 'RenQunt',r.quantity as 'Rquantity',r.in_price as 'Rin_price' FROM Items i LEFT JOIN Storage s ON s.item_id = i.id LEFT JOIN Item_return r ON r.item_id = i.id WHERE i.id =" + item->ID + "; ";
						itemconnection->Open();
						SqlCommand^ command1 = gcnew SqlCommand(query, itemconnection);
						SqlDataReader^ reader = command1->ExecuteReader();
						while (reader->Read()) {
								//// check and return the type of the origin item kilo
							if (reader->GetBoolean(reader->GetOrdinal("SenKilo"))) {
								otype = 1;
								command->Parameters->AddWithValue("@enkilo", 1);


								command->Parameters->AddWithValue("@enQunt", safe_cast<System::Object^>(0));
								command->Parameters->AddWithValue("@qun_price", safe_cast<System::Object^>(0));
								command->Parameters->AddWithValue("@quantity", safe_cast<System::Object^>(0));
								command->Parameters->AddWithValue("@qun_in_price", safe_cast<System::Object^>(0));
								if (!item->Type) {
									item->Quantity *= Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("piece_weight")));
									command->Parameters->AddWithValue("@kilo_price", item->Sellprice / Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("piece_weight"))));
								}
								else {
									command->Parameters->AddWithValue("@kilo_price", item->Sellprice);
								}

								//check if there is returned item
								if (reader->GetDecimal(reader->GetOrdinal("Rkilo")) > 0) {
									fromreturn = 1;
									if (Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("Rkilo"))) >= item->Quantity) {
										command->Parameters->AddWithValue("@enStor", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@kill_or_qunt", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@stor_in_price", safe_cast<System::Object^>(0));
										returnvalue = item->Quantity;
										command->Parameters->AddWithValue("@kilo", returnvalue);
										command->Parameters->AddWithValue("@kilo_in_price", reader->GetDecimal(reader->GetOrdinal("Rin_price")));
									}
									else {
										returnvalue = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("Rkilo")));
										command->Parameters->AddWithValue("@kilo", returnvalue);
										command->Parameters->AddWithValue("@kilo_in_price", reader->GetDecimal(reader->GetOrdinal("Rin_price")));
										command->Parameters->AddWithValue("@enStor", 1);
										item->Quantity -= returnvalue;

										itemvalue = item->Quantity;
										command->Parameters->AddWithValue("@kill_or_qunt", itemvalue);
										command->Parameters->AddWithValue("@stor_in_price", reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));
										fromitems = 1;
									}
								}
								else {
									fromitems = 1;
									if (Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo"))) >= item->Quantity) {
										command->Parameters->AddWithValue("@enStor", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@kill_or_qunt", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@stor_in_price", safe_cast<System::Object^>(0));
										itemvalue = item->Quantity;
										command->Parameters->AddWithValue("@kilo", itemvalue);
										command->Parameters->AddWithValue("@kilo_in_price", reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));

									}
									else {
										itemvalue = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("kilo")));
										command->Parameters->AddWithValue("@kilo", itemvalue);
										command->Parameters->AddWithValue("@kilo_in_price", reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));
										command->Parameters->AddWithValue("@enStor", 1);

										item->Quantity -= itemvalue;
										storvalue = item->Quantity;
										command->Parameters->AddWithValue("@kill_or_qunt", storvalue);
										command->Parameters->AddWithValue("@stor_in_price", reader->GetDecimal(reader->GetOrdinal("Skilo_in_price")));
										fromstor = 1;
									}
								}


							}
							else {
								otype = 0;
								command->Parameters->AddWithValue("@enkilo", safe_cast<System::Object^>(0));
								command->Parameters->AddWithValue("@enQunt", 1);
								command->Parameters->AddWithValue("@kilo_price", safe_cast<System::Object^>(0));

								command->Parameters->AddWithValue("@kilo_in_price", safe_cast<System::Object^>(0));
								command->Parameters->AddWithValue("@kilo", safe_cast<System::Object^>(0));
								//// check and return the type of the origin item qunatity
								if (item->Type) {
									item->Quantity /= Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("piece_weight")));
									command->Parameters->AddWithValue("@qun_price", item->Sellprice * Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("piece_weight"))));
								}
								else {
									command->Parameters->AddWithValue("@qun_price", item->Sellprice);
								}

								//check if there is returned item
								if (reader->GetDecimal(reader->GetOrdinal("Rquantity")) > 0) {

									fromreturn = 1;
									if (Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("Rquantity"))) >= item->Quantity) {
										command->Parameters->AddWithValue("@enStor", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@kill_or_qunt", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@stor_in_price", safe_cast<System::Object^>(0));
										returnvalue = item->Quantity;
										command->Parameters->AddWithValue("@quantity", returnvalue);
										command->Parameters->AddWithValue("@qun_in_price", reader->GetDecimal(reader->GetOrdinal("Rin_price")));
									}
									else {
										returnvalue = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("Rquantity")));
										command->Parameters->AddWithValue("@quantity", returnvalue);
										command->Parameters->AddWithValue("@qun_in_price", reader->GetDecimal(reader->GetOrdinal("Rin_price")));
										command->Parameters->AddWithValue("@enStor", 1);
										item->Quantity -= returnvalue;
										itemvalue = item->Quantity;
										command->Parameters->AddWithValue("@kill_or_qunt", itemvalue);
										command->Parameters->AddWithValue("@stor_in_price", reader->GetDecimal(reader->GetOrdinal("kilo_in_price")));
										fromitems = 1;
									}
								}
								else {
									fromitems = 1;
									if (Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("quantity"))) >= item->Quantity) {
										command->Parameters->AddWithValue("@enStor", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@kill_or_qunt", safe_cast<System::Object^>(0));
										command->Parameters->AddWithValue("@stor_in_price", safe_cast<System::Object^>(0));
										itemvalue = item->Quantity;
										command->Parameters->AddWithValue("@quantity", itemvalue);
										command->Parameters->AddWithValue("@qun_in_price", reader->GetDecimal(reader->GetOrdinal("qun_in_price")));
									}
									else {
										itemvalue = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("quantity")));
										command->Parameters->AddWithValue("@quantity", itemvalue);
										command->Parameters->AddWithValue("@qun_in_price", reader->GetDecimal(reader->GetOrdinal("qun_in_price")));
										command->Parameters->AddWithValue("@enStor", 1);
										item->Quantity -= itemvalue;
										storvalue = item->Quantity;
										command->Parameters->AddWithValue("@kill_or_qunt", storvalue);
										command->Parameters->AddWithValue("@stor_in_price", reader->GetDecimal(reader->GetOrdinal("Squn_in_price")));
										fromstor = 1;
									}
								}
							}



						}
						itemconnection->Close();
						// assigin the new value the tables after purchasing;
						if (fromreturn) {
							String^ query = "update Item_return set kilo = kilo - @kilo, quantity=quantity - @quantity where item_id=@id;";
							if (fromitems) {
								query += "update Items set kilo =kilo - @ikilo, quantity=quantity - @iquantity where id=@id;";
							}
							SqlCommand^ command0 = gcnew SqlCommand(query, itemconnection);
							command0->Parameters->AddWithValue("@kilo", otype ? returnvalue : safe_cast<System::Object^>(0));
							command0->Parameters->AddWithValue("@quantity", !otype ? returnvalue : safe_cast<System::Object^>(0));
							if (fromitems) {
								command0->Parameters->AddWithValue("@ikilo", otype ? itemvalue : safe_cast<System::Object^>(0));
								command0->Parameters->AddWithValue("@iquantity", !otype ? itemvalue : safe_cast<System::Object^>(0));
							}
							command0->Parameters->AddWithValue("@id", item->ID);

							itemconnection->Open();
							command0->ExecuteNonQuery();
							itemconnection->Close();
						}
						else if (fromitems) {
							String^ query = "update Items set kilo =kilo - @kilo, quantity=quantity - @quantity where id=@id;";
							if (fromstor) {
								query += "update Storage set in_kilo =in_kilo - @ikilo, in_qun=in_qun-@iquantity where item_id=@id;";
								query += "UPDATE Items SET kilo =kilo+ s.in_kilo , kilo_in_price = s.kilo_in_price , quantity= quantity+ s.in_qun ,qun_in_price = s.qun_in_price FROM Items i INNER JOIN Storage s ON i.id = s.item_id WHERE i.id = @id;";
								query += "UPDATE Storage SET in_kilo = 0,in_qun=0 WHERE item_id = @id;";
							}
							SqlCommand^ command0 = gcnew SqlCommand(query, itemconnection);
							command0->Parameters->AddWithValue("@kilo", otype ? itemvalue : safe_cast<System::Object^>(0));
							command0->Parameters->AddWithValue("@quantity", !otype ? itemvalue : safe_cast<System::Object^>(0));
							if (fromstor) {
								command0->Parameters->AddWithValue("@ikilo", otype ? storvalue : safe_cast<System::Object^>(0));
								command0->Parameters->AddWithValue("@iquantity", !otype ? storvalue : safe_cast<System::Object^>(0));
							}
							command0->Parameters->AddWithValue("@id", item->ID);

							itemconnection->Open();
							command0->ExecuteNonQuery();
							itemconnection->Close();
						}
					}
					catch (SqlException^ ex) {
						// Handle any SQL errors
						MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

					}
					finally {
						// Close the database connection
						if (connection->State == System::Data::ConnectionState::Open)
							connection->Close();
					}
					connection->Open();
					command->ExecuteNonQuery();
					connection->Close();

				}
				if (1) {
					String^ query = "update Invoice set remaining = remaining where id = "+invoice+"; ";
					SqlCommand^ command0 = gcnew SqlCommand(query, connection);

					connection->Open();
					command0->ExecuteNonQuery();
					connection->Close();
				}
				
				clearthecartitems();
				CatgButton1ClickEvent();
			}
			catch (SqlException^ ex) {
			   // Handle any SQL errors
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				// Close the database connection
				if (connection->State == System::Data::ConnectionState::Open)
					connection->Close();
			}
		}
	};
}
