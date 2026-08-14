class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int ans = 0;
        int left=0;
        int right =0;
        while(right<s.size()){
            m[s[right]]++;
            
                while(m[s[right]]>2){
                    m[s[left]]--;
                    left++;
                }
            
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};