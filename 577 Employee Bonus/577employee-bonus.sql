# Write your MySQL query statement below
select name, bonus from Employee  as t1
left join bonus as t2 on t1.empId = t2.empId
where bonus is null or bonus < 1000