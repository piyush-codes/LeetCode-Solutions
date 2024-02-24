class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
      vector<pair<int,int>>mp;
      pair<int,int>tmp;
      for(int i=0;i<ages.size();i++)
      {

          tmp.first=ages[i];
          tmp.second=scores[i];
          mp.push_back(tmp);
      }  
      sort(mp.begin(),mp.end());
      vector<int>dp(ages.size(),0);
      int best=0;
      for (int i=0;i<ages.size();i++)
      {
          dp[i]=mp[i].second;
            for (int j=0;j<i;j++)
            {
                if(mp[i].second >= mp[j].second)
                {
                    dp[i]=max(dp[i],dp[j]+mp[i].second);
                }

            }
            best= max(best,dp[i]);
      }
      return best;
      
    }
};