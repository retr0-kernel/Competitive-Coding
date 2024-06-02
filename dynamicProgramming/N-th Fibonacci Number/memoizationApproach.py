# In this approach we create a dictionary so it checks in the dictionary if the operation is done previously. If it is done then it wont redo it thus saving time complexity
# Recursion

memo = {}
def fib(n):
    if n in memo:
        return memo[n]
    
    if n<=2:
        result = 1
    else:
        result = fib(n-1)+fib(n-2)
    
    memo[n] = result
    return result

print(fib(5))
print(fib(50))

# The function will call the recursion only the first time for each value of n next time it will retrieve the value from the dictionary. Time Complexity is O(n).
