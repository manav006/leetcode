class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int ans =-1;
        int n = nums.size()-1;
        vector<int>pre;
        for(int i=0;i<nums.size();i++){
            maxi = max(nums[i],maxi);
            pre.push_back(maxi);
        }

        for(int i = n;i>=0;i--){
            mini = min(mini,nums[i]);
            if((pre[i]-mini)<=k){
                ans= i;
            }
        }

        return ans;
    }
};