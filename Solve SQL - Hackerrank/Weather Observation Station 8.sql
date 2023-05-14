
/* .* matches any character zero or more times.*/
/* So, the regular expression ^[AEIOU].*[AEIOU]$ matches any string that starts and ends with a vowel and has any number of characters in between. */
/*
Enter your query here.
*/
SELECT DISTINCT CITY FROM STATION WHERE CITY REGEXP '^[AEIOU].*[AEIOU]$'