#pragma once

namespace BEBS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DiscountControl
	/// </summary>
	public ref class DiscountControl : public System::Windows::Forms::Form
	{
	public:
		DiscountControl(void)
		{
			InitializeComponent();
			fillListBox();
			fillCurrent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DiscountControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ discount;

	private: System::Windows::Forms::TextBox^ start;

	private: System::Windows::Forms::TextBox^ end;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ block;
	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ SAVE;
	private: System::Windows::Forms::PictureBox^ HomePage;
	private: System::Windows::Forms::TextBox^ id_tet;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DiscountControl::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->discount = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::TextBox());
			this->end = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->block = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->SAVE = (gcnew System::Windows::Forms::Button());
			this->HomePage = (gcnew System::Windows::Forms::PictureBox());
			this->id_tet = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->label5->Location = System::Drawing::Point(47, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 33);
			this->label5->TabIndex = 28;
			this->label5->Text = L"BEBS Discounts";
			// 
			// discount
			// 
			this->discount->BackColor = System::Drawing::Color::Black;
			this->discount->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->discount->ForeColor = System::Drawing::Color::White;
			this->discount->Location = System::Drawing::Point(53, 125);
			this->discount->Name = L"discount";
			this->discount->Size = System::Drawing::Size(485, 44);
			this->discount->TabIndex = 29;
			// 
			// start
			// 
			this->start->BackColor = System::Drawing::Color::Black;
			this->start->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->ForeColor = System::Drawing::Color::White;
			this->start->Location = System::Drawing::Point(53, 228);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(485, 44);
			this->start->TabIndex = 30;
			// 
			// end
			// 
			this->end->BackColor = System::Drawing::Color::Black;
			this->end->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->end->ForeColor = System::Drawing::Color::White;
			this->end->Location = System::Drawing::Point(46, 320);
			this->end->Name = L"end";
			this->end->Size = System::Drawing::Size(485, 44);
			this->end->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(47, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 33);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Current Discount";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(47, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 33);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Date Start";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(40, 284);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 33);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Date End";
			// 
			// block
			// 
			this->block->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->block->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->block->ForeColor = System::Drawing::Color::White;
			this->block->Location = System::Drawing::Point(411, 458);
			this->block->Name = L"block";
			this->block->Size = System::Drawing::Size(127, 50);
			this->block->TabIndex = 35;
			this->block->Text = L"Delete";
			this->block->UseVisualStyleBackColor = false;
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->edit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::White;
			this->edit->Location = System::Drawing::Point(232, 461);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(127, 50);
			this->edit->TabIndex = 36;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = false;
			// 
			// SAVE
			// 
			this->SAVE->BackColor = System::Drawing::Color::Chartreuse;
			this->SAVE->ForeColor = System::Drawing::Color::White;
			this->SAVE->Location = System::Drawing::Point(53, 461);
			this->SAVE->Name = L"SAVE";
			this->SAVE->Size = System::Drawing::Size(144, 50);
			this->SAVE->TabIndex = 37;
			this->SAVE->Text = L"Add";
			this->SAVE->UseVisualStyleBackColor = false;
			// 
			// HomePage
			// 
			this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
			this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomePage->Location = System::Drawing::Point(988, 39);
			this->HomePage->Name = L"HomePage";
			this->HomePage->Size = System::Drawing::Size(40, 40);
			this->HomePage->TabIndex = 38;
			this->HomePage->TabStop = false;
			// 
			// id_tet
			// 
			this->id_tet->BackColor = System::Drawing::Color::Black;
			this->id_tet->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_tet->ForeColor = System::Drawing::Color::White;
			this->id_tet->Location = System::Drawing::Point(46, 408);
			this->id_tet->Name = L"id_tet";
			this->id_tet->Size = System::Drawing::Size(485, 44);
			this->id_tet->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(47, 372);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 33);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Id";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Black;
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(630, 145);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(310, 244);
			this->listBox1->TabIndex = 42;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::listBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(624, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 33);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Expired Discounts";
			// 
			// DiscountControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1076, 536);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->id_tet);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->SAVE);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->block);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->end);
			this->Controls->Add(this->start);
			this->Controls->Add(this->discount);
			this->Controls->Add(this->label5);
			this->Name = L"DiscountControl";
			this->Text = L"DiscountControl";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: Void fillListBox(void) {
			   String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
			   MySqlConnection^ conData = gcnew MySqlConnection(con);
			   MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts;", conData);
			   MySqlDataReader^ myRender;

			   try {
				   conData->Open();
				   myRender = cmdDB->ExecuteReader();
				   while (myRender->Read()) {
					   String^ vpercent = myRender->GetString("percent");
					   String^ vfrom = myRender->GetString("date_from");
					   String^ vuntil = myRender->GetString("date_until");
					   String^ vid = myRender->GetInt32("discount_id").ToString();

					   listBox1->Items->Add(vpercent + "% ,FROM " + vfrom + " TO " + vuntil);
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }

private: Void fillCurrent(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts  where (date_from >= '2020-12-30' and  date_until <= '2021-02-20');", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vpercent = myRender->GetString("percent");
			String^ vfrom = myRender->GetString("date_from");
			String^ vuntil = myRender->GetString("date_until");
			String^ vid = myRender->GetInt32("discount_id").ToString();

			id_tet->Text = vid;
			discount->Text = vpercent;
			start->Text = vfrom;
			end->Text = vuntil;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
