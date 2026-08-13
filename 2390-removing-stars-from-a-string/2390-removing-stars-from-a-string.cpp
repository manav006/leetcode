class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='*' && !st.empty()){
                st.pop();
            }
            else if(c!='*'){
                st.push(c);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};