# Write your MySQL query statement below
SELECT employee_id , if(employee_id % 2 != 0  AND name NOT LIKE 'M%', salary , 0 ) as bonus From Employees Order by employee_id;