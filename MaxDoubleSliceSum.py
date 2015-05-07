def solution(A):
    y_ending_here = [0] * len(A)
    y_starting_here = [0] * len(A)
     
    for idx in range(2, len(A)-1): # y_idx goes from 2 to N-2
        y_ending_here[idx] = max(0, y_ending_here[idx-1] + A[idx-1])
     
    for idx in reversed(range(1, len(A)-2)): # y_idx goes from N-3 to 1
        y_starting_here[idx] = max(0, y_starting_here[idx+1] + A[idx+1])
     
    max_double_slice = 0
     
    for idx in range(1, len(A)-1):
        max_double_slice = max(max_double_slice, y_starting_here[idx] + y_ending_here[idx])
         
    return max_double_slice
