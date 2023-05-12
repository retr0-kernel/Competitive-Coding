/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[AEIOU]'

/*This query uses the REGEXP operator to match the CITY column against a regular expression pattern that looks for strings that start with any of the vowels [AEIOU].*/