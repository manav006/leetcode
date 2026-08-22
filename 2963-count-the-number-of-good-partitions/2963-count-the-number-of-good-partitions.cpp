class Solution {
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        
        int element=0;
        int i=0;
        while(i<nums.size()){
            if(mp[nums[i]]==i){
                element++;
                i++;
            }else{
                int range = mp[nums[i]];
                while(i<=range){
                    if(mp[nums[i]]!=i && mp[nums[i]]>range){
                        range=mp[nums[i]];
                    }
                    i++;
                }
                element++;
            }
        }
        int mod = 1e9+7;
        int ans=1;
        for(int i=0;i<element-1;i++){
            ans= (ans*2)%mod;
        }
        return ans;
    }
};