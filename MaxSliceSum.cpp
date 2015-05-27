#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size();
    int cur_max = A[0];
    int max_sum = A[0];
    for (int i=1; i<n; i++) {
        if (cur_max > 0) {
            cur_max += A[i];
        } else {
            cur_max = A[i];
        }
        // or more concice
        // cur_max = max(cur_max+A[i], A[i])
        max_sum = max(max_sum, cur_max);
    }
    return max_sum;
