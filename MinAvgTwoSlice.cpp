// Key idea: only need to check slice of two and slice of three
int solution(vector<int> &A) {
    // write your code in C++11
    int n = A.size();
    int min_idx = 0;
    double min_avg = 10001;
    if (n == 2) return min_idx;
    // slice of two elements
    for (int i=0; i<=n-2; i++) {
        double avg = (A[i]+A[i+1])/2.0;
        if (avg < min_avg) {
            min_avg = avg;
            min_idx = i;
        }
    }
    // slice of three elements
    for (int i=0; i<=n-3; i++) {
        double avg = (A[i]+A[i+1]+A[i+2])/3.0;
        if (avg < min_avg) {
            min_avg = avg;
            min_idx = i;
        }
    }
    return min_idx;
}
