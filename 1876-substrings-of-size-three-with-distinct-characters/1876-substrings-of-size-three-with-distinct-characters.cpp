class Solution {
public:
    int countGoodSubstrings(string s) {
        int good=0;
        int i=0;
        int j=2;
        while(j<s.size()){
            if(s[i]!= s[i+1] && s[i+1]!=s[j] && s[i]!=s[j]){
                good++;
            }
            i++;
            j++;
        }
        return good;
    }
};