# Write your MySQL query statement below
select S.student_id,S.student_name,sub.subject_name,count(e.subject_name) as attended_exams
from Students as S
cross join Subjects  as sub
left join Examinations as e
on S.student_id=e.student_id and sub.subject_name=e.subject_name
group by S.student_id,sub.subject_name
order by S.student_id ,sub.subject_name;
