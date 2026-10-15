class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>freq;
        for(int x:arr){
            mp[x]++;
        }
        for(auto m:mp){
            freq[m.second]++;
        }

        for(auto m:freq){
            if(m.second>1){
                return false;
            }
        }


        return true;
    }

};