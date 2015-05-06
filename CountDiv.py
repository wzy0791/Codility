def solution(A, B, K):
    # write your code in Python 2.7
    y = B/K
    x = A/K
    if A%K == 0 :
        return y-x+1
    else :
        return y-x
