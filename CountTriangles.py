def solution(A):
    # write your code in Python 2.7
    A.sort()
    n = len(A)
    result = 0
    for x in range(n):
        z = 0
        for y in range(x + 1, n):
            while (z < n and A[x] + A[y] > A[z]):
                z += 1
            result += z - y - 1
    return result
