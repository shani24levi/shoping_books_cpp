#pragma once

namespace BEBS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UsersControl
	/// </summary>
	public ref class UsersControl : public System::Windows::Forms::Form
	{
	public:
		UsersControl(void)
		{
			InitializeComponent();
			//fillCom();
			fillListBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UsersControl()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ HomePage;

	private: System::Windows::Forms::Button^ edit;


	private: System::Windows::Forms::Label^ cartLabl;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ email;
	private: System::Windows::Forms::TextBox^ date;
	private: System::Windows::Forms::TextBox^ status_txt;







	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ block;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UsersControl::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->HomePage = (gcnew System::Windows::Forms::PictureBox());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->cartLabl = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->date = (gcnew System::Windows::Forms::TextBox());
			this->status_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->block = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Black;
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(574, 56);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(310, 196);
			this->listBox1->TabIndex = 20;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UsersControl::listBox1_SelectedIndexChanged);
			// 
			// HomePage
			// 
			this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
			this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomePage->Location = System::Drawing::Point(1006, 34);
			this->HomePage->Name = L"HomePage";
			this->HomePage->Size = System::Drawing::Size(40, 40);
			this->HomePage->TabIndex = 10;
			this->HomePage->TabStop = false;
			this->HomePage->Click += gcnew System::EventHandler(this, &UsersControl::HomePage_Click);
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->edit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::White;
			this->edit->Location = System::Drawing::Point(308, 461);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(127, 50);
			this->edit->TabIndex = 12;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &UsersControl::edit_Click);
			// 
			// cartLabl
			// 
			this->cartLabl->AutoSize = true;
			this->cartLabl->Location = System::Drawing::Point(670, 287);
			this->cartLabl->Name = L"cartLabl";
			this->cartLabl->Size = System::Drawing::Size(0, 25);
			this->cartLabl->TabIndex = 15;
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::Black;
			this->name->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Location = System::Drawing::Point(171, 92);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(280, 44);
			this->name->TabIndex = 16;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::Black;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::White;
			this->email->Location = System::Drawing::Point(171, 184);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(280, 44);
			this->email->TabIndex = 17;
			// 
			// date
			// 
			this->date->BackColor = System::Drawing::Color::Black;
			this->date->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->ForeColor = System::Drawing::Color::White;
			this->date->Location = System::Drawing::Point(171, 282);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(280, 44);
			this->date->TabIndex = 18;
			// 
			// status_txt
			// 
			this->status_txt->BackColor = System::Drawing::Color::Black;
			this->status_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->status_txt->ForeColor = System::Drawing::Color::White;
			this->status_txt->Location = System::Drawing::Point(171, 377);
			this->status_txt->Name = L"status_txt";
			this->status_txt->Size = System::Drawing::Size(280, 44);
			this->status_txt->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(165, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 33);
			this->label2->TabIndex = 21;
			this->label2->Text = L"User Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(165, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 33);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Email";
			this->label1->Click += gcnew System::EventHandler(this, &UsersControl::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(165, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 33);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Join Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(165, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 33);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Status";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(31, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 33);
			this->label5->TabIndex = 25;
			this->label5->Text = L"BEBS Users";
			this->label5->Click += gcnew System::EventHandler(this, &UsersControl::label5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(583, 279);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(177, 33);
			this->label8->TabIndex = 28;
			this->label8->Text = L"User Purchases";
			this->label8->Click += gcnew System::EventHandler(this, &UsersControl::label8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Black;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(574, 315);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(461, 196);
			this->dataGridView1->TabIndex = 30;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsersControl::dataGridView1_CellContentClick_1);
			// 
			// block
			// 
			this->block->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->block->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->block->ForeColor = System::Drawing::Color::White;
			this->block->Location = System::Drawing::Point(146, 461);
			this->block->Name = L"block";
			this->block->Size = System::Drawing::Size(127, 50);
			this->block->TabIndex = 11;
			this->block->Text = L"Block";
			this->block->UseVisualStyleBackColor = false;
			this->block->Click += gcnew System::EventHandler(this, &UsersControl::block_Click);
			// 
			// UsersControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1076, 536);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->status_txt);
			this->Controls->Add(this->date);
			this->Controls->Add(this->email);
			this->Controls->Add(this->name);
			this->Controls->Add(this->cartLabl);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->block);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->listBox1);
			this->Name = L"UsersControl";
			this->Text = L"UsersControl";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: Void fillCom(void) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select user_name,email,join_date,user_role from book_store.users where user_role='buyer';", conData);
		MySqlDataReader^ myRender;

		try {
			//conData->Open();
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDB;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSorce = gcnew BindingSource();

			bSorce->DataSource = dbdataset;
			dataGridView1->DataSource = bSorce;
			sda->Update(dbdataset);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}

	 int countList2 = 0;
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listVal = listBox1->Text;

	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where user_name='" + listVal + "' ;" , conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("user_id").ToString();
			String^ vname = myRender->GetString("user_name");
			String^ vemail = myRender->GetString("email");
			String^ vdate = myRender->GetString("join_date");
			String^ vstatus = myRender->GetString("user_status");

			//set vals to text box
			name->Text = vname;
			email->Text = vemail;
			date->Text = vdate;
			status_txt->Text = vstatus;

			//set list 2:
			conData->Close();
			MySqlCommand^ cmdDB2 = gcnew MySqlCommand("select pyment_date,price_paid,payment_method from book_store.purchases where user_id='" + vId + "';", conData);
			MySqlDataReader^ myRender2;


			try {
				conData->Open();
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDB2;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSorce = gcnew BindingSource();

				bSorce->DataSource = dbdataset;
				dataGridView1->DataSource = bSorce;
				sda->Update(dbdataset);

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			/*try {
				conData->Open();
				myRender2 = cmdDB2->ExecuteReader();

				//remove each click
				if (countList2 > 0) {
					countList2--;
					int i = 0;
					for (; i <= countList2; i++) {
						listBox2->Items->RemoveAt(countList2);
						countList2--;
					}
				}

				//set:
				while (myRender2->Read()) {
					String^ pId = myRender2->GetInt32("purchase_id").ToString();
					String^ pprice = myRender2->GetString("price_paid");
					String^ pdate = myRender2->GetString("pyment_date");
					String^ pmethod = myRender2->GetString("payment_method");
					countList2++;
					listBox2->Items->Add(pId + ", " + pprice + ", " + pdate + ", " + pmethod);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			*/

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: Void fillListBox(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where user_role='buyer';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vName;
			vName = myRender->GetString("user_name");
			listBox1->Items->Add(vName);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void block_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_status='OFF' where email='" + email->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Blocked");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::UsersControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_name='" + name->Text + "',user_status='" + status_txt->Text + "' where email='" + email->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Edited");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::UsersControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->~UsersControl();	BEBS::AdminMenu logIn;	logIn.ShowDialog();
	*/
	/*this->Hide();
	BEBS::AdminMenu renderPage;
	renderPage.ShowDialog();
	*/
}
};
}
