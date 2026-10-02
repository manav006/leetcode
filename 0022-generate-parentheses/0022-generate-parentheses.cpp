class Solution {
public:
    void helper(int n , vector<string>&v,string s, int open , int close){
        if( open ==n && close==n){
            v.push_back(s);
            return ;
        }
        if(open<n){
        helper(n,v,s+"(",open+1,close);
        }
        if(close<open){
        helper(n,v,s+")",open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        
        helper(n,v,"",0,0);
        return v;
    }
};