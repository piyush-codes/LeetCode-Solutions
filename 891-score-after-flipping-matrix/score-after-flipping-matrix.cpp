class Solution {
public:
        int matrixScore(vector<vector<int>>& A) {
        int m = A.size(), n = A[0].size(), res = m;
        for(int j = 1; j < n; ++j) {
            int nOnes = 0;
            for(int i = 0; i < m; ++i)
                nOnes += A[i][j] == A[i][0];
            res = (res << 1) + max(nOnes, m - nOnes);
        }
        return res;
    }
};