class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>sol;
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0,left=0,right=col-1,bottom=row-1;
        //while(sol.size()<=(row*col))
        //{
            while(top<=bottom && left<=right)
            {
                for(int itr=left;itr<=right;itr++)
                    sol.push_back(matrix[top][itr]);
                top++;
                for(int itr=top;itr<=bottom;itr++)
                    sol.push_back(matrix[itr][right]);
                right--;
                if(top<=bottom){
                for(int itr=right;itr>=left;itr--)
                    sol.push_back(matrix[bottom][itr]);
                bottom--;
                }
                if(left<=right){
                for(int itr=bottom;itr>=top;itr--)
                {
                    sol.push_back(matrix[itr][left]);
                }
                left++;
                }
            }
        
        return sol;
    }
};