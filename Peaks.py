def findPeaks(A):
    peaks = []
    for idx in range(1, len(A)-1):
        if A[idx-1] < A[idx] > A[idx+1]:
            peaks.append(idx)
    return peaks

def solution(A):
    # write your code in Python 2.7
    peaks = findPeaks(A)
    if len(peaks) == 0:
        return 0
        
    for size in range(len(peaks), 0, -1):
        if (len(A) % size == 0):
            block_size = len(A) // size
            flags = size
            block = [False] * size
            for peak in peaks:
                if block[peak // block_size] == False:
                    block[peak // block_size] = True
                    flags -= 1
            if flags == 0:
                return size
    
    return 0
