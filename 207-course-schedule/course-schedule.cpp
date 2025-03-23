class Solution {
public:

    bool dfs(int node,vector<vector<int>>&graph,vector<int>& vis,vector<int>&path)
    {
        

        vis[node]=1;
        path[node]=1;
        for(int i=0;i<graph[node].size();i++)
        {
            if(path[graph[node][i]])
                return true;
            if(!vis[graph[node][i]]&&
            dfs(graph[node][i],graph,vis,path)) return true;
        }
        path[node]=0;
        return false;
    
    }

    bool canFinish(int numcourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numcourses);
        vector<int>vis(numcourses);
        for(auto i:prerequisites)
        {
            graph[i[0]].push_back(i[1]);
        }
        vector<int>path(numcourses);
            
        for(int i=0;i<numcourses;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,graph,vis,path))
                {
                    return false;
                }
            }
        }
        return true;
    }
};