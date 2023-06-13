class Solution {
public:
   int equalPairs(vector<vector<int>>& g) {
        int n=g.size();
        vector<string> gc,gr;

        for(int i=0;i<n;i++){
            string s;
            for(int j=0;j<n;j++){
                s+=to_string(g[j][i]);
                s+="-";
            }
            gc.push_back(s);
        }
        for(int i=0;i<n;i++){
            string s;
            for(int j=0;j<n;j++){
                s+=to_string(g[i][j]);
                s+="-";
            }
            gr.push_back(s);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(gr[i]==gc[j]){  // comparing the vectors
                    ans++;
                }
            }            
        }
        return ans;
    }
};