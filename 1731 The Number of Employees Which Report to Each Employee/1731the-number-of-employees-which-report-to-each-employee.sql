# Write your MySQL query statement below
select t2.employee_id, t2.name, count(distinct t1.employee_id) as reports_count, round(avg(t1.age), 0) as average_age from employees as t1
left join employees as t2
on t1.reports_to = t2.employee_id
where t2.employee_id is not null
group by t2.employee_id
