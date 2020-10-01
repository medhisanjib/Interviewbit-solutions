//Distinct Subsequences
int Solution::numDistinct(string A, string B) {
    int n=A.length();
    int m=B.length();
    A = '#' + A;
    B = '#' + B;
    int t[n+1][m+1];
    memset(t, 0, sizeof(t));
    for(int i=0;i<=n;i++)
        t[i][0]=1;
        
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            t[i][j] = t[i-1][j];
            if(A[i]==B[j])
                t[i][j] += t[i-1][j-1];
        }
    }
    
    return t[n][m];
}