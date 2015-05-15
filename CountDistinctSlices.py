def solution(M, A):
    # write your code in Python 2.7
    result = 0
    seen = [False] * (M+1)
    # two idxes
    front = back = 0
    while (front < len(A)):
        if (seen[A[front]] == False):
            # key point: how to calculate the accumulated number of different slices
            result += (front-back+1)
            if result > 1000000000:
                return 1000000000
            seen[A[front]] = True
            # remember to move idx at last
            front += 1
        else:
            while (A[back] != A[front]):
                seen[A[back]] = False
                back += 1
            seen[A[back]] = False
            back += 1
                
    return result
