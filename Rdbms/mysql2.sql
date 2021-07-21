-- create a database 
create database MIT 


-- create a table for student(result[frontend])
CREATE TABLE studentInfo
( 
    studentId int , 
    studentName varchar(255) NOT null, 
    rollId int PRIMARY KEY, 
    className varchar(255) not null, 
    subjectName varchar(255) not null, 
    marks int not null 
);


-- add colum to table.
ALTER TABLE studentinfo
ADD gender ENUM('M','F');

-- insert data into table .
insert into studentinfo (studentId, studentName, rollId, subjectName, marks,gender) 
values (07,'ajit',0120180520,'java',90,'M');

-- update table coulum
UPDATE `studentinfo` SET `className` = 'SCET' WHERE `studentinfo`.`rollId` = 120180520;


-- get the user name of database 
select CURRENT_USER()  -- root@localhost

-- select command
select * from studentinfo;


-- insert 
insert into studentinfo (studentId, studentName, rollId,className, subjectName, marks,gender) 
values (05,'amit',0120180550,'DME','C++',95,'M');

insert into studentinfo (studentId, studentName, rollId,className, subjectName, marks,gender) 
values (02,'Nidhi',0120180150,'DEE','python',98,'F');

-- delete 
DELETE FROM `studentinfo` WHERE `studentinfo`.`rollId` = 120180150;

--update
UPDATE `studentinfo` SET `studentId` = '3' WHERE `studentinfo`.`rollId` = 120180450;

-- change column name 
ALTER TABLE `studentinfo` CHANGE `subjectName` `courseName` VARCHAR(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL;

-- add colimn name 
ALTER TABLE `studentinfo` add COLUMN `courseID` INT NOT NULL AFTER `courseName`;

-- update ayushi RollId
UPDATE `studentinfo` SET `rollId` = '130180850' WHERE `studentinfo`.`rollId` = 10180850;

--chnage postion of colums 
ALTER TABLE studentinfo MODIFY gender ENUM('M', 'F') AFTER studentName

-- update course Id for different subjectName
update `studentinfo`
SET 
`courseID` = 'php101'
where courseName = 'PHP';

-- Change datatype of column in SQL
ALTER TABLE studentinfo MODIFY courseID varchar(255)

-- update new courseid to all courses 
UPDATE `studentinfo` SET `courseID` = 'py101' WHERE `studentinfo`.`rollId` = 120180150;
UPDATE `studentinfo` SET `courseID` = 'com101' WHERE `studentinfo`.`rollId` = 120180450; 
UPDATE `studentinfo` SET `courseID` = 'java101' WHERE `studentinfo`.`rollId` = 120180520; 
UPDATE `studentinfo` SET `courseID` = 'c101' WHERE `studentinfo`.`rollId` = 120180550; 
UPDATE `studentinfo` SET `courseID` = 'py101' WHERE `studentinfo`.`rollId` = 120180850; 
UPDATE `studentinfo` SET `courseID` = 'bio101' WHERE `studentinfo`.`rollId` = 130180850;

/*************************************************************************************************************Time to normalize our database *******************************************************************/

--student Table 

CREATE TABLE student
( 
    StudentId int PRIMARY KEY,
    StudentName varchar(255),
    RollId int not null UNIQUE key,
    ClassId int not null
);

--- table for course
CREATE TABLE course
( 
    CourseId int unique key,
    CourseName varchar(255),
    CourseCode varchar(255)
);

--- table for result
 create table result (
    Id int unique key,
    StudentId int not null,
    ClassId int not null,
    CourseId int not null,
    Marks int 
)

--- table for class
create table class (
    ClassId int unique key,
    ClassName varchar(255) not null,
    SectionId varchar(100) not null
)
