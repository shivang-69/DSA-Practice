# Write your MySQL query statement below
select T.name as Employee
from Employee E
join Employee T
on E.id = T.managerId
where T.salary>E.salary;
