class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans =0;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end());
        int minidx=v[0].second;
        for(int i=1;i<v.size();i++){
            if(v[i].second<minidx){
                minidx=v[i].second;
            }

            ans = max(ans,v[i].second-minidx);
        }
        return ans;
    }
};