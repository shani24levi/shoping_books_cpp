#pragma once

namespace BEBS {
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class ShoppingMenu : public System::Windows::Forms::Form
	{

	public:
		ShoppingMenu(void)
		{
			InitializeComponent();
			this->UserName->Text = L"LogIn";
		}
		ShoppingMenu(Form^ lastForm)
		{
			this->lastForm = lastForm;
			InitializeComponent();
			this->UserName->Text = L"LogIn";
		}
		ShoppingMenu(String^ Name, Form^ lastForm)
		{
			this->lastForm = lastForm;
			InitializeComponent();
			this->UserName->Text = Name;
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~ShoppingMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextSearch;
	protected:

	private: System::Windows::Forms::PictureBox^ CartIcon;
	protected:



	private:  Form^ lastForm;

	private: System::Windows::Forms::PictureBox^ SearchIcon;
	private: System::Windows::Forms::PictureBox^ profile;

	private: System::Windows::Forms::Label^ UserName;
	private: System::Windows::Forms::PictureBox^ HomePage;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShoppingMenu::typeid));
			this->TextSearch = (gcnew System::Windows::Forms::TextBox());
			this->CartIcon = (gcnew System::Windows::Forms::PictureBox());
			this->SearchIcon = (gcnew System::Windows::Forms::PictureBox());
			this->profile = (gcnew System::Windows::Forms::PictureBox());
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->HomePage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CartIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
			this->SuspendLayout();
			// 
			// TextSearch
			// 
			this->TextSearch->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TextSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextSearch->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextSearch->ForeColor = System::Drawing::Color::White;
			this->TextSearch->Location = System::Drawing::Point(57, 57);
			this->TextSearch->Margin = System::Windows::Forms::Padding(5);
			this->TextSearch->Multiline = true;
			this->TextSearch->Name = L"TextSearch";
			this->TextSearch->Size = System::Drawing::Size(435, 40);
			this->TextSearch->TabIndex = 4;
			this->TextSearch->TextChanged += gcnew System::EventHandler(this, &ShoppingMenu::TextSearch_TextChanged);
			// 
			// CartIcon
			// 
			this->CartIcon->BackColor = System::Drawing::Color::Transparent;
			this->CartIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CartIcon.BackgroundImage")));
			this->CartIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CartIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CartIcon->Location = System::Drawing::Point(532, 57);
			this->CartIcon->Name = L"CartIcon";
			this->CartIcon->Size = System::Drawing::Size(49, 40);
			this->CartIcon->TabIndex = 5;
			this->CartIcon->TabStop = false;
			// 
			// SearchIcon
			// 
			this->SearchIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchIcon.BackgroundImage")));
			this->SearchIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SearchIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchIcon->Location = System::Drawing::Point(451, 57);
			this->SearchIcon->Name = L"SearchIcon";
			this->SearchIcon->Size = System::Drawing::Size(49, 40);
			this->SearchIcon->TabIndex = 6;
			this->SearchIcon->TabStop = false;
			// 
			// profile
			// 
			this->profile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile.BackgroundImage")));
			this->profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->profile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->profile->Location = System::Drawing::Point(825, 57);
			this->profile->Name = L"profile";
			this->profile->Size = System::Drawing::Size(40, 40);
			this->profile->TabIndex = 7;
			this->profile->TabStop = false;
			this->profile->Click += gcnew System::EventHandler(this, &ShoppingMenu::profile_Click);
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->ForeColor = System::Drawing::Color::White;
			this->UserName->Location = System::Drawing::Point(822, 100);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(0, 24);
			this->UserName->TabIndex = 8;
			this->UserName->Click += gcnew System::EventHandler(this, &ShoppingMenu::profile_Click);
			// 
			// HomePage
			// 
			this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
			this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomePage->Location = System::Drawing::Point(978, 57);
			this->HomePage->Name = L"HomePage";
			this->HomePage->Size = System::Drawing::Size(40, 40);
			this->HomePage->TabIndex = 9;
			this->HomePage->TabStop = false;
			this->HomePage->Click += gcnew System::EventHandler(this, &ShoppingMenu::HomePage_Click);
			// 
			// ShoppingMenu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->profile);
			this->Controls->Add(this->SearchIcon);
			this->Controls->Add(this->CartIcon);
			this->Controls->Add(this->TextSearch);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ShoppingMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &ShoppingMenu::ShoppingMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CartIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ShoppingMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void TextSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
		this->~ShoppingMenu();
		lastForm->Show();
	}
	private: System::Void profile_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->UserName->Text == "LogIn")
		{
			this->~ShoppingMenu();
			lastForm->Show();
		}
	}

};
}
