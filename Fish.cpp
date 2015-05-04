#include <algorithm>
#include <stack>

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11
    int alive = 0;
    int N = A.size();
    stack<int> fish_stk;
    for (int i=0; i<N; i++) {
        if (B[i] == 0) {
            if (fish_stk.empty()) {
                alive += 1;
            } else {
                while (!fish_stk.empty()) {
                    if (fish_stk.top() < A[i]) {
                        fish_stk.pop();
                    } else {
                        break;
                    }
                }
                if (fish_stk.empty()) alive += 1;
            }
        } else {
            fish_stk.push(A[i]);
        }
    }
    
    return alive + fish_stk.size();
}
