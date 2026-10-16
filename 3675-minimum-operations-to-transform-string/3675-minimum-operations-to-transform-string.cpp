class Solution {
public:
    int minOperations(string s) {
        int ans =0;
        for(char c : s){
            int dig = (c-'a');
            ans = max(ans , (26-dig)%26);
        }
        return ans;
    }
};