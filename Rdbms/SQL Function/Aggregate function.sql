--- MySQL Aggregate Functions

--- create an employee table
CREATE TABLE employee(  
    name varchar(45) NOT NULL,    
    occupation varchar(35) NOT NULL,    
    working_date date,  
    working_hours varchar(10)  
);  

--- insert the records into the employee table
INSERT INTO employee VALUES    
('Robin', 'Scientist', '2020-10-04', 12),  
('Warner', 'Engineer', '2020-10-04', 10),  
('Peter', 'Actor', '2020-10-04', 13),  
('Marco', 'Doctor', '2020-10-04', 14),  
('Brayden', 'Teacher', '2020-10-04', 12),  
('Antonio', 'Business', '2020-10-04', 11); 

--- Now, execute the SELECT statement to show the record
select * from employee;


--- Count() Function
select count(name) from employee;

--- Sum() Function
SELECT SUM(working_hours) AS "Total working hours" FROM employee; 

--- MIn () Function
SELECT MIN(working_hours) AS Minimum_working_hours FROM employee; 

--- first Function()
SELECT working_date FROM employee  limit 1;

---    
