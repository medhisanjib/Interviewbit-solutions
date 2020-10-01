//Longest Common Subsequence
int getLCS(vector<vector<int>>& memo, string& A, string& B, int idxA, int idxB) {
    if (idxA < 0 || idxB < 0)
        return 0;

    if (memo[idxA][idxB] != -1)
        return memo[idxA][idxB];

    if (A[idxA] == B[idxB])
        return memo[idxA][idxB] = getLCS(memo, A, B, idxA - 1, idxB - 1) + 1;

    return memo[idxA][idxB] = max(getLCS(memo, A, B, idxA - 1, idxB), getLCS(memo, A, B, idxA, idxB - 1));
}

int Solution::solve(string A, string B) {
    int lenA = A.length(), lenB = B.length();
    vector<vector<int>> memo(lenA, vector<int>(lenB, -1));
    return getLCS(memo, A, B, lenA - 1, lenB - 1);
}