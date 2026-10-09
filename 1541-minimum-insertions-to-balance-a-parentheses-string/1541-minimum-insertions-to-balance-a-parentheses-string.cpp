class Solution {
public:
    int minInsertions(string s) {
        int req=0;
        int ans=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(req%2==1){
                    ans++;
                    req--;
                }
                req+=2;
            }else{
                req--;
                if(req<0){
                    ans++;
                    req=1;
                }
                
            }
        }

        return ans+ req;
    }
};