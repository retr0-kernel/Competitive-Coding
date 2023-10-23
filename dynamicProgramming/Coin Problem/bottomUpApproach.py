def min_ignore_none(a, b):
    if a is None: return b
    elif b is None: return a
    else: return min(a,b)

def minimum_coins(m, coins):
    memo = {}

    memo[0]=0
    for i in range(1, m+1):
        for coin in coins:
            subproblem = i-coin
            if subproblem < 0:
                continue

            memo[i]=min_ignore_none(memo.get(i), memo.get(subproblem) + 1)
    return memo[m]