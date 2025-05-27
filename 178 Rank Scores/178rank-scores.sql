# Write your MySQL query statement below
select a.score, b.rank from scores as a
left join (
    select score, row_number() OVER (ORDER BY score desc) as 'rank' from scores
    group by score
    order by score desc
 ) as b on a.score = b.score
 order by score desc

