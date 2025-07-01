# Write your MySQL query statement below
select product_name, sum(o.unit) as unit
from Orders as o
left join Products as p
on p.product_id = o.product_id
where MONTH(o.order_date) = 2 and YEAR(o.order_date) = 2020
group by o.product_id
having unit >= 100