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
        
    for max_flags in range(len(peaks), 1, -1):
        if (max_flags*(max_flags-1) <= peaks[len(peaks)-1]-peaks[0]):
            flags = max_flags-1
            prev_flag = peaks[0]
            for i in range(0, len(peaks)):
                if peaks[i]-prev_flag >= max_flags:
                    prev_flag = peaks[i]
                    flags -=1
                    if flags == 0:
                        return max_flags
    return 1
