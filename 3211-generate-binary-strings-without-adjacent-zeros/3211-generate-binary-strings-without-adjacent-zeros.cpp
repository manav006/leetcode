class Solution {
public:
    void  generate(int n, vector<string>& ans, string s , int last){
        if(n==0){
            ans.push_back(s);
            return;
        }

        generate(n-1,ans,s+"1" ,1);

        if(last!=0){
            generate(n-1,ans,s+"0",0);
        }
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        generate(n,ans,"",-1);
        return ans;
    }
};