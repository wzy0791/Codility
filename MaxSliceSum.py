def solution(A):
    # write your code in Python 2.7
    max_slice = max(A)
    max_ending = 0
    for x in A :
        if (max_ending + x) < 0 :
            max_ending = 0
        else :
            max_ending += x
            max_slice = max(max_slice, max_ending)
    return max_slice
