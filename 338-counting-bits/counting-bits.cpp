class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> t(n+1);
        
        // t[0] will be 0 beacuse 0 has count of set bit is 0;
        t[0] = 0;
        
       for(int i=1;i<=n;i++)
       {
           if(i%2)
           t[i]=t[i/2]+1;
           else
           t[i]=t[i/2];
       }
        
        return t;
    }
};