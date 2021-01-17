#pragma once

namespace BEBS {
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	public ref class LogInMenu : public System::Windows::Forms::Form
	{

	public:
		LogInMenu(void)
		{
			InitializeComponent();
		}
		LogInMenu(Form ^form)
		{
			InitializeComponent();
			lastForm = form;

		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~LogInMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private:  Form ^lastForm;
	private: System::Windows::Forms::Button^ LogIn;
	private: System::Windows::Forms::Label^ labelLogIn;

	private: System::Windows::Forms::TextBox^ TextUser;
	private: System::Windows::Forms::Label^ UserLabel;

	private: System::Windows::Forms::TextBox^ TextPassword;
	private: System::Windows::Forms::Label^ PasswordLabel;

	private: System::Windows::Forms::CheckBox^ CheckBoxAgree;
	private: System::Windows::Forms::Label^ ConditionText;
	private: System::Windows::Forms::Button^ Register;
	private: System::Windows::Forms::Button^ Back;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogInMenu::typeid));
			this->labelLogIn = (gcnew System::Windows::Forms::Label());
			this->TextUser = (gcnew System::Windows::Forms::TextBox());
			this->UserLabel = (gcnew System::Windows::Forms::Label());
			this->TextPassword = (gcnew System::Windows::Forms::TextBox());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->CheckBoxAgree = (gcnew System::Windows::Forms::CheckBox());
			this->ConditionText = (gcnew System::Windows::Forms::Label());
			this->LogIn = (gcnew System::Windows::Forms::Button());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelLogIn
			// 
			this->labelLogIn->AutoSize = true;
			this->labelLogIn->BackColor = System::Drawing::Color::Transparent;
			this->labelLogIn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLogIn->ForeColor = System::Drawing::Color::White;
			this->labelLogIn->Location = System::Drawing::Point(79, 39);
			this->labelLogIn->Name = L"labelLogIn";
			this->labelLogIn->Size = System::Drawing::Size(195, 76);
			this->labelLogIn->TabIndex = 1;
			this->labelLogIn->Text = L"Log In";
			this->labelLogIn->Click += gcnew System::EventHandler(this, &LogInMenu::labelSign_Click);
			// 
			// TextUser
			// 
			this->TextUser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TextUser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextUser->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextUser->ForeColor = System::Drawing::Color::White;
			this->TextUser->Location = System::Drawing::Point(83, 160);
			this->TextUser->Margin = System::Windows::Forms::Padding(5);
			this->TextUser->Multiline = true;
			this->TextUser->Name = L"TextUser";
			this->TextUser->Size = System::Drawing::Size(322, 40);
			this->TextUser->TabIndex = 4;
			this->TextUser->Text = L"*************";
			this->TextUser->Click += gcnew System::EventHandler(this, &LogInMenu::TextUser_Click);
			this->TextUser->TextChanged += gcnew System::EventHandler(this, &LogInMenu::TextUser_TextChanged);
			// 
			// UserLabel
			// 
			this->UserLabel->AutoSize = true;
			this->UserLabel->BackColor = System::Drawing::Color::Transparent;
			this->UserLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserLabel->ForeColor = System::Drawing::Color::White;
			this->UserLabel->Location = System::Drawing::Point(79, 133);
			this->UserLabel->Name = L"UserLabel";
			this->UserLabel->Size = System::Drawing::Size(136, 33);
			this->UserLabel->TabIndex = 2;
			this->UserLabel->Text = L"User Name";
			// 
			// TextPassword
			// 
			this->TextPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TextPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextPassword->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextPassword->ForeColor = System::Drawing::Color::White;
			this->TextPassword->Location = System::Drawing::Point(82, 255);
			this->TextPassword->Margin = System::Windows::Forms::Padding(5);
			this->TextPassword->Multiline = true;
			this->TextPassword->Name = L"TextPassword";
			this->TextPassword->PasswordChar = '*';
			this->TextPassword->Size = System::Drawing::Size(322, 40);
			this->TextPassword->TabIndex = 7;
			this->TextPassword->Text = L"*************";
			this->TextPassword->Click += gcnew System::EventHandler(this, &LogInMenu::TextPassword_Click);
			this->TextPassword->TextChanged += gcnew System::EventHandler(this, &LogInMenu::TextPassword_TextChanged);
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->BackColor = System::Drawing::Color::Transparent;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLabel->ForeColor = System::Drawing::Color::White;
			this->PasswordLabel->Location = System::Drawing::Point(79, 228);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(124, 33);
			this->PasswordLabel->TabIndex = 3;
			this->PasswordLabel->Text = L"Password";
			// 
			// CheckBoxAgree
			// 
			this->CheckBoxAgree->AutoSize = true;
			this->CheckBoxAgree->BackColor = System::Drawing::Color::Transparent;
			this->CheckBoxAgree->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CheckBoxAgree->ForeColor = System::Drawing::Color::White;
			this->CheckBoxAgree->Location = System::Drawing::Point(83, 341);
			this->CheckBoxAgree->Name = L"CheckBoxAgree";
			this->CheckBoxAgree->Size = System::Drawing::Size(157, 33);
			this->CheckBoxAgree->TabIndex = 9;
			this->CheckBoxAgree->Text = L"I agree to the ";
			this->CheckBoxAgree->UseVisualStyleBackColor = false;
			// 
			// ConditionText
			// 
			this->ConditionText->AutoSize = true;
			this->ConditionText->BackColor = System::Drawing::Color::Transparent;
			this->ConditionText->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10, System::Drawing::FontStyle::Bold));
			this->ConditionText->ForeColor = System::Drawing::Color::Blue;
			this->ConditionText->Location = System::Drawing::Point(207, 343);
			this->ConditionText->Name = L"ConditionText";
			this->ConditionText->Size = System::Drawing::Size(231, 29);
			this->ConditionText->TabIndex = 10;
			this->ConditionText->Text = L"Terms and Condiations";
			this->ConditionText->Click += gcnew System::EventHandler(this, &LogInMenu::ConditionText_Click);
			// 
			// LogIn
			// 
			this->LogIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->LogIn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->LogIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogIn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogIn->ForeColor = System::Drawing::Color::White;
			this->LogIn->Location = System::Drawing::Point(83, 400);
			this->LogIn->Name = L"LogIn";
			this->LogIn->Size = System::Drawing::Size(132, 50);
			this->LogIn->TabIndex = 0;
			this->LogIn->Text = L"Log In";
			this->LogIn->UseVisualStyleBackColor = false;
			this->LogIn->Click += gcnew System::EventHandler(this, &LogInMenu::LogIn_Click);
			// 
			// Register
			// 
			this->Register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Register->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Register->ForeColor = System::Drawing::Color::White;
			this->Register->Location = System::Drawing::Point(234, 400);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(127, 50);
			this->Register->TabIndex = 11;
			this->Register->Text = L"Register";
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &LogInMenu::Register_Click);
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::White;
			this->Back->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Back->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->ForeColor = System::Drawing::Color::Blue;
			this->Back->Location = System::Drawing::Point(389, 400);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(127, 50);
			this->Back->TabIndex = 12;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &LogInMenu::Exit_Button_Click);
			// 
			// LogInMenu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->ConditionText);
			this->Controls->Add(this->CheckBoxAgree);
			this->Controls->Add(this->TextPassword);
			this->Controls->Add(this->TextUser);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->UserLabel);
			this->Controls->Add(this->labelLogIn);
			this->Controls->Add(this->LogIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LogInMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &LogInMenu::LogIn_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogInMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void LogIn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		//MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users", conData);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where email = '" + this->TextUser->Text + "' and pass='" + this->TextPassword->Text + "';", conData);
		MySqlDataReader^ myRender;

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			int count = 0;
			//get User name
			String^ name;
			String^ rloe;
			String^ id;


			while (myRender->Read()) {
				count++;
				name = myRender->GetString("user_name");
				id = myRender->GetString("user_id");
				rloe = myRender->GetString("user_role");
			}
			if (count == 1 && rloe =="buyer") {
				this->~LogInMenu();
				BEBS::ShoppingMenu shop(name, id, lastForm);
				shop.ShowDialog();
			}

			else if (rloe == "admin") {
				this->~LogInMenu();
				BEBS::AdminMenu shop;
				shop.ShowDialog();
			}

			else if (count < 1) {
				MessageBox::Show("not found");
			}
			else if (count > 1) {
				MessageBox::Show("doplicate");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BEBS::RegisterMenu NewUser( this);
		NewUser.ShowDialog();
	}

	private: System::Void ConditionText_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void Exit_Button_Click(System::Object^ sender, System::EventArgs^ e) {

		this->~LogInMenu();
		lastForm->Show();
		
	}

	private: System::Void TextPassword_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TextPassword->Text = L"";
	}
	private: System::Void TextUser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TextUser->Text = L"";
	}
	private: System::Void TextUser_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
#pragma endregion

	private: System::Void LogIn_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void labelSign_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
