int hist(vector<int>v){
    sort(v.begin(), v.end());
    int area=0;
    int n=v.size();
    for(int i=0;i<n;i++)
        area = max(area, v[i]*(n-i));
        
    return area;
}

int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    if(n==0)
        return 0;
    int m=A[0].size();
    vector<int>v = A[0];
    int area = hist(v);
    
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0)v[j]=0;
            else    v[j]++;
        }
        
        area = max(area, hist(v));
    }
    
    return area;
}
