class Solution {
public:
    string removeDuplicates(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++){

            if(v.size()==0){
                v.push_back(s[i]);
            }
            else if(v.back()==s[i]){
                v.pop_back();
            }
            else{
                v.push_back(s[i]);
            }
            
        }
        string str ="";
        for(char c:v){
            str+=c;
        }
        return str;
    }
};