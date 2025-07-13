# Write your MySQL query statement below
select unique_id, name from employees AS e
left join employeeuni AS eu
ON e.id=eu.id