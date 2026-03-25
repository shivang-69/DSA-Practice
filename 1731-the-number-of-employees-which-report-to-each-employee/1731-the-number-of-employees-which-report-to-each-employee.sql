# Write your MySQL query statement below
select E.employee_id ,E.name , count(t.employee_id) as reports_count, round(avg(t.age)) as average_age
from Employees E
join Employees T
on E.employee_id=T.reports_to
group by E.employee_id
order by E.employee_id;
