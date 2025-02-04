class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m =grid.size(),n=grid[0].size();
        if (m + n <= k) return m + n - 2;
        vector<vector<vector<bool>>> vis (m ,vector<vector<bool>> (n,vector<bool> (k+1)) );
        queue < vector<int>> bfs;
        bfs.push({0,0,k});
        int steps=0;
        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
        while(!bfs.empty())
        {
            int size=bfs.size();
            while(size-->0)
            {
                auto cur = bfs.front();
                bfs.pop();
                if(cur[0]==m-1 && cur[1]==n-1)   return steps;
                
                for(auto d : dir)
                {
                    int i=cur[0]+d[0];
                    int j = cur[1] + d[1];
                    int obs = cur[2];
                    if(i>=0 && i<m && j>=0 && j < n)
                    {
                        
                        if(grid[i][j]==0 && !vis[i][j][obs])
                        {
                            bfs.push({i,j,obs});
                            vis[i][j][obs]=true;
                        }
                        else if(obs>0 && !vis[i][j][obs-1])
                        {
                            bfs.push({i,j,obs-1});
                            vis[i][j][obs-1]=true;
                        }

                    }
                }
               
            }
            ++steps;
        }
        return -1;
    }
};