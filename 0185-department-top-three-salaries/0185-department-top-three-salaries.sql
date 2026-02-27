/* Write your PL/SQL query statement below */

WITH cte AS(
    SELECT 
        d.name AS department, 
        e.name AS employee, 
        e.salary,
        DENSE_RANK() OVER(PARTITION BY d.id ORDER BY e.salary DESC) AS rnk
    FROM
    employee e
    JOIN 
    department d
    ON e.departmentId = d.id
)
SELECT department, employee, salary FROM cte WHERE rnk <= 3;