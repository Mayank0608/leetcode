# Write your MySQL query statement below
# Write your MySQL query statement below
-- SELECT (SELECT DISTINCT salary FROM Employee 
-- order by salary desc
-- LIMIT 1 OFFSET 1) as SecondHighestSalary;


Select max(salary) AS SecondHighestSalary from Employee 
Where salary < (select max(salary) from Employee);
