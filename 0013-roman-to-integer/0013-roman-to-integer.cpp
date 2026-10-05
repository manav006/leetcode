class Solution {
public:
    int whatis(char c){
            if(c=='I'){
                return 1;
            }
            else if(c=='V'){
                return 5;
            }else if(c=='X'){
                return 10;
            }else if(c=='L'){
                return 50;
            }else if(c=='C'){
                return 100;
            }else if(c=='D'){
                return 500;
            }else if(c=='M'){
                return 1000;
            }
            return -1;
    }
    int romanToInt(string s) {
        int ans =0;
        for(int i=0;i<s.size();i++){
           if(i==s.size()-1){
            ans+=whatis(s[i]);
            continue;
           }
            if(whatis(s[i])<whatis(s[i+1])){
                ans-=whatis(s[i]);
            }else{
                ans+=whatis(s[i]);
            }
           
        }

        return ans;
    }
};