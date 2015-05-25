#include <algorithm>
int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size();
    vector<int> max_at (n);
    max_at[0] = A[0];
    
    for (int i=1; i<n; i++) {
        // find max_before A[i]
        int max_before = max_at[i-1];
        int j = 2;
        while (j<=i && j<=6) {
            max_before = max(max_before, max_at[i-j]);
            j++;
        }
        max_at[i] = max_before + A[i];
    }
    return max_at[n-1];
}
