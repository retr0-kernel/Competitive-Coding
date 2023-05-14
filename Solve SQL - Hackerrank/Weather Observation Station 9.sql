/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE SUBSTR(CITY,1,1) NOT IN ('A','E','I','O','U');

/*
SUBSTR() is a built-in SQL function that is used to extract a substring from a string. The SUBSTR() function takes three arguments:

The string expression or column name from which the substring is to be extracted, which in this case is the CITY column of the STATION table.
The starting position of the substring, which in this case is 1 (the first character of the string).
The length of the substring to be extracted, which in this case is 1 (only one character is extracted).
Therefore, SUBSTR(CITY,1,1) extracts the first character of the CITY column from the STATION table. This expression is used in the WHERE clause of the SQL statement to check if the first character of the CITY name is not one of the vowels 'A', 'E', 'I', 'O', or 'U'.
*/