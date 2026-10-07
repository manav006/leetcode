class Solution {
public:
    void generate(int n,vector<string>&v,int open,int close , string s){
        if(open ==n && close ==n){
            v.push_back(s);
            return;
        }
        if(open>n) return;
        if(close>open) return;
        generate(n,v,open+1,close,s+"(");
        generate(n,v,open,close+1,s+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        generate(n,v,0,0,"");
        return v;
    }
};