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
	num integer,
	percentage integer
);

DROP TABLE IF EXISTS visit_date;
CREATE TABLE visit_date(
	id integer primary key autoincrement,
	visit_date timestamp not null default CURRENT_TIMESTAMP,
	user_id integer,
	
	od_vis real(4),
	od_sph real(4),
	od_cyl real(4),
	od_axis real(4),
	od_comments varchar(255),
	od_r1 real(4),
	od_r2 real(4),
	
	bc real(4),
	dia real(4),
	dpp real(4),
	
	os_vis real(4),
	os_sph real(4),
	os_cyl real(4),
	os_axis real(4),
	os_comments varchar(255),
	os_r1 real(4),
	os_r2 real(4),
	
	--Мягкие контактные линзы
	od_sph_mkl real(4),
	od_cyl_mkl real(4),
	od_axis_mkl real(4),
	os_sph_mkl real(4),
	os_cyl_mkl real(4),
	os_axis_mkl real(4),
	bc_mkl real(4),
    bms_mkl real(4),
	dpp_mkl real(4),
	
	
	--Очки
	od_sph_ochki real(4),
	od_cyl_ochki  real(4),
	od_axis_ochki  real(4),
	os_sph_ochki  real(4),
	os_cyl_ochki  real(4),
	os_axis_ochki  real(4),
	dpp_ochki real(4),
	comments_ochki varchar(255)
	
);
