class Solution {
public:
   
    int helper(vector<int>& visited,vector<vector<int>>& g,int node)
    {
       visited[node]=1;
            for(int i=0;i<g.size();i++)
            {
                if(g[node][i]==1&&!visited[i])
                    helper(visited,g,i);
            }

        
        return 0;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
         vector<int>visited(isConnected.size(),0);
        int province=0;
          for (int i = 0; i < isConnected.size(); i++) {
            if (!visited[i]) {
                province++;
                helper(visited,isConnected, i);
            }
        }
        return province;
    }
};