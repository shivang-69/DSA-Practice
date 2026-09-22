# Write your MySQL query statement below
select round(sum(t.a=t.b)*100/count(*),2) as immediate_percentage
from(
    select min(order_date) as a,min(customer_pref_delivery_date) as b
    from Delivery
    group by customer_id
) as t;