#pragma once

namespace BEBS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OrdersControl
	/// </summary>
	public ref class OrdersControl : public System::Windows::Forms::Form
	{
	public:
		OrdersControl(void)
		{
			InitializeComponent();
			fillCom();
			//
			//TODO: Add the constructor code here
			//
		}
		OrdersControl(Form^ lastForm)
		{
			this->lastForm = lastForm;
			InitializeComponent();
			fillCom();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrdersControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private:  Form^ lastForm;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ weekly;
	private: System::Windows::Forms::TextBox^ provider_txt;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ order_id;
	private: System::Windows::Forms::Button^ Update;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ book_txt;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ status_txt;

	private: System::Windows::Forms::TextBox^ id_txt;
	private: System::Windows::Forms::TextBox^ date_txt;
	private: System::Windows::Forms::TextBox^ amount_txt;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ HomePage;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrdersControl::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->weekly = (gcnew System::Windows::Forms::Button());
			this->provider_txt = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->order_id = (gcnew System::Windows::Forms::Label());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->book_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->status_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->date_txt = (gcnew System::Windows::Forms::TextBox());
			this->amount_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->HomePage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(54, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 33);
			this->label5->TabIndex = 28;
			this->label5->Text = L"BEBS Actives Orders";
			// 
			// weekly
			// 
			this->weekly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->weekly->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->weekly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->weekly->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weekly->ForeColor = System::Drawing::Color::White;
			this->weekly->Location = System::Drawing::Point(795, 437);
			this->weekly->Name = L"weekly";
			this->weekly->Size = System::Drawing::Size(251, 62);
			this->weekly->TabIndex = 34;
			this->weekly->Text = L"Add new order";
			this->weekly->UseVisualStyleBackColor = false;
			this->weekly->Click += gcnew System::EventHandler(this, &OrdersControl::weekly_Click);
			// 
			// provider_txt
			// 
			this->provider_txt->BackColor = System::Drawing::Color::Black;
			this->provider_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->provider_txt->ForeColor = System::Drawing::Color::White;
			this->provider_txt->Location = System::Drawing::Point(694, 127);
			this->provider_txt->Name = L"provider_txt";
			this->provider_txt->Size = System::Drawing::Size(280, 44);
			this->provider_txt->TabIndex = 35;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Black;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(60, 135);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(280, 32);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &OrdersControl::comboBox1_SelectedIndexChanged);
			// 
			// order_id
			// 
			this->order_id->AutoSize = true;
			this->order_id->BackColor = System::Drawing::Color::Transparent;
			this->order_id->ForeColor = System::Drawing::Color::White;
			this->order_id->Location = System::Drawing::Point(689, 199);
			this->order_id->Name = L"order_id";
			this->order_id->Size = System::Drawing::Size(99, 25);
			this->order_id->TabIndex = 37;
			this->order_id->Text = L"Book Title";
			// 
			// Update
			// 
			this->Update->BackColor = System::Drawing::Color::Gold;
			this->Update->ForeColor = System::Drawing::Color::White;
			this->Update->Location = System::Drawing::Point(60, 437);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(162, 50);
			this->Update->TabIndex = 38;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = false;
			this->Update->Click += gcnew System::EventHandler(this, &OrdersControl::Update_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(247, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 50);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &OrdersControl::button1_Click);
			// 
			// book_txt
			// 
			this->book_txt->BackColor = System::Drawing::Color::Black;
			this->book_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->book_txt->ForeColor = System::Drawing::Color::White;
			this->book_txt->Location = System::Drawing::Point(694, 227);
			this->book_txt->Name = L"book_txt";
			this->book_txt->Size = System::Drawing::Size(280, 44);
			this->book_txt->TabIndex = 40;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(689, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 25);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Provider";
			// 
			// status_txt
			// 
			this->status_txt->BackColor = System::Drawing::Color::Black;
			this->status_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->status_txt->ForeColor = System::Drawing::Color::White;
			this->status_txt->Location = System::Drawing::Point(694, 319);
			this->status_txt->Name = L"status_txt";
			this->status_txt->Size = System::Drawing::Size(280, 44);
			this->status_txt->TabIndex = 42;
			// 
			// id_txt
			// 
			this->id_txt->BackColor = System::Drawing::Color::Black;
			this->id_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_txt->ForeColor = System::Drawing::Color::White;
			this->id_txt->Location = System::Drawing::Point(390, 127);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(280, 44);
			this->id_txt->TabIndex = 43;
			// 
			// date_txt
			// 
			this->date_txt->BackColor = System::Drawing::Color::Black;
			this->date_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_txt->ForeColor = System::Drawing::Color::White;
			this->date_txt->Location = System::Drawing::Point(390, 227);
			this->date_txt->Name = L"date_txt";
			this->date_txt->Size = System::Drawing::Size(280, 44);
			this->date_txt->TabIndex = 44;
			// 
			// amount_txt
			// 
			this->amount_txt->BackColor = System::Drawing::Color::Black;
			this->amount_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount_txt->ForeColor = System::Drawing::Color::White;
			this->amount_txt->Location = System::Drawing::Point(390, 319);
			this->amount_txt->Name = L"amount_txt";
			this->amount_txt->Size = System::Drawing::Size(280, 44);
			this->amount_txt->TabIndex = 45;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(689, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 25);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Order Status";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(385, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Order Id";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(385, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 25);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Date Order";
			this->label4->Click += gcnew System::EventHandler(this, &OrdersControl::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(385, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 25);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Amount";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(54, 99);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 33);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Choos order:";
			// 
			// HomePage
			// 
			this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
			this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomePage->Location = System::Drawing::Point(1006, 36);
			this->HomePage->Name = L"HomePage";
			this->HomePage->Size = System::Drawing::Size(40, 40);
			this->HomePage->TabIndex = 51;
			this->HomePage->TabStop = false;
			this->HomePage->Click += gcnew System::EventHandler(this, &OrdersControl::HomePage_Click);
			// 
			// OrdersControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1076, 536);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->amount_txt);
			this->Controls->Add(this->date_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->status_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->book_txt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->order_id);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->provider_txt);
			this->Controls->Add(this->weekly);
			this->Controls->Add(this->label5);
			this->Name = L"OrdersControl";
			this->Text = L"OrdersControl";
			this->Load += gcnew System::EventHandler(this, &OrdersControl::OrdersControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ comboVal = comboBox1->Text;

	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_provider_id='" + comboVal + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("order_provider_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vamount = myRender->GetInt32("amount").ToString();
			String^ vdate = myRender->GetDateTime("order_date").ToString();
			String^ vstatus = myRender->GetString("order_status");
			String^ vprovider = myRender->GetString("provider");

			//set vals to text box
			id_txt->Text = vId;
			book_txt->Text = vtitle;
			amount_txt->Text = vamount;
			date_txt->Text = vdate;
			status_txt->Text = vstatus;
			provider_txt->Text = vprovider;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: Void fillCom(void) {
		   String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		   MySqlConnection^ conData = gcnew MySqlConnection(con);
		   MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_status='active';", conData);
		   MySqlDataReader^ myRender;

		   try {
			   conData->Open();
			   myRender = cmdDB->ExecuteReader();
			   while (myRender->Read()) {
				   String^ vTitle;
				   vTitle = myRender->GetString("order_provider_id");
				   comboBox1->Items->Add(vTitle);
			   }
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
	   }

private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.orders_from_provider set amount='" + amount_txt->Text + "',provider='" + provider_txt->Text + "',order_status='" + status_txt->Text + "',order_date='" + date_txt->Text + "' where order_provider_id='" + id_txt->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::OrdersControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.orders_from_provider where order_provider_id='" + id_txt->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::OrdersControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void weekly_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Page in process");
}
private: System::Void OrdersControl_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~OrdersControl();
	lastForm->Show();
}
};
}
