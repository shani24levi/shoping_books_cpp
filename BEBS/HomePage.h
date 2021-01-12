#pragma once


namespace BEBS {
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class HomePage : public System::Windows::Forms::Form
	{

	public:
		HomePage(void)
		{
			InitializeComponent();

		}
		HomePage(int a)
		{
			InitializeComponent();

		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelSign;
	private: System::Windows::Forms::Button^ Register;
	private: System::Windows::Forms::Button^ LogIn;
	private: System::Windows::Forms::Button^ buttonShopping;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->labelSign = (gcnew System::Windows::Forms::Label());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->LogIn = (gcnew System::Windows::Forms::Button());
			this->buttonShopping = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelSign
			// 
			this->labelSign->AutoSize = true;
			this->labelSign->BackColor = System::Drawing::Color::Transparent;
			this->labelSign->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSign->ForeColor = System::Drawing::Color::White;
			this->labelSign->Location = System::Drawing::Point(79, 39);
			this->labelSign->Name = L"labelSign";
			this->labelSign->Size = System::Drawing::Size(239, 57);
			this->labelSign->TabIndex = 3;
			this->labelSign->Text = L"Home Page";
			this->labelSign->Click += gcnew System::EventHandler(this, &HomePage::labelSign_Click);
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
			this->Register->Location = System::Drawing::Point(89, 199);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(280, 50);
			this->Register->TabIndex = 0;
			this->Register->Text = L"Register";
			this->Register->UseVisualStyleBackColor = false;
			this->Register->Click += gcnew System::EventHandler(this, &HomePage::Register_Click_1);
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
			this->LogIn->Location = System::Drawing::Point(89, 118);
			this->LogIn->Name = L"LogIn";
			this->LogIn->Size = System::Drawing::Size(280, 50);
			this->LogIn->TabIndex = 1;
			this->LogIn->Text = L"Log In";
			this->LogIn->UseVisualStyleBackColor = false;
			this->LogIn->Click += gcnew System::EventHandler(this, &HomePage::LogIn_Click);
			// 
			// buttonShopping
			// 
			this->buttonShopping->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonShopping->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->buttonShopping->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShopping->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonShopping->ForeColor = System::Drawing::Color::White;
			this->buttonShopping->Location = System::Drawing::Point(89, 281);
			this->buttonShopping->Name = L"buttonShopping";
			this->buttonShopping->Size = System::Drawing::Size(280, 50);
			this->buttonShopping->TabIndex = 2;
			this->buttonShopping->Text = L"BUY NOW";
			this->buttonShopping->UseVisualStyleBackColor = false;
			this->buttonShopping->Click += gcnew System::EventHandler(this, &HomePage::buttonShopping_Click);
			// 
			// HomePage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->labelSign);
			this->Controls->Add(this->buttonShopping);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->LogIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HomePage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void LogIn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BEBS::LogInMenu logIn(this);
		logIn.ShowDialog();

	}
	private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void labelSign_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonShopping_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BEBS::ShoppingMenu shoping(this);
		shoping.ShowDialog();
	}
private: System::Void Register_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::RegisterMenu NewUser(this);
	NewUser.ShowDialog();
}
};
}
