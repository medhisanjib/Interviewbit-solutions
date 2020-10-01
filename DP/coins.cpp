int compute(vector<int>&A, int l, int r, bool turn, vector<vector<int>>&dp){
    if(l>r) 
        return 0;
    if(l==r)
        return turn ? A[l] : 0;
    if(dp[l][r]!=-1)    return dp[l][r];
    int left = compute(A, l+1, r, !turn, dp);
    int right = compute(A, l, r-1, !turn, dp);
    
    if(turn)
        dp[l][r] = max(left+A[l], right+A[r]);
    else
        dp[l][r] = min(left, right);
        
    return dp[l][r];
}

int Solution::maxcoin(vector<int> &A) {
    int len=A.size();
    vector<vector<int>>dp(len, vector<int>(len, -1));
    dp[0][len-1] = compute(A, 0, len-1, true, dp);
    return dp[0][len-1];
}
