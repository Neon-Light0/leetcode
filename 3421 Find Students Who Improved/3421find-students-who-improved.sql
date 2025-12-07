# Write your MySQL query statement below
with s1 as (
    select t1.student_id, t1.subject, t1.score as first_score, t1.exam_date from Scores as t1    
    join (
        select student_id, subject, min(exam_date) as exam_date from Scores
        group by student_id, subject
    ) as t2
    on t1.student_id = t2.student_id and t1.subject = t2.subject and t1.exam_date = t2.exam_date
),
s2 as (
    select t1.student_id, t1.subject, t1.score as latest_score, t1.exam_date from Scores as t1    
    join (
        select student_id, subject, max(exam_date) as exam_date from Scores
        group by student_id, subject
    ) as t2
    on t1.student_id = t2.student_id and t1.subject = t2.subject and t1.exam_date = t2.exam_date
)
select s1.student_id, s1.subject, s1.first_score, s2.latest_score from s1
join s2
on s1.student_id = s2.student_id and s1.subject = s2.subject
where s2.exam_date > s1.exam_date and s2.latest_score > s1.first_score
order by s1.student_id, subject