DROP DATABASE  IF EXISTS book_store ;
CREATE DATABASE IF NOT EXISTS book_store ;
USE book_store;

-- for login
CREATE TABLE users
(
user_id smallint unsigned NOT NULL AUTO_INCREMENT,
user_name varchar(45) NOT NULL, 
email varchar(45) NOT NULL,
pass int unsigned NOT NULL,
join_date DATETIME default CURRENT_TIMESTAMP ,  
user_role varchar(45) default 'buyer',  
user_status varchar(45) default 'active',  

PRIMARY KEY (user_id)
);

CREATE TABLE discounts -- for all stor 
(
discount_id smallint unsigned NOT NULL AUTO_INCREMENT,
percent smallint unsigned NOT NULL, 
date_from date NOT NULL,
date_until date NOT NULL,
PRIMARY KEY (discount_id)
);


CREATE TABLE books 
(
book_id smallint unsigned NOT NULL AUTO_INCREMENT,
title varchar(200) NOT NULL,
pages smallint unsigned default 0,
section varchar(100) NOT NULL,
price smallint unsigned NOT NULL,
amount smallint unsigned NOT NULL,
publish_date DATETIME default CURRENT_TIMESTAMP ,
info varchar(1000) default 'to be continue..',
img varchar(200) default 'not found',
author varchar(50) default 'anonimous',
PRIMARY KEY (book_id)
);

CREATE TABLE shoping_carts
(
shoping_cart_id smallint unsigned NOT NULL AUTO_INCREMENT,
order_date DATETIME default CURRENT_TIMESTAMP,
discount_id smallint unsigned, -- only for logged in usesrs
PRIMARY KEY (shoping_cart_id),
FOREIGN KEY (discount_id) REFERENCES discounts (discount_id)
);

CREATE TABLE book_list -- for user orders 
(
book_list_id smallint unsigned NOT NULL AUTO_INCREMENT,
shoping_cart_id smallint unsigned NOT NULL,
book_id smallint unsigned NOT NULL,
user_id smallint unsigned NOT NULL,
done varchar(10) default 'no',
PRIMARY KEY (book_list_id),
FOREIGN KEY (shoping_cart_id) REFERENCES shoping_carts (shoping_cart_id),
FOREIGN KEY (book_id) REFERENCES books (book_id),
FOREIGN KEY (user_id) REFERENCES users (user_id)
);

CREATE TABLE purchases  
(
purchase_id smallint unsigned NOT NULL AUTO_INCREMENT,
user_id smallint unsigned NOT NULL,
payment_method varchar(45),
pyment_date DATETIME default CURRENT_TIMESTAMP  ,
price_paid smallint unsigned NOT NULL,
PRIMARY KEY (purchase_id),
FOREIGN KEY (user_id) REFERENCES users(user_id)
);

CREATE TABLE orders_from_provider
(
order_provider_id smallint unsigned NOT NULL AUTO_INCREMENT,
book_id smallint unsigned NOT NULL,
amount smallint unsigned NOT NULL,
provider varchar(45) NOT NULL,
order_status varchar(45) default 'active',
order_date date,
PRIMARY KEY (order_provider_id),
FOREIGN KEY (book_id) REFERENCES books(book_id)
);

-- CREATE TABLE books_orders -- list of books for order store
-- (
-- order_provider_id smallint unsigned NOT NULL ,
-- book_id smallint unsigned NOT NULL,
-- amount smallint unsigned NOT NULL,
-- FOREIGN KEY (order_provider_id) REFERENCES orders_from_provider (order_provider_id),
-- FOREIGN KEY (book_id) REFERENCES books (book_id)
-- );


-- CREATE TABLE managment
 -- (
-- managment_id smallint unsigned NOT NULL AUTO_INCREMENT,
-- book_id smallint unsigned NOT NULL,
-- purchase_id smallint unsigned NOT NULL,
-- shoping_cart_id smallint unsigned NOT NULL,
-- order_provider_id smallint unsigned NOT NULL,
-- discount_id smallint unsigned NOT NULL,
-- pure_profit   smallint unsigned, 
-- PRIMARY KEY (managment_id),
-- FOREIGN KEY (book_id) REFERENCES books (book_id),
-- );

