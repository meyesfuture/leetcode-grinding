# Write your MySQL query statement below
select firstName, lastName, city, state from Person as p LEFT JOIN Address as a on a.personId = p.personId;