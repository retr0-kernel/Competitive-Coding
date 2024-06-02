# Given a set of coin value coins = {c1, c2, ......, ck} and a target sum of money m, what is the minimum number of coins that form the sum m?
def min_ignore_none(a, b):
    if a is None: return b
    elif b is None: return a
    else: return min(a,b)

def minimum_coins(m, coins):
    if m == 0:
        answer = 0
    else:
        answer = None
        for coin in coins:
            subproblem = m-coin
            if subproblem < 0:
                continue
            answer = min_ignore_none(answer, minimum_coins(subproblem, coins)+1)
    return answer

print(minimum_coins(13, [1, 4, 5]))
print(minimum_coins(150, [1, 4, 5]))