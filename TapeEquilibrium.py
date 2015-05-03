def solution(A):
    # write your code in Python 2.7
    sum = 0
    for x in A:
        sum += x
    
    N = len(A)
    if (N==2):
        return abs(A[0]-A[1])
    
    par_sum = 0
    min_diff = abs(2*A[0] - sum)
    for i in range(N-1):
        par_sum += A[i]
        diff = abs(2*par_sum - sum)
        if diff == 0:
            return 0
        if diff < min_diff:
            min_diff = diff
    return min_diff
