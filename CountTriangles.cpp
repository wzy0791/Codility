#include <algorithm>
int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size();
    if (n<3) return 0;
    int count = 0;
    sort(A.begin(), A.end());
    for (int i=0; i<n-2; i++) {
        int z = 0;
        for (int j=i+1; j<n-1; j++) {
            while (A[i]+A[j] > A[z] && z<n) {
                z++;
            }
            count += z-1-j;
        }
    }
    return count;
}
