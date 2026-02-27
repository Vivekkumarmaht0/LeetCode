/* Write your PL/SQL query statement below */

-- WITH cte AS(
--     SELECT weight, SUM(weight) OVER(ORDER BY turn) AS total
--     FROM queue
-- )
-- SELECT person_name FROM cte
-- WHERE total < 1000;

WITH cte AS(
    SELECT person_id, person_name, turn, weight, 
    SUM(weight) OVER(ORDER BY turn) AS total_weight
    FROM queue
)
SELECT person_name FROM cte 
WHERE turn = (SELECT MAX(turn) FROM cte
WHERE total_weight <= 1000);