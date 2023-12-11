class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int find=0.25*arr.size();
         int prev = -1;
         int count = 0;
        for(int i : arr) {
            if(i == prev) {
                count++;
            }
            else {
                prev = i;
                count = 1;
            }
            if(count > find) {
                return i;
            }
        }
        return -1;
    }
};