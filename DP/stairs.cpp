int Solution::climbStairs(int A) {
    if(A==1 || A==2)return 1;
    int V[A+1];
    V[1]=1,V[2]=2;
    for(int i=3;i<=A;i++)
        V[i]=V[i-1]+V[i-2];
        
    return V[A];
}
