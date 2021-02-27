#pragma once

namespace BEBS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewOrder
	/// </summary>
	public ref class NewOrder : public System::Windows::Forms::Form
	{
	public:
		NewOrder(void)
		{
			InitializeComponent();
			fillBooks();
			fillProviders();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ backOrders;
	protected:
		Int32^ idBook = -1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ bookName;
	

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ auther;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ amount;
	private: System::Windows::Forms::Button^ ok;


	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ delet;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ Order;
	private: System::Windows::Forms::Button^ send;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox1;






	protected:

	private:
		System::ComponentModel::Container ^components;
		void InitializeComponent(void);
		void fillBooks(void);
		void fillProviders(void);
		void bookOK();

#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delet_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void send_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
