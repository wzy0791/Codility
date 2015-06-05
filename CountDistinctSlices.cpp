#include <algorithm>

int solution(int M, vector<int> &A) {
    // write your code in C++11
    int count = 0;
    vector<bool> used(M+1, false);
    int i = 0, j = 0;
    int n = A.size();
    while (j<n) {
        if (used[A[j]] == false) { // moving j
            used[A[j]] = true;
            count += j-i+1; // key: how to calculate the number of slices end at j and starting at i
            if (count > 1000000000) return 1000000000;
            j++;
        } else { // moving i
            used[A[i]] = false;
            i++;
        }       
    }
    return count;
}
