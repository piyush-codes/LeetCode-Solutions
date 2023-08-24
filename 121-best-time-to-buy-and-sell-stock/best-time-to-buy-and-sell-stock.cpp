class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf=INT_MAX,cur,ma=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(lsf>prices[i])
                lsf=prices[i];
            cur=prices[i]-lsf;
            if(ma<cur)
                ma=cur;

        }
        return ma;
    }
};