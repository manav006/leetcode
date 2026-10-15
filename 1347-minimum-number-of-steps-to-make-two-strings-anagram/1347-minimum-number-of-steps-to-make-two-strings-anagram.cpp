class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int x:s){
            mp1[x]++;
        }

        for(int x:t){
            mp2[x]++;
        }

        int ans=0;
        for(auto m:mp1){
            if(m.second>mp2[m.first]){
                ans+=m.second-mp2[m.first];
            }
        }

        return ans;

        return ans;
        
    }
};