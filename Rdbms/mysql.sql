/*********** 
A relational database is a database that organizes information into one or more tables.


TODO:   SQL V/S mySQL

SQL is a programming language designed to manipulate and manage data stored in relational databases.



***********************%%%%%%%% Constrainsts %%%%%%%%%%***********************************************
1. PRIMARY KEY columns can be used to uniquely identify the row. Attempts to insert a row with an identical value to a row already in the table will result in a constraint violation which will not allow you to insert the new row.

2. UNIQUE columns have a different value for every row. This is similar to PRIMARY KEY except a table can have many different UNIQUE columns.

3. NOT NULL columns must have a value. Attempts to insert a row without a value for a NOT NULL column will result in a constraint violation and the new row will not be inserted.

4. DEFAULT columns take an additional argument that will be the assumed value for an inserted row if the new row does not specify a value for that column.

*********/ 
 
 
 /**********************************************************************
 1. The DDL (Data Definition Language) consists of those commands which are used to define the database.
 Example: CREATE, DROP, ALTER, TRUNCATE, COMMENT, RENAME.
 *********************************************************************/
 
 /*The ‘CREATE SCHEMA’ Statement
This statement is used to create a database.*/
 
CREATE TABLE students (
    ID int primary key auto_incre,
    studentName varchar(255) NOT NULL,
    Age int not null,
    city varchar(255) default 'patna',
    postalCode varchar(255),
    PRIMARY KEY (ID)
);

/* The ‘ALTER TABLE’ Statement
This statement is used to either add, modify or delete constraints and columns from a table */

ALTER TABLE students (    
ADD DateOfBirth date;

Alter TABLE students (
modify ID="StidentID";

alter TABLE students (
delete Age;



/*   DROP statememnt 
The DROP command is used to delete the database, tables or columns*/

DROP table students;
Drop students postalCode;


/* The 'Truncate' statement 
This statement is used to delete the data which is present inside a table, but the table doesn’t get deleted.*/

Truncate TABLE students

/* RENAME
This statement is used to rename one or more tables. */

RENAME  students TO studentsInfo;

/************************************************************************
2. The DML (Data Manipulation Language) commands deal with the manipulation of data present in the database. Example: SELECT, INSERT, UPDATE, DELETE.************************************************************************/

/*TODO: 
1.Different Types Of Constraints In Database 
2. manipulative operators/functions such as:
LOGICAL OPERATORS ARITHMETIC,BITWISE,COMPARISON & COMPOUND OPERATORS
AGGREGATE FUNCTIONS SPECIAL OPERATORS
3. case-sensitive comparison between sql and mysql
*/


*/


/* INSERT
This statement is used to insert new records in a table. */


INSERT INTO studentinfo (studentID, studentName, age, city, postalCode)
values (07, 'ajit', 20,  'patna', 847201);
 
INSERT INTO studentinfo (studentID, studentName, age, city, postalCode)
values (06, 'pinki', 25,  'benipur', 847201);

INSERT INTO studentinfo (studentID, studentName, age, city, postalCode)
values (5, 'yogesh', 5,  'Darbhanga', 847201);


/* UPDATE
This statement is used to modify the existing records in a table.*/

update studentinfo 
set studentName="yogi", city="katwasa"
WHERE studentID=05;


/* DELETE
This statement is used to delete existing records in a table.*/

delete from studentinfo where studentName="yogi";


/++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*

/* SELECT
This statement is used to select data from a database and the data returned is stored in a result table, called the result-set.

SELECT keyword uses :
-----------------
AS
DISTINCT
WhERE (Like , Is Null, Between, AND, OR, NOT, IN, Exists, any, ALL)
ORDER BY
GROUP BY
Limit
Case(if-else)
HAVING Clause
--------------
MIN()
MAX()
COUNT()
AVG()
SUM()
round()

*/

/***************************theory 


What are the different use cases of the LIKE operator?

LIKE c% finds any values that start with the letter ‘c’
LIKE %c finds any values that end with the letter ‘c’
LIKE %re% finds values that have ‘re’ in any position
LIKE _a% finds any values that have the letter ‘a’ in the second index
LIKE a_%_% finds any values that start with ‘a’ and are at least 3 characters in length.
LIKE a%r finds any values that start with ‘a’ and end with ‘r’.

*/


select * from studentinfo
where city="Darbhanga"
order by studentName Asc, city desc;

select distinct city from studentinfo

select count(studentID) from studentinfo
group by country
order by count(studentID) desc;


SELECT COUNT(StudentID), City
FROM Infostudents
GROUP BY City
HAVING COUNT(Fees) > 23000;

 