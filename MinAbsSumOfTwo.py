def solution(A):
    # write your code in Python 2.7
    A.sort()
    head = 0
    tail = len(A)-1
    min_sum = 2000000000
    while (head <= tail):
        min_sum = min(min_sum, abs(A[head] + A[tail]))
        if A[head] + A[tail] <= 0:
            head += 1
        else:
            tail -= 1
    
    return min_sum
