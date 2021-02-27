
#pragma once

	public ref class MySQL
	{
		/**
		 *--------------------------------------------------------------------
		 *       Class:  MySQL
		 *      Method:  MySQL :: MySQL()
		 * Description:  Constructor to conect database conectivity
		 *--------------------------------------------------------------------
		 */
	public:
		String^ constr;
		MySqlConnection^ conData;

		MySQL();
		
		User^ getInstaseUser(strP user, strP password);
		void deleteBook(strP s);

		void updateBook(strP title, strP page, strP section, strP price, strP amount, strP info,
			strP img, strP author, strP id);
		void createNewBook(strP title, strP page, strP section, strP price, strP amount, strP info,
			strP img, strP author);
		Boolean  addNewUser(strP email, strP password, strP name);
		BindingSource^ GetBookTable();
		BindingSource^ GetUserTable();
		Book^ getListOfBook();
		Book^ searchBooks(strP s);
		void setValueChart(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1, MySqlCommand^ cmdDB);
		void setValueChart2(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2, MySqlCommand^ cmdDB);

		void quarterlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void quarterlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2);

		void monthlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void monthlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2);


		void weeklyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void weeklySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2);

		//users control fanctions 
		void setUsersTabel(System::Windows::Forms::ListBox^ listBoxTable, MySqlCommand^ cmdDB);
		void UsersList(System::Windows::Forms::ListBox^ listBoxTable);

		Boolean^ setEditUser(MySqlCommand^ cmdDB);
		Boolean^ editUser(System::Windows::Forms::TextBox^ textBoxlName, System::Windows::Forms::TextBox^ textBoxEmail, System::Windows::Forms::TextBox^ textBoxSTA);

		//void setListChange(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ textBoxlName, System::Windows::Forms::TextBox^ textBoxEmail, System::Windows::Forms::TextBox^ textBoxDate, System::Windows::Forms::TextBox^ textBoxSTA);
		//void listChange(String^ listVal, System::Windows::Forms::TextBox^ textBoxlName, System::Windows::Forms::TextBox^ textBoxEmail, System::Windows::Forms::TextBox^ textBoxDate, System::Windows::Forms::TextBox^ textBoxSTA);


		Boolean^ setBlockUser(MySqlCommand^ cmdDB);
		Boolean^ blockUser(System::Windows::Forms::TextBox^ textBoxEmail);

		//order controll
		void setOrderCom(System::Windows::Forms::ComboBox^ comboBox1, MySqlCommand^ cmdDB);
		void orderList(System::Windows::Forms::ComboBox^ comboBox1);
		
		Boolean^ setOrderUpdate(MySqlCommand^ cmdDB);
		Boolean^ updateOrder(System::Windows::Forms::TextBox^ status_txt, System::Windows::Forms::TextBox^ id_txt, System::Windows::Forms::TextBox^ date_txt, System::Windows::Forms::TextBox^ amount_txt, System::Windows::Forms::TextBox^ provider_txt, System::Windows::Forms::TextBox^ book_txt);

		Boolean^ setOrderDelete(MySqlCommand^ cmdDB);
		Boolean^ deleteOrder(System::Windows::Forms::TextBox^ id_txt);

		void setOrderChange(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ status_txt, System::Windows::Forms::TextBox^ id_txt, System::Windows::Forms::TextBox^ date_txt, System::Windows::Forms::TextBox^ amount_txt, System::Windows::Forms::TextBox^ provider_txt, System::Windows::Forms::TextBox^ book_txt);
		void orderChange(String^ comboVal, System::Windows::Forms::TextBox^ status_txt, System::Windows::Forms::TextBox^ id_txt, System::Windows::Forms::TextBox^ date_txt, System::Windows::Forms::TextBox^ amount_txt, System::Windows::Forms::TextBox^ provider_txt, System::Windows::Forms::TextBox^ book_txt);


		//discount control
		void setdDiscountList(MySqlCommand^ cmdDB, System::Windows::Forms::ListBox^ listBox1);
		void discountList(System::Windows::Forms::ListBox^ listBox1);

		void setdDiscountList2(MySqlCommand^ cmdDB, System::Windows::Forms::ListBox^ listBox2, System::Windows::Forms::ComboBox^ comboBox1);
		void discountList2(System::Windows::Forms::ListBox^ listBox2, System::Windows::Forms::ComboBox^ comboBox1);

		//System::Windows::Forms::TextBox^ id_tet,System::Windows::Forms::TextBox^ discount,System::Windows::Forms::TextBox^ start,System::Windows::Forms::TextBox^ end
		void setDiscountCurr(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
		void discountCurr(System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
	
		Int32^ setID(MySqlCommand^ cmdDB);
		Int32^ getID();

		Boolean^ setNew(MySqlCommand^ cmdDB,Int32^ idVal, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
		Boolean^ insertNew(Int32^ idVal, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
	
		void setVal(MySqlCommand^ cmdDB, String^ listVal, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
		void changeVal(String^ listVal, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);

		Boolean^ setEditVal(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
		Boolean^ editVal(System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end);
		
		void setBooksByAmount(MySqlCommand^ cmdDB, System::Windows::Forms::DataGridView^ booksTable);
		void booksByAmount(System::Windows::Forms::DataGridView^ booksTable);
		
		void setBooksCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox1);
		void booksCom(System::Windows::Forms::ComboBox^ comboBox1);

		Int32^ setBookChange(MySqlCommand^ cmdDB, String^ comboVal, Int32^ idBook, System::Windows::Forms::TextBox^ bookName, System::Windows::Forms::TextBox^ auther, System::Windows::Forms::TextBox^ amount);
		Int32^ bookChange(String^ comboVal, Int32^ idBook, System::Windows::Forms::TextBox^ bookName, System::Windows::Forms::TextBox^ auther, System::Windows::Forms::TextBox^ amount);
	
		Int32^ getIDBook();
		void createBook(System::Windows::Forms::TextBox^ bookName, System::Windows::Forms::TextBox^ auther);

		void setProviderCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox2);
		void providerCom(System::Windows::Forms::ComboBox^ comboBox2);
		
		Int32^ MySQL::getIDBookByName(System::Windows::Forms::ListBox^ listBox2);

		Int32^ seGetIdOrder(MySqlCommand^ cmdDB);
		Int32^ getIdOrder();

		Boolean^ sendOrder(System::Windows::Forms::ListBox^ listBox2, System::Windows::Forms::ListBox^ listBox1, System::Windows::Forms::ComboBox^ comboBox2);

	protected:
		~MySQL();



};


