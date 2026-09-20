# Write your MySQL query statement below
select contest_id,round(COUNT(*) / (SELECT COUNT(*) FROM Users)*100 ,2) AS percentage
from Register b
group by contest_id
order by percentage desc,contest_id;


