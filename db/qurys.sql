-- use book_store;

-- 1 login
select user_name,user_role from users where email = 'idan@gmail.com' and pass=123;

-- 1 testing
select * from book_store.users ;
select * from book_store.books ;
select count(*) from book_store.users;

select * from book_store.purchases where user_id = 1 ;

select * from book_store.purchases where user_id=2;
select * from book_store.users where user_name=1 and user_role='buyer';
INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`publish_date`,`info`,`img`,`author`) VALUES(12,'C++ Programing',300,'Cpp', 180 ,10, '2018-05-21','The C++ Programming Language, the Bell Laboratories developer who created C++. Now, Stroustrup has updated this classic with clarifications based on reader feedback and new information in two brand-new appendices on ISO/ANSI C++: internationalization and exception safety. This makes The C++ Programming Language: Special Edition the only book with authoritative coverage of every important element of C++','https://images-na.ssl-images-amazon.com/images/I/51Z-XJXiQnL._SX396_BO1,204,203,200_.jpg','lila bccj');

select * from book_store.purchases where user_id=2;

-- מחזיר רשימת ספרים של יוזר 1  שיש לו בעגלה כרבע 
-- זה לעגלת קניות 
select * from book_store.book_list bl
inner join book_store.shoping_carts s
on
	bl.shoping_cart_id = s.shoping_cart_id  
inner join book_store.books b
on
	bl.book_id = b.book_id  
where done='yes';

-- שביל המשיכה של המנהל במכירות
select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl
inner join book_store.shoping_carts s
on
	bl.shoping_cart_id = s.shoping_cart_id  
inner join book_store.books b
on
	bl.book_id = b.book_id  
WHERE  done = 'yes'  and MONTH(order_date)=11 and Year(order_date)=2020
group by b.book_id;
-- ORDER BY sum(b.book_id);


select count(bl.book_id), bl.book_id, b.title,order_date from book_store.book_list bl
inner join book_store.shoping_carts s
on
	bl.shoping_cart_id = s.shoping_cart_id  
inner join book_store.books b
on
	bl.book_id = b.book_id  
WHERE  done = 'yes'  and (order_date >= '2020-11-01' and  order_date <= '2020-11-20') 
group by b.book_id;


select sum(b.price), bl.book_id, b.title from book_store.book_list bl
inner join book_store.shoping_carts s
on
	bl.shoping_cart_id = s.shoping_cart_id  
inner join book_store.books b
on
	bl.book_id = b.book_id  
WHERE  done = 'yes'  and MONTH(order_date)=11 and Year(order_date)=2020
group by b.price;



select sum(b.price), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.price;
-- GROUP BY  order_date
-- HAVING COUNT(order_date) >= 1
-- order by order_date;

-- group by   MONTH(order_date),Year(order_date)
-- HAVING  count(order_date) > 0;
-- where done='yes';


select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_status='active';

select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_provider_id=1;

select * from book_store.orders_from_provider op inner join book_store.books b on op.book_id = b.book_id  where order_provider_id=1;
update book_store.orders_from_provider set amount=299,provider='yaaa',order_status='booo',order_date='2020-01-20' where order_provider_id=1 ;
select * from book_store.orders_from_provider ;

select * from book_store.discounts where (date_from >= '2020-12-30' and  date_until <= '2021-02-20') ;

select * from book_store.discounts; -- where (date_from >= '2020-12-30' and  date_until <= '2021-02-20') ;

-- 1 register 
INSERT INTO `book_store`.`users`(`user_id`,`user_name`,`email`,`pass`)VALUES(4,'test','test@gmail.com',123);
INSERT INTO `book_store`.`customers`(`customer_id`,`is_member`,`user_id`)VALUES(4, true, 4); 
-- get discount of the login date
update book_store.books set title="momy" where book_id="1";
 select * from  book_store.discounts where date_from between '2020-12-01' and now() ;
 -- select * from  book_store.discounts where date_from >= now() and  date_until <= now();

-- craet a shoping card 
INSERT INTO `book_store`.`shoping_carts`(`shoping_cart_id`,`customer_id`,`order_date`,`discount_id`) VALUES(4,4, '2020-11-02', null);

-- get all books
select * from book_store.books
where amount >1
-- order by amount asc limit 1 
;




