int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size(); // n>=2
    int m = 6; // six-sided die
    vector<int> f;
    f.push_back(A[0]);
    for (int i=1; i<n; i++) {
        int cur_max = f[i-1];
        for (int j = 2; i-j >= 0 && j<=m; j++) {
            cur_max = max(cur_max, f[i-j]);
        }
        f.push_back(cur_max + A[i]);
    }
    return f.back();
}
