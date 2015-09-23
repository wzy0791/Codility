#include <algorithm>
#include <unordered_map>
int solution(int X, vector<int> &A) {
    // write your code in C++11
    unordered_map<int, bool> pos;
    for (int i=1; i<=X; ++i) pos[i] = false;
    
    int n = A.size();
    for (int i=0; i<n; ++i) {
        if (pos[A[i]] == false) {
            X -= 1;
            pos[A[i]] = true;
        }
        if (X == 0) return i;
    }
    return -1;
}
