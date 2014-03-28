insert into discount (id, num, percentage) values (1,1,10);
insert into discount (id, num, percentage) values (2,2,25);
insert into discount (id, num, percentage) values (3,3,15);

insert into client (id, name, birthday, phone) values (1,"Иванов И.П.","13.04.1975","89141501020");
insert into client (id, name, birthday, phone) values (2,"Петров А.Н.","30.01.1949","89141112233");
insert into client (id, name, birthday, phone) values (3,"Сидоров Г.В.","21.08.1985","89142225511");

insert into doctor (id, name) values (1,"Врач №1");
insert into doctor (id, name) values (2,"Врач №2");
insert into doctor (id, name) values (3,"Врач №3");

insert into reason (id, name) values (1,"Первичный осмотр");
insert into reason (id, name) values (2,"Вторичный осмотр");

insert into brend (id, name) values (1,"Johnson & Johnson");
insert into brend (id, name) values (2,"PureVision");

insert into care_agent (id, name) values (1,"Раствор");

insert into goods (id, name) values (1,"МКЛ");
insert into goods (id, name) values (2,"Очки");

insert into visit_date(id,visit_date,client_id,doctor_id,reason_id,brend_id,care_agent_id,goods_id) values (1,"10.10.2013",1,2,2,1,1,1);
insert into visit_date(id,visit_date,client_id,doctor_id,reason_id,brend_id,care_agent_id,goods_id) values (2,"14.10.2013",1,3,2,1,1,1);
insert into visit_date(id,visit_date,client_id,doctor_id,reason_id,brend_id,care_agent_id,goods_id) values (3,"25.03.2014",2,3,2,1,1,1);