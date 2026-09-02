class Solution {
public:
    vector<vector<int>>ans;
    vector<int>v;
    void backtrack(vector<int>&nums, int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }

        v.push_back(nums[i]);
        backtrack(nums,i+1);
        v.pop_back();
        backtrack(nums,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return ans;
    }
};