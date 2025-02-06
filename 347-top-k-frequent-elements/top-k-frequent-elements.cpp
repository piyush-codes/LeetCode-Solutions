class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums)
            m[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto it = m.begin(); it != m.end();it++){
            pq.push(pair(it->second,it->first));
        }   
        vector<int> res; 
        for(int i = 0; i < k;i++){
            int val = pq.top().second;
            res.push_back(val);
            pq.pop();
        }
        return res;
    }
};