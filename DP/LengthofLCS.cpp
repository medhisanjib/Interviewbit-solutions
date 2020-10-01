//Length of Longest Increasing Subsequence
int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n = A.size();
    if (n <= 1) {
        return n;
    }
    vector<int>increasingDp(n, 1);
    
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if (A[i] > A[j]) {
                increasingDp[i] = max(increasingDp[i], 1 + increasingDp[j]);
            }
        }
    }
    
    vector<int>decreasingDp(n, 1);
    for(int i = n - 2; i >= 0; i--) {
        for(int j = n - 1; j > i; j--) {
            if(A[i] > A[j]) {
                decreasingDp[i] = max(decreasingDp[i], 1 + decreasingDp[j]);
            }
        }
    }
    
    int result = 1;
    for(int i = 0; i < n; i++) {
        result = max(result, increasingDp[i] + decreasingDp[i]);
    }
    
    return result - 1;
}