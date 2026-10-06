class Solution {
public:
    int beautySum(string s) {
        int total =0;
        for(int i=0;i<s.size();i++){
            unordered_map<int,int>mp;


            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto m:mp){
                    mini = min(m.second,mini);
                    maxi = max(m.second,maxi);
                }
                total+=(maxi-mini);
            }
        }

        return total;
    }
};