//expected worst-case time complexity is O(N);
//expected worst-case space complexity is O(1)

#include <algorithm>

int findDominator (vector<int> &A) {
    int candidate = A[0];
    int count = 0;
    for (int x : A) {
        if (x == candidate) {
            count++;
        } else {
            if (count == 0) {
                candidate = x;
                count++;
            } else {
                count--;
            }
        }
    }
    return candidate;
}

int solution(vector<int> &A) {
    // write your code in C++11
    int N = A.size();
    if (N == 0) return -1;
    
    int domi = findDominator(A);
    int count = 0;
    for (int i=0; i<N; i++) {
        if (A[i] == domi) {
            count++;
            if (count > N/2) return i;
        }
    }
    return -1;
}
