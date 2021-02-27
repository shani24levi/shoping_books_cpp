#include "pch.h"
#include <typeinfo>  //for 'typeid' to work 

MySQL::MySQL()
{
	constr = "datasource=localhost; port=3306; username=root; password=shanilevi24";
	conData = gcnew MySqlConnection(constr);
}

User^ MySQL::getInstaseUser(strP user, strP password)
{
	User^ t = nullptr;
	//select * from book_store.users password and user
	MySqlCommand^  cmdDB = gcnew MySqlCommand("select  * from book_store.users where email = '" + user + "' and pass='" + password + "';", conData);
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		strP userRole, userId, email, name, lastActivity;
		if (myRender->Read())
		{
			userRole = myRender->GetString("user_role");
			userId = myRender->GetString("user_id");
			name= myRender->GetString("user_name");
			lastActivity = myRender->GetString("last_activity");
			if (userRole == "Admin")
				t= gcnew Manager(userRole, userId, email, name, lastActivity);
			else
				t= gcnew Coustomer(userRole, userId, email, name, lastActivity);
		}
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return t;
}
Boolean  MySQL::addNewUser(strP email, strP password, strP name)
{
	MySqlCommand^ cmdDB;
	cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`users`(`user_name`,`email`,`pass`)VALUES('" + name + "','" + email + "','" + password + "');", conData);
	try {
		conData->Open();
		MySqlDataReader^ my_reader = cmdDB->ExecuteReader();
		my_reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
	conData->Close();
	return true;
}


BindingSource^ MySQL::GetBookTable()
{
	BindingSource^ bSource = gcnew BindingSource();
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1;", conData);
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ table = gcnew DataTable();
		sda->Fill(table);
		bSource->DataSource = table;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return bSource;
}


BindingSource^ MySQL::GetUserTable()
{
	BindingSource^ bSource = gcnew BindingSource();
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users ;", conData);
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ table = gcnew DataTable();
		sda->Fill(table);
		bSource->DataSource = table;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	return bSource;
}

MySQL::~MySQL()
{

}
Book^ getBookMyRender(MySqlDataReader^ myRender)
{
	strP bookId = myRender->GetString("book_id"),
		title = myRender->GetString("title"),
		pages = myRender->GetString("pages"),
		section = myRender->GetString("section"),
		price = myRender->GetString("price"),
		amount = myRender->GetString("amount"),
		publishDate = myRender->GetString("publish_date"),
		info = myRender->GetString("info"),
		img = "Image\\books\\" + myRender->GetString("img"),
		authorName = myRender->GetString("author");
	return gcnew Book(bookId, title, pages, section, price, amount, publishDate, info,img, authorName,nullptr);
}
Book^ MySQL::getListOfBook()
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1;", conData);
	Book^ head = nullptr,^next = nullptr;
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		if (myRender->Read())
		{
			head = getBookMyRender(myRender);
			next = head;
		}
		while (myRender->Read())
		{
			next->next = getBookMyRender(myRender);
			next = safe_cast<Book^>(next->next);
		}
		
		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return head;
}
Book^ MySQL::searchBooks(strP s)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where amount>1 and CONCAT(`book_id`,`title`,`pages`, `section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) LIKE '%"+s+"%';", conData);
	Book^ head = nullptr, ^next = nullptr;
	try {
		conData->Open();
		MySqlDataReader^ myRender = cmdDB->ExecuteReader();
		if (myRender->Read())
		{
			head = getBookMyRender(myRender);
			next = head;
		}
		while (myRender->Read())
		{
			next->next = getBookMyRender(myRender);
			next = safe_cast<Book^>(next->next);
		}

		myRender->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	conData->Close();
	return head;
}
//SELECT trackid, name FROM tracks WHERE name LIKE 'Wild%'
void MySQL::deleteBook(strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.books where book_id='" + id + "' ;", conData);
	MySqlDataReader^ myRender;
	Book^ head = nullptr, ^next = nullptr;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::updateBook(strP title, strP page, strP section, strP price, strP amount,strP info, strP img, strP author, strP id)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.books set title='" + title + "',pages='" + page + "',section='" + section + "',price= '" + 
											price + "' ,amount='" + amount + "',info='" + info + "',author='" + author +
											"',img='" + img + "' where book_id='" + id + "' ;", conData);
	MySqlDataReader^ myRender; 
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

void  MySQL::createNewBook(strP title, strP page, strP section, strP price, strP amount, strP info,
	strP img, strP author)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`books`(`title`,`pages` ,`section`,`price`,`amount`,`info`,`img`,`author`) VALUES('" 
											 + title + "','" + page + "','" + section + "', '" + price + "' ,'" + amount + "','" + info+ "','"
											 + img + "','" + author + "');", conData);
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

void MySQL::setValueChart(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1, MySqlCommand^ cmdDB)
{
	MySqlDataReader^ myRender;
	chart1->Series["Books"]->Points->Clear();
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			chart1->Series["Books"]->Points->AddXY(myRender->GetString("Id"), myRender->GetInt32("Price"));
		}
		conData->Close();
	
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSorce = gcnew BindingSource();
		bSorce->DataSource = dbdataset;
		dataGridView1->DataSource = bSorce;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::setValueChart2(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2, MySqlCommand^ cmdDB)
{
	MySqlDataReader^ myRender;
	chart2->Series["Books"]->Points->Clear();
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		while (myRender->Read()) {
			String^ vtitle = myRender->GetString("title");
			String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();
			chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
		}
		conData->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


void  MySQL::quarterlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select bl.book_id as Id, b.title as Title, sum(b.price) as Price from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-06-01' and order_date <= '2021-01-01') group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);
	
}
void  MySQL::quarterlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-06-01' and order_date <= '2021-01-01') group by b.book_id;", conData);
	setValueChart2(chart2, cmdDB);

}


void  MySQL::monthlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (MONTH(order_date)=11 and Year(order_date)=2020) group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);

}
void  MySQL::monthlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.book_id;", conData);
	setValueChart2(chart2, cmdDB);
}


void  MySQL::weeklyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select bl.book_id as Id, b.title as Title, sum(b.price) as Price  from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.price;", conData);
	setValueChart(chart1, dataGridView1, cmdDB);

}
void  MySQL::weeklySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2)
{
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;", conData);
	setValueChart2(chart2, cmdDB);
}

//users control func
void MySQL::setUsersTabel(System::Windows::Forms::ListBox^ listBoxTable, MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vName;
			vName = myRender->GetString("user_name");
			listBoxTable->Items->Add(vName);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::UsersList(System::Windows::Forms::ListBox^ listBoxTable) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where user_role='buyer';", conData);
	setUsersTabel(listBoxTable, cmdDB);
}

Boolean^ MySQL::setEditUser(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Edited");
		while (myRender->Read()) {

		}
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
}
Boolean^ MySQL::editUser(System::Windows::Forms::TextBox^ textBoxlName, System::Windows::Forms::TextBox^ textBoxEmail, System::Windows::Forms::TextBox^ textBoxSTA) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_name='" + textBoxlName->Text + "',user_status='" + textBoxSTA->Text + "' where email='" + textBoxEmail->Text + "' ;", conData);
	Boolean^ isOk = setEditUser(cmdDB);
	return isOk;
}

Boolean^ MySQL::setBlockUser(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Blocked");
		while (myRender->Read()) {

		}
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}

}
Boolean^ MySQL::blockUser(System::Windows::Forms::TextBox^ textBoxEmail) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_status='OFF' where email='" + textBoxEmail->Text + "' ;", conData);
	Boolean^ isOk = setBlockUser(cmdDB);
	return isOk;
}

//order controll
void MySQL::setOrderCom(System::Windows::Forms::ComboBox^ comboBox1, MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vTitle;
			vTitle = myRender->GetString("order_provider_id");
			comboBox1->Items->Add(vTitle);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::orderList(System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_status='active';", conData);
	setOrderCom(comboBox1,cmdDB);
}

Boolean^ MySQL::setOrderUpdate(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}

}
Boolean^ MySQL::updateOrder(System::Windows::Forms::TextBox^ status_txt, System::Windows::Forms::TextBox^ id_txt, System::Windows::Forms::TextBox^ date_txt, System::Windows::Forms::TextBox^ amount_txt, System::Windows::Forms::TextBox^ provider_txt, System::Windows::Forms::TextBox^ book_txt) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.orders_from_provider set amount='" + amount_txt->Text + "',provider='" + provider_txt->Text + "',order_status='" + status_txt->Text + "',order_date='" + date_txt->Text + "' where order_provider_id='" + id_txt->Text + "' ;", conData);
	Boolean^ isOk = setOrderUpdate(cmdDB);
	return isOk;
}

Boolean^ MySQL::setOrderDelete(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
}
Boolean^ MySQL::deleteOrder(System::Windows::Forms::TextBox^ id_txt) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.orders_from_provider where order_provider_id='" + id_txt->Text + "' ;", conData);
	Boolean^ isOk = setOrderDelete(cmdDB);
	return isOk;
}


void MySQL::setOrderChange(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ status_txt, System::Windows::Forms::TextBox^ id_txt, System::Windows::Forms::TextBox^ date_txt, System::Windows::Forms::TextBox^ amount_txt, System::Windows::Forms::TextBox^ provider_txt, System::Windows::Forms::TextBox^ book_txt) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("order_provider_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vamount = myRender->GetInt32("amount").ToString();
			String^ vdate = myRender->GetDateTime("order_date").ToString();
			String^ vstatus = myRender->GetString("order_status");
			String^ vprovider = myRender->GetString("provider");

			//set vals to text box
			id_txt->Text = vId;
			book_txt->Text = vtitle;
			amount_txt->Text = vamount;
			date_txt->Text = vdate;
			status_txt->Text = vstatus;
			provider_txt->Text = vprovider;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::orderChange(String^ comboVal, System::Windows::Forms::TextBox^ status_txt, System::Windows::Forms::TextBox^ id_txt, System::Windows::Forms::TextBox^ date_txt, System::Windows::Forms::TextBox^ amount_txt, System::Windows::Forms::TextBox^ provider_txt, System::Windows::Forms::TextBox^ book_txt) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_provider_id='" + comboVal + "';", conData);
	setOrderChange(cmdDB, status_txt, id_txt, date_txt, amount_txt, provider_txt, book_txt);
}


//discount control
void MySQL::setdDiscountList(MySqlCommand^ cmdDB, System::Windows::Forms::ListBox^ listBox1) {
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
void MySQL::discountList(System::Windows::Forms::ListBox^ listBox1) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts  where (date_from >= '2018-01-01' and  date_until <= '2021-01-17');", conData);
	setdDiscountList(cmdDB, listBox1);
}


void MySQL::setdDiscountList2(MySqlCommand^ cmdDB, System::Windows::Forms::ListBox^ listBox2, System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vpercent = myRender->GetString("percent");
			String^ vfrom = myRender->GetString("date_from");
			String^ vuntil = myRender->GetString("date_until");
			String^ vid = myRender->GetInt32("discount_id").ToString();

			listBox2->Items->Add(vid + " : " + vpercent + "% ,FROM " + vfrom + " TO " + vuntil);
			comboBox1->Items->Add(vid);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::discountList2(System::Windows::Forms::ListBox^ listBox2, System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts where (date_from >= '2021-01-21' and  date_until <= '2021-12-30');", conData);
	setdDiscountList2(cmdDB, listBox2, comboBox1);
}

void MySQL::setDiscountCurr(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
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
void MySQL::discountCurr(System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts  where (date_from >= '2020-12-30' and  date_until <= '2021-02-20');", conData);
	setDiscountCurr(cmdDB, id_tet, discount, start, end);
}

Int32^ MySQL::setID(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender0;
	Int32^ vId;
	try {
		conData->Open();
		myRender0 = cmdDB->ExecuteReader();
		while (myRender0->Read()) {
			vId = myRender0->GetInt32("count(*)") + 1;
		}
		conData->Close();
		return vId;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return -1;
	}
}
Int32^ MySQL::getID() {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(*) from book_store.discounts;", conData);
	Int32^ idVal = setID(cmdDB);
	return idVal;
}

Boolean^ MySQL::setNew(MySqlCommand^ cmdDB, Int32^ idVal, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Added");
		while (myRender->Read()) {

		}
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
}
Boolean^ MySQL::insertNew(Int32^ vId, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`discounts`(`discount_id`,`percent`,`date_from` ,`date_until`) VALUES('" + vId + "','" + discount->Text + "','" + start->Text + "','" + end->Text + "');", conData);
	Boolean^ ok = setNew(cmdDB, vId, discount, start,end);
	return ok;
}


void MySQL::setVal(MySqlCommand^ cmdDB, String^ listVal, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("discount_id").ToString();
			String^ vpercent = myRender->GetInt32("percent").ToString();
			String^ vdate_from = myRender->GetString("date_from");
			String^ vdate_until = myRender->GetString("date_until");


			//set vals to text box
			id_tet->Text = vId;
			discount->Text = vpercent;
			start->Text = vdate_from;
			end->Text = vdate_until;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::changeVal(String^ listVal, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts where discount_id='" + listVal + "';", conData);
	setVal(cmdDB, listVal, id_tet, discount, start, end);
}

Boolean^ MySQL::setEditVal(MySqlCommand^ cmdDB, System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}
		return true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
}
Boolean^ MySQL::editVal(System::Windows::Forms::TextBox^ id_tet, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::TextBox^ start, System::Windows::Forms::TextBox^ end) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.discounts set discount_id='" + id_tet->Text + "',percent='" + discount->Text + "',date_from='" + start->Text + "',date_until='" + end->Text + "' where discount_id='" + id_tet->Text + "';", conData);
	Boolean^ ok= setEditVal(cmdDB,id_tet, discount, start, end);
	return ok;
}

//orders page
void MySQL::setBooksByAmount(MySqlCommand^ cmdDB, System::Windows::Forms::DataGridView^ booksTable) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
		}
		conData->Close();

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSorce = gcnew BindingSource();
		bSorce->DataSource = dbdataset;
		booksTable->DataSource = bSorce;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::booksByAmount(System::Windows::Forms::DataGridView^ booksTable) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select title, amount from book_store.books ORDER BY amount asc;", conData);
	setBooksByAmount(cmdDB, booksTable);
}


//new order page

void  MySQL::setBooksCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vt = myRender->GetString("title");
			comboBox1->Items->Add(vt);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void  MySQL::booksCom(System::Windows::Forms::ComboBox^ comboBox1) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select title from book_store.books;", conData);
	setBooksCom(cmdDB, comboBox1);
}

Int32^ MySQL::setBookChange(MySqlCommand^ cmdDB, String^ comboVal, Int32^ idBook, System::Windows::Forms::TextBox^ bookName, System::Windows::Forms::TextBox^ auther, System::Windows::Forms::TextBox^ amount) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("book_id").ToString();
			idBook = myRender->GetInt32("book_id");
			String^ vtitle = myRender->GetString("title");
			String^ vauther = myRender->GetString("author");

			//set vals to text box
			bookName->Text = vtitle;
			auther->Text = vauther;

			return idBook;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return -1;
	}
}
Int32^ MySQL::bookChange(String^ comboVal, Int32^ idBook, System::Windows::Forms::TextBox^ bookName, System::Windows::Forms::TextBox^ auther, System::Windows::Forms::TextBox^ amount) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where title= '" + comboVal + "';", conData);
	Int32^ idBookf = setBookChange(cmdDB, comboVal, idBook, bookName, auther, amount);
	return idBookf;

}

Int32^ MySQL::getIDBook() {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(*) from book_store.books;", conData);
	Int32^ idVal = setID(cmdDB);
	return idVal;
}
void MySQL::createBook(System::Windows::Forms::TextBox^ bookName, System::Windows::Forms::TextBox^ auther) {
	Int32^ idVal = getIDBook();
}

void MySQL::setProviderCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox2) {
	MySqlDataReader^ myRender;
	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vt = myRender->GetString("provider");
			comboBox2->Items->Add(vt);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
void MySQL::providerCom(System::Windows::Forms::ComboBox^ comboBox2) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select provider from book_store.orders_from_provider;", conData);
	setProviderCom(cmdDB, comboBox2);
}

Int32^ MySQL::seGetIdOrder(MySqlCommand^ cmdDB) {
	MySqlDataReader^ myRender0;
	Int32^ vId;
	try {
		conData->Open();
		myRender0 = cmdDB->ExecuteReader();
		while (myRender0->Read()) {
			vId = myRender0->GetInt32("count(*)") + 1;
		}
		conData->Close();
		return vId;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return -1;
	}
}
Int32^ MySQL::getIdOrder() {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(*) from book_store.orders_from_provider;", conData);
	Int32^ idVal = seGetIdOrder(cmdDB);
	return idVal;
}

Int32^ MySQL::getIDBookByName(System::Windows::Forms::ListBox^ listBox2) {
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select book_id from book_store.books where title ='" + listBox2->Text + "' ;", conData);
	MySqlDataReader^ myRender0;
	Int32^ vId;
	try {
		conData->Open();
		myRender0 = cmdDB->ExecuteReader();
		while (myRender0->Read()) {
			vId = myRender0->GetInt32("book_id");
		}
		conData->Close();
		return vId;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return -1;
	}
}
Boolean^  MySQL::sendOrder(System::Windows::Forms::ListBox^ listBox2, System::Windows::Forms::ListBox^ listBox1, System::Windows::Forms::ComboBox^ comboBox2) {
	Int32^ idVal = getIDBookByName(listBox2);
	Int32^ idOrder = getIdOrder();
	try {
		//MessageBox::Show("id book = " + idVal->ToString());
		//MessageBox::Show("id order = " + idOrder->ToString());
		//MessageBox::Show("provider name = " + comboBox2->Text);
		//MessageBox::Show("ampunt= " + listBox1->Text);
		if (idVal != -1 && idOrder != -1) {
			try
			{
				MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`orders_from_provider`(`order_provider_id`,`book_id`,`amount`,`provider`,`order_date`,`order_status`) VALUES('" + idOrder + "' ,'" + idVal + "','" + listBox1->Text + "',''" + comboBox2->Text + "','2020-12-18','active'); ", conData);
				return true;
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

		}
	}
	catch (Exception^ ex) {
		return false;
	}

}
