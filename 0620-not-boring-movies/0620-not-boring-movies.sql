# Write your MySQL query statement below
select movie from cinema 
where id%2 = 1 and descrption <> "boring"
order by rating desc