class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>pair;
         for (int i = 0; i < position.size(); i++) {
            pair.push_back({position[i], speed[i]});
        }
        sort(pair.rbegin(), pair.rend());
        int sz=position.size();
        double maxTime=0.0;
        int count=0;
        for(int i=0;i<sz;i++)
        {
            double time = (double)(target-pair[i].first) / pair[i].second ;
            if(time>maxTime){
                count++;
                maxTime = time;
            }
        }
        return count;

    }
};