class Solution {
public:
    int majorityElement(vector<int>& A) {
        int uni=0;
    int sz=A.size(),prev=A[0];
    for(int i=0;i<sz;i++)
    {
        if(A[i]==prev)
            uni++;
        else{
            if(uni>0)
            {
                uni--;
            }
            else{
                prev=A[i];
                uni=1;
            }
        }
    }
    return prev;
    }
};