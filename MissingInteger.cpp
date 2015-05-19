#include <algorithm>
int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size();
    vector<int> count(n+1, 0);
    for (int x : A) {
        if (x > 0 && x <= n) {
            count[x]++;
        }
    }
    
    for (int i=1; i<n+1; i++) {
        if (count[i] == 0) return i;
    }
    
    return n+1;
}
