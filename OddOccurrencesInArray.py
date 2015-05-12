def solution(A):
    # write your code in Python 2.7
    unpaired_ele = 0
    for x in A:
      # trick: apply exclusive or
      unpaired_ele ^= x
        
    return unpaired_ele
