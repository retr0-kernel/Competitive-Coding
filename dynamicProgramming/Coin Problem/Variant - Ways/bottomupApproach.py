from collections import defaultdict

def how_many_ways(m, coins):
    memo = defaultdict(lambda _: 0)

    memo[0]=1
    for i in range(1, m+1):
        memo[i]=0

        for coin in coins:
            subproblem = i-coin
            if subproblem < 0:
                continue

            memo[i] = memo[i] + memo[subproblem]
    return memo

print(how_many_ways(5, [1,4,5]))