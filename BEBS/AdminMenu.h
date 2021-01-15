#pragma once
#include "pch.h";

namespace BEBS {
	/// <summary>
	/// Summary for AdminMenu
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:
		AdminMenu(void)
		{
			InitializeComponent();
			fillListBox();
			fillCom();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox;
	protected:

	private: System::Windows::Forms::PictureBox^ img;
	protected:

	private: System::Windows::Forms::Label^ book_id;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ Price;
	private: System::Windows::Forms::Label^ Section;


	private: System::Windows::Forms::Label^ Amount;


	private: System::Windows::Forms::Label^ Info;
	private: System::Windows::Forms::TextBox^ id_txt;
	private: System::Windows::Forms::TextBox^ price_txt;
	private: System::Windows::Forms::TextBox^ sec_txt;




	private: System::Windows::Forms::TextBox^ amount_txt;
	private: System::Windows::Forms::TextBox^ info_txt;


	private: System::Windows::Forms::TextBox^ title_txt;


	private: System::Windows::Forms::Button^ Profit;
	private: System::Windows::Forms::Button^ Sales;
	private: System::Windows::Forms::Button^ Users;
	private: System::Windows::Forms::Button^ Orders;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ SAVE;
	private: System::Windows::Forms::Button^ Update;
	private: System::Windows::Forms::Button^ Discount;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ pag_txt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ author_txt;

	private: System::Windows::Forms::TextBox^ img_txt;
	private: System::Windows::Forms::TextBox^ date_txt;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Label^ label5;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu::typeid));
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->img = (gcnew System::Windows::Forms::PictureBox());
			this->book_id = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->Price = (gcnew System::Windows::Forms::Label());
			this->Section = (gcnew System::Windows::Forms::Label());
			this->Amount = (gcnew System::Windows::Forms::Label());
			this->Info = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->price_txt = (gcnew System::Windows::Forms::TextBox());
			this->sec_txt = (gcnew System::Windows::Forms::TextBox());
			this->amount_txt = (gcnew System::Windows::Forms::TextBox());
			this->info_txt = (gcnew System::Windows::Forms::TextBox());
			this->title_txt = (gcnew System::Windows::Forms::TextBox());
			this->Profit = (gcnew System::Windows::Forms::Button());
			this->Sales = (gcnew System::Windows::Forms::Button());
			this->Users = (gcnew System::Windows::Forms::Button());
			this->Orders = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SAVE = (gcnew System::Windows::Forms::Button());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->Discount = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pag_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->author_txt = (gcnew System::Windows::Forms::TextBox());
			this->img_txt = (gcnew System::Windows::Forms::TextBox());
			this->date_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::Color::Black;
			this->listBox->ForeColor = System::Drawing::Color::White;
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 24;
			this->listBox->Location = System::Drawing::Point(673, 133);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(241, 316);
			this->listBox->TabIndex = 0;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminMenu::listBox_SelectedIndexChanged);
			// 
			// img
			// 
			this->img->Location = System::Drawing::Point(454, 106);
			this->img->Name = L"img";
			this->img->Size = System::Drawing::Size(162, 158);
			this->img->TabIndex = 1;
			this->img->TabStop = false;
			// 
			// book_id
			// 
			this->book_id->AutoSize = true;
			this->book_id->BackColor = System::Drawing::Color::Transparent;
			this->book_id->Location = System::Drawing::Point(28, 78);
			this->book_id->Name = L"book_id";
			this->book_id->Size = System::Drawing::Size(77, 25);
			this->book_id->TabIndex = 2;
			this->book_id->Text = L"Book id";
			this->book_id->Click += gcnew System::EventHandler(this, &AdminMenu::label1_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Location = System::Drawing::Point(28, 317);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(49, 25);
			this->title->TabIndex = 3;
			this->title->Text = L"Title";
			this->title->Click += gcnew System::EventHandler(this, &AdminMenu::label1_Click_1);
			// 
			// Price
			// 
			this->Price->AutoSize = true;
			this->Price->BackColor = System::Drawing::Color::Transparent;
			this->Price->Location = System::Drawing::Point(28, 156);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(56, 25);
			this->Price->TabIndex = 4;
			this->Price->Text = L"Price";
			// 
			// Section
			// 
			this->Section->AutoSize = true;
			this->Section->BackColor = System::Drawing::Color::Transparent;
			this->Section->Location = System::Drawing::Point(240, 78);
			this->Section->Name = L"Section";
			this->Section->Size = System::Drawing::Size(78, 25);
			this->Section->TabIndex = 5;
			this->Section->Text = L"Section";
			// 
			// Amount
			// 
			this->Amount->AutoSize = true;
			this->Amount->BackColor = System::Drawing::Color::Transparent;
			this->Amount->Location = System::Drawing::Point(28, 235);
			this->Amount->Name = L"Amount";
			this->Amount->Size = System::Drawing::Size(80, 25);
			this->Amount->TabIndex = 6;
			this->Amount->Text = L"Amount";
			// 
			// Info
			// 
			this->Info->AutoSize = true;
			this->Info->BackColor = System::Drawing::Color::Transparent;
			this->Info->Location = System::Drawing::Point(240, 156);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(44, 25);
			this->Info->TabIndex = 7;
			this->Info->Text = L"Info";
			// 
			// id_txt
			// 
			this->id_txt->BackColor = System::Drawing::Color::Black;
			this->id_txt->ForeColor = System::Drawing::Color::White;
			this->id_txt->Location = System::Drawing::Point(33, 106);
			this->id_txt->Multiline = true;
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(162, 34);
			this->id_txt->TabIndex = 8;
			this->id_txt->TextChanged += gcnew System::EventHandler(this, &AdminMenu::textBox1_TextChanged);
			// 
			// price_txt
			// 
			this->price_txt->BackColor = System::Drawing::Color::Black;
			this->price_txt->ForeColor = System::Drawing::Color::White;
			this->price_txt->Location = System::Drawing::Point(33, 184);
			this->price_txt->Multiline = true;
			this->price_txt->Name = L"price_txt";
			this->price_txt->Size = System::Drawing::Size(162, 34);
			this->price_txt->TabIndex = 9;
			// 
			// sec_txt
			// 
			this->sec_txt->BackColor = System::Drawing::Color::Black;
			this->sec_txt->ForeColor = System::Drawing::Color::White;
			this->sec_txt->Location = System::Drawing::Point(245, 106);
			this->sec_txt->Multiline = true;
			this->sec_txt->Name = L"sec_txt";
			this->sec_txt->Size = System::Drawing::Size(162, 34);
			this->sec_txt->TabIndex = 10;
			// 
			// amount_txt
			// 
			this->amount_txt->BackColor = System::Drawing::Color::Black;
			this->amount_txt->ForeColor = System::Drawing::Color::White;
			this->amount_txt->Location = System::Drawing::Point(33, 265);
			this->amount_txt->Multiline = true;
			this->amount_txt->Name = L"amount_txt";
			this->amount_txt->Size = System::Drawing::Size(162, 34);
			this->amount_txt->TabIndex = 11;
			// 
			// info_txt
			// 
			this->info_txt->BackColor = System::Drawing::Color::Black;
			this->info_txt->ForeColor = System::Drawing::Color::White;
			this->info_txt->Location = System::Drawing::Point(245, 184);
			this->info_txt->Multiline = true;
			this->info_txt->Name = L"info_txt";
			this->info_txt->Size = System::Drawing::Size(162, 115);
			this->info_txt->TabIndex = 12;
			// 
			// title_txt
			// 
			this->title_txt->BackColor = System::Drawing::Color::Black;
			this->title_txt->ForeColor = System::Drawing::Color::White;
			this->title_txt->Location = System::Drawing::Point(33, 345);
			this->title_txt->Multiline = true;
			this->title_txt->Name = L"title_txt";
			this->title_txt->Size = System::Drawing::Size(162, 34);
			this->title_txt->TabIndex = 14;
			// 
			// Profit
			// 
			this->Profit->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Profit->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Profit->Location = System::Drawing::Point(920, 12);
			this->Profit->Name = L"Profit";
			this->Profit->Size = System::Drawing::Size(83, 50);
			this->Profit->TabIndex = 15;
			this->Profit->Text = L"Profit";
			this->Profit->UseVisualStyleBackColor = false;
			this->Profit->Click += gcnew System::EventHandler(this, &AdminMenu::Profit_Click);
			// 
			// Sales
			// 
			this->Sales->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Sales->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Sales->Location = System::Drawing::Point(839, 12);
			this->Sales->Name = L"Sales";
			this->Sales->Size = System::Drawing::Size(75, 50);
			this->Sales->TabIndex = 16;
			this->Sales->Text = L"Sales";
			this->Sales->UseVisualStyleBackColor = false;
			this->Sales->Click += gcnew System::EventHandler(this, &AdminMenu::Sales_Click);
			// 
			// Users
			// 
			this->Users->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Users->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Users->Location = System::Drawing::Point(758, 12);
			this->Users->Name = L"Users";
			this->Users->Size = System::Drawing::Size(75, 50);
			this->Users->TabIndex = 17;
			this->Users->Text = L"Users";
			this->Users->UseVisualStyleBackColor = false;
			this->Users->Click += gcnew System::EventHandler(this, &AdminMenu::button1_Click);
			// 
			// Orders
			// 
			this->Orders->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Orders->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Orders->Location = System::Drawing::Point(653, 12);
			this->Orders->Name = L"Orders";
			this->Orders->Size = System::Drawing::Size(96, 50);
			this->Orders->TabIndex = 18;
			this->Orders->Text = L"Orders";
			this->Orders->UseVisualStyleBackColor = false;
			this->Orders->Click += gcnew System::EventHandler(this, &AdminMenu::Orders_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(28, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 25);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Store inventory";
			// 
			// SAVE
			// 
			this->SAVE->BackColor = System::Drawing::Color::Chartreuse;
			this->SAVE->Location = System::Drawing::Point(33, 466);
			this->SAVE->Name = L"SAVE";
			this->SAVE->Size = System::Drawing::Size(162, 50);
			this->SAVE->TabIndex = 20;
			this->SAVE->Text = L"SAVE";
			this->SAVE->UseVisualStyleBackColor = false;
			this->SAVE->Click += gcnew System::EventHandler(this, &AdminMenu::button1_Click_1);
			// 
			// Update
			// 
			this->Update->BackColor = System::Drawing::Color::Gold;
			this->Update->Location = System::Drawing::Point(234, 466);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(162, 50);
			this->Update->TabIndex = 21;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = false;
			this->Update->Click += gcnew System::EventHandler(this, &AdminMenu::Update_Click);
			// 
			// Discount
			// 
			this->Discount->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Discount->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Discount->Location = System::Drawing::Point(551, 12);
			this->Discount->Name = L"Discount";
			this->Discount->Size = System::Drawing::Size(96, 50);
			this->Discount->TabIndex = 22;
			this->Discount->Text = L"Discount";
			this->Discount->UseVisualStyleBackColor = false;
			this->Discount->Click += gcnew System::EventHandler(this, &AdminMenu::Discount_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Black;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(673, 95);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(241, 32);
			this->comboBox1->TabIndex = 23;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminMenu::comboBox1_SelectedIndexChanged);
			// 
			// pag_txt
			// 
			this->pag_txt->BackColor = System::Drawing::Color::Black;
			this->pag_txt->ForeColor = System::Drawing::Color::White;
			this->pag_txt->Location = System::Drawing::Point(33, 425);
			this->pag_txt->Multiline = true;
			this->pag_txt->Name = L"pag_txt";
			this->pag_txt->Size = System::Drawing::Size(162, 34);
			this->pag_txt->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(37, 397);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Pages";
			this->label2->Click += gcnew System::EventHandler(this, &AdminMenu::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(449, 317);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 25);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Author";
			this->label3->Click += gcnew System::EventHandler(this, &AdminMenu::label3_Click);
			// 
			// author_txt
			// 
			this->author_txt->BackColor = System::Drawing::Color::Black;
			this->author_txt->ForeColor = System::Drawing::Color::White;
			this->author_txt->Location = System::Drawing::Point(454, 345);
			this->author_txt->Multiline = true;
			this->author_txt->Name = L"author_txt";
			this->author_txt->Size = System::Drawing::Size(162, 34);
			this->author_txt->TabIndex = 27;
			this->author_txt->TextChanged += gcnew System::EventHandler(this, &AdminMenu::author_txt_TextChanged);
			// 
			// img_txt
			// 
			this->img_txt->BackColor = System::Drawing::Color::Black;
			this->img_txt->ForeColor = System::Drawing::Color::White;
			this->img_txt->Location = System::Drawing::Point(454, 265);
			this->img_txt->Multiline = true;
			this->img_txt->Name = L"img_txt";
			this->img_txt->Size = System::Drawing::Size(162, 34);
			this->img_txt->TabIndex = 28;
			// 
			// date_txt
			// 
			this->date_txt->BackColor = System::Drawing::Color::Black;
			this->date_txt->ForeColor = System::Drawing::Color::White;
			this->date_txt->Location = System::Drawing::Point(245, 345);
			this->date_txt->Multiline = true;
			this->date_txt->Name = L"date_txt";
			this->date_txt->Size = System::Drawing::Size(162, 34);
			this->date_txt->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(240, 317);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Date";
			this->label4->Click += gcnew System::EventHandler(this, &AdminMenu::label4_Click);
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::Red;
			this->Delete->ForeColor = System::Drawing::Color::White;
			this->Delete->Location = System::Drawing::Point(432, 466);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(162, 50);
			this->Delete->TabIndex = 31;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &AdminMenu::Delete_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Brown;
			this->label5->Location = System::Drawing::Point(546, 302);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 25);
			this->label5->TabIndex = 32;
			this->label5->Text = L"*add // ";
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1407, 670);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->date_txt);
			this->Controls->Add(this->img_txt);
			this->Controls->Add(this->author_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pag_txt);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Discount);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->SAVE);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Orders);
			this->Controls->Add(this->Users);
			this->Controls->Add(this->Sales);
			this->Controls->Add(this->Profit);
			this->Controls->Add(this->title_txt);
			this->Controls->Add(this->info_txt);
			this->Controls->Add(this->amount_txt);
			this->Controls->Add(this->sec_txt);
			this->Controls->Add(this->price_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->Amount);
			this->Controls->Add(this->Section);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->title);
			this->Controls->Add(this->book_id);
			this->Controls->Add(this->img);
			this->Controls->Add(this->listBox);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"AdminMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::UsersControl users;
	users.ShowDialog();
}

	   //image text -> add / / image//books//
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`info`,`img`,`author`) VALUES('"+id_txt->Text+"','"+title_txt->Text +"','"+pag_txt->Text +"','"+sec_txt->Text +"', '"+price_txt->Text +"' ,'"+amount_txt->Text +"','"+info_txt->Text +"','"+img_txt->Text +"','" + author_txt->Text + "');", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Added");
		while(myRender->Read()) {
	
		}
		this->Hide();
		BEBS::AdminMenu renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listVal = listBox->Text;

	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where title='" + listVal + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("book_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vpages = myRender->GetInt32("pages").ToString();
			String^ vsection = myRender->GetString("section");
			String^ vprice = myRender->GetInt32("price").ToString();
			String^ vamount = myRender->GetInt32("amount").ToString();
			String^ vpublish_date = myRender->GetDateTime("publish_date").ToString();
			String^ vinfo = myRender->GetString("info");
			String^ vimg = myRender->GetString("img");
			String^ vauthor = myRender->GetString("author");
			//this->img->BackgroundImage = Image::FromFile("Image\\cpp1.jpg");
			this->img->BackgroundImage = Image::FromFile(vimg);


			//set vals to text box
			id_txt->Text = vId;
			title_txt->Text = vtitle;
			sec_txt->Text = vsection;
			price_txt->Text = vprice;
			info_txt->Text = vinfo;
			img_txt->Text = vimg;
			amount_txt->Text = vamount;
			author_txt->Text = vauthor;
			date_txt->Text = vpublish_date;
			pag_txt->Text = vpages;

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: Void fillListBox(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vTitle;
			vTitle = myRender->GetString("title");
			listBox->Items->Add(vTitle);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: Void fillCom(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vTitle;
			vTitle = myRender->GetString("title");
			comboBox1->Items->Add(vTitle);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ comboVal = comboBox1->Text;

	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where title='"+ comboVal +"';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("book_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vpages = myRender->GetInt32("pages").ToString();
			String^ vsection = myRender->GetString("section");
			String^ vprice = myRender->GetInt32("price").ToString();
			String^ vamount = myRender->GetInt32("amount").ToString();
			String^ vpublish_date = myRender->GetDateTime("publish_date").ToString();
			String^ vinfo = myRender->GetString("info");
			String^ vimg = myRender->GetString("img");
			String^ vauthor = myRender->GetString("author");

			//set vals to text box
			id_txt->Text = vId;
			title_txt->Text = vtitle;
			sec_txt->Text = vsection;
			price_txt->Text = vprice;
			info_txt->Text = vinfo;
			img_txt->Text = vimg;
			amount_txt->Text = vamount;
			author_txt->Text = vauthor;
			date_txt->Text = vpublish_date;
			pag_txt->Text = vpages;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void author_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.books set book_id='" + id_txt->Text + "',title='" + title_txt->Text + "',pages='" + pag_txt->Text + "',section='" + sec_txt->Text + "',price= '" + price_txt->Text + "' ,amount='" + amount_txt->Text + "',info='" + info_txt->Text + "',img='" + img_txt->Text + "' where book_id='" + id_txt->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::AdminMenu renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.books where book_id='" + id_txt->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::AdminMenu renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void Sales_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::SalesControl sales;
	sales.ShowDialog();
}
private: System::Void Profit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::ProfitControl nextPag;
	nextPag.ShowDialog();
}
private: System::Void Orders_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::OrdersControl nextPag;
	nextPag.ShowDialog();
}
private: System::Void Discount_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::DiscountControl nextPag;
	nextPag.ShowDialog();
}
};
}
