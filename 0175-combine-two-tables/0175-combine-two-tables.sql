# Write your MySQL query statement below
select firstname, lastname, city, state
from person left join address
on Person.PersonId = Address.personID;

# SELECT FirstName, LastName, City, State
# FROM Person LEFT JOIN Address
# ON Person.PersonId = Address.PersonId