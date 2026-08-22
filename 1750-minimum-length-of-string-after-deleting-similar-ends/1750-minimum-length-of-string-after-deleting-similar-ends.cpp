class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j= s.size()-1;
        while(i<j){
            
            if(s[i]==s[j]){
                char curr = s[i];
                while(s[i]==curr){
                    i++;
                    if(i>j) return 0;
                }

                while(s[j]==curr){
                    j--;
                    if(j<i) return 0;
                }
            }else{
                return j-i+1;
            }
        }

        if(j<i){
            return 0;

        }else{
            return j-i+1;
        }
    }
};