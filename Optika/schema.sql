DROP TABLE IF EXISTS client;
CREATE TABLE client(
	id integer primary key autoincrement,
	name varchar(255) not null,
	birthday timestamp,
	phone varchar(11)
);

DROP TABLE IF EXISTS doctor;
CREATE TABLE doctor(
	id integer primary key autoincrement,
	name varchar(255) not null
);

DROP TABLE IF EXISTS reason;
CREATE TABLE reason(
	id integer primary key autoincrement,
	name varchar(255) not null
);

DROP TABLE IF EXISTS brend;
CREATE TABLE brend(
	id integer primary key autoincrement,
	name varchar(255) not null
);

DROP TABLE IF EXISTS care_agent;
CREATE TABLE care_agent(
	id integer primary key autoincrement,
	name varchar(255) not null
);

DROP TABLE IF EXISTS goods;
CREATE TABLE goods(
	id integer primary key autoincrement,
	name varchar(255) not null
);

DROP TABLE IF EXISTS discount;
CREATE TABLE discount(
	id integer primary key autoincrement,
	num integer unique,
	percentage integer
);

DROP TABLE IF EXISTS visit_date;
CREATE TABLE visit_date(
	id integer primary key autoincrement,
	visit_date timestamp not null default CURRENT_TIMESTAMP,
	client_id integer,
	doctor_id integer,
	reason_id integer,
	brend_id integer,
	care_agent_id integer,
	goods_id integer,
	
	--Осмотр
	od_vis varchar(5),
	od_sph varchar(5),
	od_cyl varchar(5),
	od_axis varchar(5),
	od_comments varchar(255),
	od_r1 varchar(5),
	od_r2 varchar(5),
	
	bc varchar(5),
	dia varchar(5),
	dpp varchar(5),
	
	os_vis varchar(5),
	os_sph varchar(5),
	os_cyl varchar(5),
	os_axis varchar(5),
	os_comments varchar(255),
	os_r1 varchar(5),
	os_r2 varchar(5),
	
	--Мягкие контактные линзы
	od_sph_mkl varchar(5),
	od_cyl_mkl varchar(5),
	od_axis_mkl varchar(5),
	os_sph_mkl varchar(5),
	os_cyl_mkl varchar(5),
	os_axis_mkl varchar(5),
	bc_mkl varchar(5),
    bms_mkl varchar(5),
	dpp_mkl varchar(5),
	
	--Очки
	od_sph_ochki varchar(5),
	od_cyl_ochki  varchar(5),
	od_axis_ochki  varchar(5),
	os_sph_ochki  varchar(5),
	os_cyl_ochki  varchar(5),
	os_axis_ochki  varchar(5),
	dpp_ochki varchar(5),
	comments_ochki varchar(255),
	
	UNIQUE(visit_date, client_id)
);
