#include <algorithm>
#include <stack>

int findLeader(vector<int> &A) {
    int leader = 1000000001;
    int N = A.size();
    if (N == 1) return A[0];
    stack<int> stk;
    stk.push(A[0]);    
    for (int i=1; i<N; i++) {
        if (stk.empty()) {
            stk.push(A[i]);
            continue;
        }
        if (A[i] == stk.top()) {
            stk.push(A[i]);
        } else {
            stk.pop();
        }
    }
    if (!stk.empty()) return stk.top();
    return leader;
}

int countLeader(vector<int> &A, int leader) {
    int count = 0;
    for (int x : A) {
        if (x == leader) {
            count += 1;
        }
    }
    return count;
}

int solution(vector<int> &A) {
    // write your code in C++11
    int leader = findLeader(A);
    if (leader == 1000000001) return 0;
    int total_leader = countLeader(A, leader);
    int num_equi = 0;
    int num_leader = 0;
    int N = A.size();
    for (int i=0; i<N-1; i++) {
        if (A[i] == leader) {
            num_leader += 1;
        }
        if (num_leader > (i+1)/2 && (total_leader-num_leader) > (N-i-1)/2) {
            num_equi += 1;
        }
    }
    return num_equi;
}
