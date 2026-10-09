class Solution {
public:
    int minAddToMakeValid(string s) {
        int depth =0;
        int total =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(i!=0 && s[i-1]==')' && depth<0){
                    total+=abs(depth);
                    depth=0;
                }
                depth++;
            }else{
                depth--;
            }
        }

        return total+=abs(depth);
    }
};