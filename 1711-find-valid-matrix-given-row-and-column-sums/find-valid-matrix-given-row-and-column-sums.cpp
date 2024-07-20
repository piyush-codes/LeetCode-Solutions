class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>>ans(rowSum.size(),vector<int>(colSum.size()));
        int curR=0,curC=0;
        int Rsz=rowSum.size(),Csz=colSum.size();
        for(int i=0;i<Rsz;i++)
        {
            for(int j=0;j<Csz;j++)
            {
                ans[i][j]=min(rowSum[i],colSum[j]);
                rowSum[i]-=ans[i][j];
                colSum[j]-=ans[i][j];
            }
        }
        return ans;

    }
};