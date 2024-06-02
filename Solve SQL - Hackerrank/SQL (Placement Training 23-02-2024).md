**Q1. Find Second Largest Salary?**
**A**.
```
SELECT * FROM(

SELECT emp_name, salary, RANK() 

over(ORDER BY salary DESC) AS ranking FROM employee) AS k

WHERE ranking=3;
```

**Q2. Details of the student whose salary is highest in the department**
**A**.
```
SELECT DEPARTMENT, MAX(SALARY) FROM EMPLOYEE GROUP BY DEPARTMENT
```
