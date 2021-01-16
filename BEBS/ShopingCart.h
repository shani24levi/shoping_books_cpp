#pragma once

namespace BEBS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ShopingCart
	/// </summary>
	public ref class ShopingCart : public System::Windows::Forms::Form
	{
	public:
		ShopingCart(void)
		{
			InitializeComponent();
			fillListBox();
							//
			//TODO: Add the constructor code here
			//
		}
		ShopingCart(String^ lastUserId, String^ lastCartId)
		{
			this->lastCartId = lastCartId;
			this->lastUserId = lastUserId;
			InitializeComponent();
			fillListBox();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShopingCart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BUY;
	protected:

	private:  String^ lastUserId;
	private:  String^ lastCartId;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ img;
	private: System::Windows::Forms::Button^ delet;


	private: System::Windows::Forms::TextBox^ title_txt;
	private: System::Windows::Forms::TextBox^ total_txt;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox;
	private: System::Windows::Forms::TextBox^ price_txt;

	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ final_txt;

	private: System::Windows::Forms::TextBox^ disc_txt;
	private: System::Windows::Forms::TextBox^ auther_txt;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ info_txt;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShopingCart::typeid));
			this->BUY = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->img = (gcnew System::Windows::Forms::PictureBox());
			this->delet = (gcnew System::Windows::Forms::Button());
			this->title_txt = (gcnew System::Windows::Forms::TextBox());
			this->total_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->price_txt = (gcnew System::Windows::Forms::TextBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->final_txt = (gcnew System::Windows::Forms::TextBox());
			this->disc_txt = (gcnew System::Windows::Forms::TextBox());
			this->auther_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->info_txt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->BeginInit();
			this->SuspendLayout();
			// 
			// BUY
			// 
			this->BUY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BUY->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BUY->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BUY->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BUY->ForeColor = System::Drawing::Color::White;
			this->BUY->Location = System::Drawing::Point(900, 452);
			this->BUY->Name = L"BUY";
			this->BUY->Size = System::Drawing::Size(141, 50);
			this->BUY->TabIndex = 33;
			this->BUY->Text = L"BUY";
			this->BUY->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(49, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(220, 33);
			this->label5->TabIndex = 35;
			this->label5->Text = L"BEBS Shopimg Cart";
			// 
			// img
			// 
			this->img->Location = System::Drawing::Point(357, 85);
			this->img->Name = L"img";
			this->img->Size = System::Drawing::Size(199, 208);
			this->img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->img->TabIndex = 36;
			this->img->TabStop = false;
			// 
			// delet
			// 
			this->delet->BackColor = System::Drawing::Color::Red;
			this->delet->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->delet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delet->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delet->ForeColor = System::Drawing::Color::White;
			this->delet->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delet.Image")));
			this->delet->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->delet->Location = System::Drawing::Point(121, 401);
			this->delet->Name = L"delet";
			this->delet->Size = System::Drawing::Size(126, 43);
			this->delet->TabIndex = 38;
			this->delet->Text = L"Delete";
			this->delet->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->delet->UseVisualStyleBackColor = false;
			// 
			// title_txt
			// 
			this->title_txt->BackColor = System::Drawing::Color::Black;
			this->title_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_txt->ForeColor = System::Drawing::Color::White;
			this->title_txt->Location = System::Drawing::Point(357, 353);
			this->title_txt->Name = L"title_txt";
			this->title_txt->Size = System::Drawing::Size(199, 44);
			this->title_txt->TabIndex = 41;
			// 
			// total_txt
			// 
			this->total_txt->BackColor = System::Drawing::Color::Black;
			this->total_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_txt->ForeColor = System::Drawing::Color::White;
			this->total_txt->Location = System::Drawing::Point(700, 452);
			this->total_txt->Multiline = true;
			this->total_txt->Name = L"total_txt";
			this->total_txt->Size = System::Drawing::Size(201, 50);
			this->total_txt->TabIndex = 44;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(599, 459);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 33);
			this->label1->TabIndex = 45;
			this->label1->Text = L"TOTAL:";
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::Color::Black;
			this->listBox->ForeColor = System::Drawing::Color::White;
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 24;
			this->listBox->Location = System::Drawing::Point(64, 109);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(257, 268);
			this->listBox->TabIndex = 46;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ShopingCart::listBox_SelectedIndexChanged);
			// 
			// price_txt
			// 
			this->price_txt->BackColor = System::Drawing::Color::Black;
			this->price_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_txt->ForeColor = System::Drawing::Color::White;
			this->price_txt->Location = System::Drawing::Point(590, 112);
			this->price_txt->Name = L"price_txt";
			this->price_txt->Size = System::Drawing::Size(199, 44);
			this->price_txt->TabIndex = 47;
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->BackColor = System::Drawing::Color::Transparent;
			this->Title->ForeColor = System::Drawing::Color::Transparent;
			this->Title->Location = System::Drawing::Point(352, 325);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(49, 25);
			this->Title->TabIndex = 48;
			this->Title->Text = L"Title";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(585, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 25);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Price";
			// 
			// final_txt
			// 
			this->final_txt->BackColor = System::Drawing::Color::Black;
			this->final_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->final_txt->ForeColor = System::Drawing::Color::White;
			this->final_txt->Location = System::Drawing::Point(590, 278);
			this->final_txt->Name = L"final_txt";
			this->final_txt->Size = System::Drawing::Size(199, 44);
			this->final_txt->TabIndex = 50;
			// 
			// disc_txt
			// 
			this->disc_txt->BackColor = System::Drawing::Color::Black;
			this->disc_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->disc_txt->ForeColor = System::Drawing::Color::White;
			this->disc_txt->Location = System::Drawing::Point(590, 197);
			this->disc_txt->Name = L"disc_txt";
			this->disc_txt->Size = System::Drawing::Size(199, 44);
			this->disc_txt->TabIndex = 51;
			// 
			// auther_txt
			// 
			this->auther_txt->BackColor = System::Drawing::Color::Black;
			this->auther_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->auther_txt->ForeColor = System::Drawing::Color::White;
			this->auther_txt->Location = System::Drawing::Point(590, 353);
			this->auther_txt->Name = L"auther_txt";
			this->auther_txt->Size = System::Drawing::Size(199, 44);
			this->auther_txt->TabIndex = 52;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(585, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 25);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Discount";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(585, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 25);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Final Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(585, 325);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 25);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Auther";
			// 
			// info_txt
			// 
			this->info_txt->BackColor = System::Drawing::Color::Black;
			this->info_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info_txt->ForeColor = System::Drawing::Color::White;
			this->info_txt->Location = System::Drawing::Point(822, 112);
			this->info_txt->Multiline = true;
			this->info_txt->Name = L"info_txt";
			this->info_txt->Size = System::Drawing::Size(199, 202);
			this->info_txt->TabIndex = 56;
			this->info_txt->TextChanged += gcnew System::EventHandler(this, &ShopingCart::info_txt_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(817, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 25);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Information";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Black;
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(64, 71);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(257, 32);
			this->comboBox1->TabIndex = 58;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ShopingCart::comboBox1_SelectedIndexChanged);
			// 
			// ShopingCart
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1076, 536);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->info_txt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->auther_txt);
			this->Controls->Add(this->disc_txt);
			this->Controls->Add(this->final_txt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->price_txt);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->total_txt);
			this->Controls->Add(this->title_txt);
			this->Controls->Add(this->delet);
			this->Controls->Add(this->img);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->BUY);
			this->Name = L"ShopingCart";
			this->Text = L"ShopingCart";
			this->Load += gcnew System::EventHandler(this, &ShopingCart::ShopingCart_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void info_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ShopingCart_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: Void fillListBox(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.book_list bl inner join book_store.shoping_carts sc on bl.shoping_cart_id = sc.shoping_cart_id  inner join book_store.books b on bl.book_id = b.book_id  where sc.shoping_cart_id=1;", conData);  //lastCartId;
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vTitle = myRender->GetString("title");
			String^ vid = myRender->GetInt32("book_list_id").ToString();

			listBox->Items->Add(vid + '" :"' + vTitle);
			comboBox1->Items->Add(vid);
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
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where title='" + comboVal + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("book_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vprice = myRender->GetInt32("price").ToString();
			String^ vinfo = myRender->GetString("info");
			String^ vimg = myRender->GetString("img");
			String^ vauthor = myRender->GetString("author");
			if (myRender->GetInt32("percent").ToString() != nullptr) {
				String^ vpercent = myRender->GetInt32("percent").ToString();
				disc_txt->Text = vpercent;
			}
			else {
				String^ vpercent = "NoN";
				disc_txt->Text = vpercent;
			}
			//String^ vimg = myRender->GetString("img");
			//this->img->BackgroundImage = Image::FromFile(vimg);

			//final price, taotal price 
			//set vals to text box
			title_txt->Text = vtitle;
			price_txt->Text = vprice;
			info_txt->Text = vinfo;
			auther_txt->Text = vauthor;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
