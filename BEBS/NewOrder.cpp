#include "pch.h"
#include "NewOrder.h"
#include <string.h>


void BEBS::NewOrder::InitializeComponent(void)
{
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewOrder::typeid));
    this->backOrders = (gcnew System::Windows::Forms::PictureBox());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->bookName = (gcnew System::Windows::Forms::TextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->auther = (gcnew System::Windows::Forms::TextBox());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->amount = (gcnew System::Windows::Forms::TextBox());
    this->ok = (gcnew System::Windows::Forms::Button());
    this->listBox2 = (gcnew System::Windows::Forms::ListBox());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->delet = (gcnew System::Windows::Forms::Button());
    this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->Order = (gcnew System::Windows::Forms::GroupBox());
    this->send = (gcnew System::Windows::Forms::Button());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->listBox1 = (gcnew System::Windows::Forms::ListBox());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOrders))->BeginInit();
    this->Order->SuspendLayout();
    this->SuspendLayout();
    // 
    // backOrders
    // 
    this->backOrders->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backOrders.BackgroundImage")));
    this->backOrders->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->backOrders->Cursor = System::Windows::Forms::Cursors::Hand;
    this->backOrders->Location = System::Drawing::Point(1022, 39);
    this->backOrders->Name = L"backOrders";
    this->backOrders->Size = System::Drawing::Size(40, 40);
    this->backOrders->TabIndex = 52;
    this->backOrders->TabStop = false;
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->BackColor = System::Drawing::Color::Transparent;
    this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label2->ForeColor = System::Drawing::Color::White;
    this->label2->Location = System::Drawing::Point(52, 50);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(201, 33);
    this->label2->TabIndex = 53;
    this->label2->Text = L"Choos from books";
    this->label2->Click += gcnew System::EventHandler(this, &NewOrder::label2_Click);
    // 
    // comboBox1
    // 
    this->comboBox1->BackColor = System::Drawing::Color::Black;
    this->comboBox1->ForeColor = System::Drawing::Color::White;
    this->comboBox1->FormattingEnabled = true;
    this->comboBox1->Location = System::Drawing::Point(58, 86);
    this->comboBox1->Name = L"comboBox1";
    this->comboBox1->Size = System::Drawing::Size(280, 32);
    this->comboBox1->TabIndex = 54;
    this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &NewOrder::comboBox1_SelectedIndexChanged);
    // 
    // label3
    // 
    this->label3->AutoSize = true;
    this->label3->BackColor = System::Drawing::Color::Transparent;
    this->label3->ForeColor = System::Drawing::Color::White;
    this->label3->Location = System::Drawing::Point(53, 149);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(114, 25);
    this->label3->TabIndex = 56;
    this->label3->Text = L"Book Name";
    // 
    // bookName
    // 
    this->bookName->BackColor = System::Drawing::Color::Black;
    this->bookName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->bookName->ForeColor = System::Drawing::Color::White;
    this->bookName->Location = System::Drawing::Point(58, 177);
    this->bookName->Name = L"bookName";
    this->bookName->Size = System::Drawing::Size(280, 44);
    this->bookName->TabIndex = 55;
    // 
    // label1
    // 
    this->label1->AutoSize = true;
    this->label1->BackColor = System::Drawing::Color::Transparent;
    this->label1->ForeColor = System::Drawing::Color::White;
    this->label1->Location = System::Drawing::Point(53, 247);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(120, 25);
    this->label1->TabIndex = 58;
    this->label1->Text = L"Book Auther";
    // 
    // auther
    // 
    this->auther->BackColor = System::Drawing::Color::Black;
    this->auther->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->auther->ForeColor = System::Drawing::Color::White;
    this->auther->Location = System::Drawing::Point(58, 275);
    this->auther->Name = L"auther";
    this->auther->Size = System::Drawing::Size(280, 44);
    this->auther->TabIndex = 57;
    // 
    // label4
    // 
    this->label4->AutoSize = true;
    this->label4->BackColor = System::Drawing::Color::Transparent;
    this->label4->ForeColor = System::Drawing::Color::White;
    this->label4->Location = System::Drawing::Point(53, 349);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(85, 25);
    this->label4->TabIndex = 60;
    this->label4->Text = L"Amount ";
    // 
    // amount
    // 
    this->amount->BackColor = System::Drawing::Color::Black;
    this->amount->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->amount->ForeColor = System::Drawing::Color::White;
    this->amount->Location = System::Drawing::Point(58, 377);
    this->amount->Name = L"amount";
    this->amount->Size = System::Drawing::Size(280, 44);
    this->amount->TabIndex = 59;
    // 
    // ok
    // 
    this->ok->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(192)));
    this->ok->Cursor = System::Windows::Forms::Cursors::Hand;
    this->ok->FlatAppearance->BorderColor = System::Drawing::Color::White;
    this->ok->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->ok->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->ok->ForeColor = System::Drawing::Color::White;
    this->ok->Location = System::Drawing::Point(58, 469);
    this->ok->Name = L"ok";
    this->ok->Size = System::Drawing::Size(280, 50);
    this->ok->TabIndex = 61;
    this->ok->Text = L"OK";
    this->ok->UseVisualStyleBackColor = false;
    this->ok->Click += gcnew System::EventHandler(this, &NewOrder::ok_Click);
    // 
    // listBox2
    // 
    this->listBox2->BackColor = System::Drawing::Color::Black;
    this->listBox2->ForeColor = System::Drawing::Color::White;
    this->listBox2->FormattingEnabled = true;
    this->listBox2->ItemHeight = 24;
    this->listBox2->Location = System::Drawing::Point(387, 86);
    this->listBox2->Name = L"listBox2";
    this->listBox2->Size = System::Drawing::Size(186, 340);
    this->listBox2->TabIndex = 62;
    this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &NewOrder::listBox2_SelectedIndexChanged);
    // 
    // label5
    // 
    this->label5->AutoSize = true;
    this->label5->BackColor = System::Drawing::Color::Transparent;
    this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label5->ForeColor = System::Drawing::Color::White;
    this->label5->Location = System::Drawing::Point(381, 50);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(146, 33);
    this->label5->TabIndex = 63;
    this->label5->Text = L"Order Ditayls";
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
    this->delet->Location = System::Drawing::Point(497, 432);
    this->delet->Name = L"delet";
    this->delet->Size = System::Drawing::Size(126, 43);
    this->delet->TabIndex = 64;
    this->delet->Text = L"Delete";
    this->delet->TextAlign = System::Drawing::ContentAlignment::TopRight;
    this->delet->UseVisualStyleBackColor = false;
    this->delet->Click += gcnew System::EventHandler(this, &NewOrder::delet_Click);
    // 
    // comboBox2
    // 
    this->comboBox2->BackColor = System::Drawing::Color::Black;
    this->comboBox2->ForeColor = System::Drawing::Color::White;
    this->comboBox2->FormattingEnabled = true;
    this->comboBox2->Location = System::Drawing::Point(28, 118);
    this->comboBox2->Name = L"comboBox2";
    this->comboBox2->Size = System::Drawing::Size(280, 32);
    this->comboBox2->TabIndex = 66;
    // 
    // label6
    // 
    this->label6->AutoSize = true;
    this->label6->BackColor = System::Drawing::Color::Transparent;
    this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label6->ForeColor = System::Drawing::Color::White;
    this->label6->Location = System::Drawing::Point(22, 63);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(106, 33);
    this->label6->TabIndex = 65;
    this->label6->Text = L"Provider ";
    // 
    // button1
    // 
    this->button1->BackColor = System::Drawing::Color::ForestGreen;
    this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
    this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->button1->ForeColor = System::Drawing::Color::White;
    this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
    this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
    this->button1->Location = System::Drawing::Point(264, 51);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(44, 43);
    this->button1->TabIndex = 67;
    this->button1->TextAlign = System::Drawing::ContentAlignment::TopRight;
    this->button1->UseVisualStyleBackColor = false;
    this->button1->Click += gcnew System::EventHandler(this, &NewOrder::button1_Click);
    // 
    // Order
    // 
    this->Order->BackColor = System::Drawing::Color::Transparent;
    this->Order->Controls->Add(this->send);
    this->Order->Controls->Add(this->label7);
    this->Order->Controls->Add(this->button1);
    this->Order->Controls->Add(this->label6);
    this->Order->Controls->Add(this->comboBox2);
    this->Order->ForeColor = System::Drawing::Color::White;
    this->Order->Location = System::Drawing::Point(724, 86);
    this->Order->Name = L"Order";
    this->Order->Size = System::Drawing::Size(338, 340);
    this->Order->TabIndex = 68;
    this->Order->TabStop = false;
    this->Order->Text = L"groupBox1";
    // 
    // send
    // 
    this->send->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(192)));
    this->send->Cursor = System::Windows::Forms::Cursors::Hand;
    this->send->FlatAppearance->BorderColor = System::Drawing::Color::White;
    this->send->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->send->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->send->ForeColor = System::Drawing::Color::White;
    this->send->Location = System::Drawing::Point(28, 238);
    this->send->Name = L"send";
    this->send->Size = System::Drawing::Size(280, 50);
    this->send->TabIndex = 69;
    this->send->Text = L"Send Order";
    this->send->UseVisualStyleBackColor = false;
    this->send->Click += gcnew System::EventHandler(this, &NewOrder::send_Click);
    // 
    // label7
    // 
    this->label7->AutoSize = true;
    this->label7->BackColor = System::Drawing::Color::Transparent;
    this->label7->ForeColor = System::Drawing::Color::White;
    this->label7->Location = System::Drawing::Point(7, 225);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(0, 25);
    this->label7->TabIndex = 72;
    // 
    // listBox1
    // 
    this->listBox1->BackColor = System::Drawing::Color::Black;
    this->listBox1->ForeColor = System::Drawing::Color::White;
    this->listBox1->FormattingEnabled = true;
    this->listBox1->ItemHeight = 24;
    this->listBox1->Location = System::Drawing::Point(563, 86);
    this->listBox1->Name = L"listBox1";
    this->listBox1->Size = System::Drawing::Size(87, 340);
    this->listBox1->TabIndex = 69;
    // 
    // NewOrder
    // 
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
    this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->ClientSize = System::Drawing::Size(1115, 582);
    this->Controls->Add(this->listBox1);
    this->Controls->Add(this->Order);
    this->Controls->Add(this->delet);
    this->Controls->Add(this->label5);
    this->Controls->Add(this->listBox2);
    this->Controls->Add(this->ok);
    this->Controls->Add(this->label4);
    this->Controls->Add(this->amount);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->auther);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->bookName);
    this->Controls->Add(this->comboBox1);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->backOrders);
    this->Name = L"NewOrder";
    this->Text = L"NewOrder";
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backOrders))->EndInit();
    this->Order->ResumeLayout(false);
    this->Order->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}

void BEBS::NewOrder::fillBooks(void) {
	MySQL db;
	db.booksCom(this->comboBox1);
}

void BEBS::NewOrder::fillProviders(void) {
    MySQL db;
    db.providerCom(this->comboBox2);
}

System::Void BEBS::NewOrder::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    String^ comboVal = comboBox1->Text;
    MySQL db;
    this->idBook= db.bookChange(comboVal,this->idBook, this->bookName, this->auther, this->amount);
}

void BEBS::NewOrder::bookOK() {
    try {
        listBox2->Items->Add(this->bookName->Text);
        listBox1->Items->Add(this->amount->Text);

    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
}

System::Void BEBS::NewOrder::ok_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->idBook != -1) {
        if (this->amount->Text == "") {
            MessageBox::Show("Plese choose amount");
        }
        else
        {
            this->bookOK();
        }
    }
    else
    {
        if (this->bookName->Text!="" && this->auther->Text != "" && this->amount->Text != "") {
            this->bookOK();
            //not add to books table 
        }
        else
            MessageBox::Show("Plese Fill All Book detayls");
    }
}

System::Void BEBS::NewOrder::delet_Click(System::Object^ sender, System::EventArgs^ e) {
    if (listBox2->Text != "") {
        listBox2->Items->RemoveAt(listBox2->SelectedIndex);
    }
}


System::Void BEBS::NewOrder::send_Click(System::Object^ sender, System::EventArgs^ e) {
  //for now it will be send as a one order for each book on the list 
    try {
        if (listBox2->Text != "" && listBox1->Text != "") {
            MySQL db;
            Boolean^ isOk = db.sendOrder(this->listBox2, this->listBox1, this->comboBox2);
            if (isOk) {
                MessageBox::Show("order sended to provider");
                this->~NewOrder();
                BEBS::OrdersControl or;
                or.ShowDialog();
            }
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }

}

