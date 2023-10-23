def fib(n):
    if n<=2:
        result = 1
    else:
        result = fib(n-1) + fib(n-2)
    return result

print (fib(5))
print (fib(50))

# The problem with this approach is its doing multiple operations again and again which results in more time complexity O(2^n/2)