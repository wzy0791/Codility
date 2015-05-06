def solution(A):
    # write your code in Python 2.7
    if len(A) == 0 :
        return 0
    best_buy = A[0]
    max_profit = 0
    for i in range(1, len(A)) :
        best_buy = min(best_buy, A[i])
        profit = A[i] - best_buy
        max_profit = max(max_profit, profit)
    return max_profit
