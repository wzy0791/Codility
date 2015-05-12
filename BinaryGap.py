def solution(N):
    # write your code in Python 2.7
    result = 0
    found_one = False
    while (N > 0):
        if ((N & 1) == 1):
            found_one = True
            count = 0
        else:
            if found_one == True:
                count += 1
                result = max(result, count)
        N >>= 1
    
    return result
