#pragma once
#include "pch.h";

namespace BEBS {
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class RegisterMenu : public System::Windows::Forms::Form
	{

	public:
		RegisterMenu(void)
		{
			InitializeComponent();
		}
		RegisterMenu(Form^ lastForm)
		{
			this->lastForm = lastForm;
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~RegisterMenu()
		{
			if (components)
			{
				delete components;
			}
		}




	private:  Form^ lastForm;
	private: System::Windows::Forms::Label^ labelUserName;
	private: System::Windows::Forms::TextBox^ email_new;
	private: System::Windows::Forms::TextBox^ pass_new;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ name_new;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ BackLastPage;
	private: System::Windows::Forms::Label^ labelBackLastPage;







	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterMenu::typeid));
			this->labelUserName = (gcnew System::Windows::Forms::Label());
			this->email_new = (gcnew System::Windows::Forms::TextBox());
			this->pass_new = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name_new = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BackLastPage = (gcnew System::Windows::Forms::PictureBox());
			this->labelBackLastPage = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackLastPage))->BeginInit();
			this->SuspendLayout();
			// 
			// labelUserName
			// 
			this->labelUserName->AutoSize = true;
			this->labelUserName->BackColor = System::Drawing::Color::Transparent;
			this->labelUserName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUserName->ForeColor = System::Drawing::Color::White;
			this->labelUserName->Location = System::Drawing::Point(247, 109);
			this->labelUserName->Name = L"labelUserName";
			this->labelUserName->Size = System::Drawing::Size(209, 33);
			this->labelUserName->TabIndex = 0;
			this->labelUserName->Text = L"Email (User Name)";
			// 
			// email_new
			// 
			this->email_new->BackColor = System::Drawing::Color::Black;
			this->email_new->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_new->ForeColor = System::Drawing::Color::White;
			this->email_new->Location = System::Drawing::Point(251, 148);
			this->email_new->Name = L"email_new";
			this->email_new->Size = System::Drawing::Size(280, 44);
			this->email_new->TabIndex = 1;
			this->email_new->TextChanged += gcnew System::EventHandler(this, &RegisterMenu::textBox1_TextChanged);
			// 
			// pass_new
			// 
			this->pass_new->BackColor = System::Drawing::Color::Black;
			this->pass_new->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_new->ForeColor = System::Drawing::Color::White;
			this->pass_new->Location = System::Drawing::Point(251, 260);
			this->pass_new->Name = L"pass_new";
			this->pass_new->Size = System::Drawing::Size(280, 44);
			this->pass_new->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(247, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Password";
			// 
			// name_new
			// 
			this->name_new->BackColor = System::Drawing::Color::Black;
			this->name_new->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_new->ForeColor = System::Drawing::Color::White;
			this->name_new->Location = System::Drawing::Point(251, 364);
			this->name_new->Name = L"name_new";
			this->name_new->Size = System::Drawing::Size(280, 44);
			this->name_new->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(247, 328);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 33);
			this->label2->TabIndex = 4;
			this->label2->Text = L"User Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(25, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 50);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterMenu::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(25, 54);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(153, 368);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 28.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(241, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 76);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Register";
			// 
			// BackLastPage
			// 
			this->BackLastPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackLastPage.BackgroundImage")));
			this->BackLastPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BackLastPage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BackLastPage->Location = System::Drawing::Point(1018, 39);
			this->BackLastPage->Name = L"BackLastPage";
			this->BackLastPage->Size = System::Drawing::Size(40, 40);
			this->BackLastPage->TabIndex = 11;
			this->BackLastPage->TabStop = false;
			this->BackLastPage->Click += gcnew System::EventHandler(this, &RegisterMenu::BackLastGui_Click);
			// 
			// labelBackLastPage
			// 
			this->labelBackLastPage->AutoSize = true;
			this->labelBackLastPage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->labelBackLastPage->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBackLastPage->ForeColor = System::Drawing::Color::White;
			this->labelBackLastPage->Location = System::Drawing::Point(1013, 82);
			this->labelBackLastPage->Name = L"labelBackLastPage";
			this->labelBackLastPage->Size = System::Drawing::Size(78, 40);
			this->labelBackLastPage->TabIndex = 12;
			this->labelBackLastPage->Text = L"Back";
			this->labelBackLastPage->Click += gcnew System::EventHandler(this, &RegisterMenu::BackLastGui_Click);
			// 
			// RegisterMenu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->labelBackLastPage);
			this->Controls->Add(this->BackLastPage);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->name_new);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pass_new);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->email_new);
			this->Controls->Add(this->labelUserName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegisterMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &RegisterMenu::RegisterMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackLastPage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegisterMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}






	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void BackLastGui_Click(System::Object^ sender, System::EventArgs^ e) {
		this->~RegisterMenu();
		lastForm->Show();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where email = '" + this->email_new->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		int count = 0;
		while (myRender->Read()) {
			count++;
		}
		if (count >= 1) {
			MessageBox::Show("Email Allrady exists");
		}

		else if (count == 0) {
			int^ vId;

			//get id count
			conData->Close();
			conData->Open();
			MySqlCommand^ cmdDB0 = gcnew MySqlCommand("select count(*) from book_store.users;", conData);
			MySqlDataReader^ myRender0;
			try {
				myRender0 = cmdDB0->ExecuteReader();
				while (myRender0->Read()) {
					vId = myRender0->GetInt32("count(*)")+1;
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			//insert
			conData->Close();
			conData->Open(); 
			MySqlCommand^ cmdDB2 = gcnew MySqlCommand("INSERT INTO `book_store`.`users`(`user_id`,`user_name`,`email`,`pass`)VALUES('"+ vId +"','" + this->name_new->Text + "','" + this->email_new->Text + "','" + this->pass_new->Text + "');", conData);
			MySqlDataReader^ myRender2;
			try {
				myRender2 = cmdDB2->ExecuteReader();
				this->Hide();
				BEBS::ShoppingMenu login(this);
				login.ShowDialog();
				this->Show();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
