class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int req = target-nums[i];
            if(m.contains(req)){
                return {i,m[req]};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};