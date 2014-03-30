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

insert into visit_date(id,visit_date,client_id,doctor_id,reason_id,brend_id,care_agent_id,goods_id,od_vis,od_sph,od_cyl,od_axis,od_comments,od_r1,od_r2,bc,dia,dpp,os_vis,os_sph,os_cyl,os_axis,os_comments,os_r1,os_r2,od_sph_mkl,od_cyl_mkl,od_axis_mkl,os_sph_mkl,os_cyl_mkl,os_axis_mkl,bc_mkl,bms_mkl,dpp_mkl,od_sph_ochki,od_cyl_ochki,od_axis_ochki,os_sph_ochki,os_cyl_ochki,os_axis_ochki,dpp_ochki,comments_ochki) values (1,"10.10.2013",1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
insert into visit_date(id,visit_date,client_id,doctor_id,reason_id,brend_id,care_agent_id,goods_id,od_vis,od_sph,od_cyl,od_axis,od_comments,od_r1,od_r2,bc,dia,dpp,os_vis,os_sph,os_cyl,os_axis,os_comments,os_r1,os_r2,od_sph_mkl,od_cyl_mkl,od_axis_mkl,os_sph_mkl,os_cyl_mkl,os_axis_mkl,bc_mkl,bms_mkl,dpp_mkl,od_sph_ochki,od_cyl_ochki,od_axis_ochki,os_sph_ochki,os_cyl_ochki,os_axis_ochki,dpp_ochki,comments_ochki) values (2,"14.10.2013",1,3,2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
insert into visit_date(id,visit_date,client_id,doctor_id,reason_id,brend_id,care_agent_id,goods_id,od_vis,od_sph,od_cyl,od_axis,od_comments,od_r1,od_r2,bc,dia,dpp,os_vis,os_sph,os_cyl,os_axis,os_comments,os_r1,os_r2,od_sph_mkl,od_cyl_mkl,od_axis_mkl,os_sph_mkl,os_cyl_mkl,os_axis_mkl,bc_mkl,bms_mkl,dpp_mkl,od_sph_ochki,od_cyl_ochki,od_axis_ochki,os_sph_ochki,os_cyl_ochki,os_axis_ochki,dpp_ochki,comments_ochki) values (3,"25.03.2014",2,3,2,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);

UPDATE visit_date SET visit_date = "10.10.2001", doctor_id = 2, reason_id = 2, brend_id = 2, care_agent_id = 1, goods_id = 1 WHERE id = 1 AND client_id = 1;