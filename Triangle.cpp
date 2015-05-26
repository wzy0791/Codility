#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size();
    if (n <= 2) return 0;
    // sort first
    sort(A.begin(), A.end());
    for (int i=0; i<=n-3; i++) {
        if (A[i] > 0) {
            for (int j=i+1; j<=n-2; j++) {
                long long a = (long long) A[i] + (long long) A[j];
                long long b = (long long) A[j+1];
                if (a > b) return 1;
                // otherwise, check next j
            }
        }
    }
    return 0;
}
