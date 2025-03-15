class Solution {
public:
vector<vector<int>>visited;
    bool dfs(int r, int c,vector<vector<char>>& board,string word,int i,int m,int n)
    {
        if(i==word.size())
            return true;
        if(r<0 || r>=m ||c<0 || c>=n || board[r][c]!=word[i] || visited[r][c] != 0  )
            return false;
        char t=board[r][c];
        board[r][c] = 1;
        if(dfs(r+1,c,board,word,i+1,m,n)||dfs(r,c+1,board,word,i+1,m,n)||dfs(r-1,c,board,word,i+1,m,n)||dfs(r,c-1,board,word,i+1,m,n))
            return true;
        board[r][c]=t;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        visited.resize(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dfs(i,j,board,word,0,m,n))return true;
            }
        }
        return false;
    }

};