//Longest Palindromic Subsequence
int Solution::solve(string A) {
    string B;int n=A.length();
    for(int i=A.length()-1;i>=0;i--) B.push_back(A[i]);
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(A[i-1]==B[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}