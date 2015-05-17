def solution(A):
    # write your code in Python 2.7
    max_sum = max_end_at = A[0]
    for x in A[1:]:
        max_end_at = max(max_end_at+x, x)
        max_sum = max(max_sum, max_end_at)
        
    return max_sum
