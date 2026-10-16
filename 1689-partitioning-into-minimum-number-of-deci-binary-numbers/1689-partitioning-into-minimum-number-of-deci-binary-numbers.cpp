class Solution {
public:
    int minPartitions(string n) {
        int ans =0;
        for(char c :n){
            int dig = c-'0';
            ans = max(dig ,ans);
        }
        return ans;
    }
};