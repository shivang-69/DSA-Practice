# Write your MySQL query statement below
select round(count(*)/(select count(distinct player_id)from activity),2) as fraction
from(
    select player_id,min(event_date) as f
    from Activity
    group by player_id
) as t
join Activity as a
on a.player_id=t.player_id and a.event_date=date_add(t.f,interval 1 day)