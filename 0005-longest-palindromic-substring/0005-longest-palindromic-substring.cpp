class Solution {
public:
    string longestPalindrome(string s) {
        string longest ="";
        for(int i=0;i<s.size();i++){
            int low = i;
            int high = i;
            while( (low>=0 && high<s.size()) && s[low]==s[high]){
                low --;
                high++;
            }
            string sub = s.substr(low+1,high-low-1);

            if(sub.size()>longest.size()){
                longest = sub;
            }

            low = i;
            high = i+1;
            while((low>=0 && high<s.size()) && s[low]==s[high]){
                low--;
                high++;
            }
            sub = s.substr(low+1,high-low-1);
            if(sub.size()>longest.size()){
                longest = sub;
            }
        }

        return longest;
    }
};