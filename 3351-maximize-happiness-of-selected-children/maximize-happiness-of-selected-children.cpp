class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        int i=0;
        long long sum=0;
        while(k--)
        {
           happiness[i] = max(happiness[i] - i, 0);
            sum += happiness[i++];
        }
        return sum;
    }
};