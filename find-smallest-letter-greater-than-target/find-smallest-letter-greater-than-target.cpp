class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char def=letters[0];
        sort(letters.begin(),letters.end());
        for(int i=0;i<letters.size();i++)
            if(letters[i]>target)
                return letters[i];
                
        return def;
    }
};