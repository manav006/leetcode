class Solution {
public:
    void generate(vector<int>&nums,vector<int>&v, vector<vector<int>>&ans,int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        generate(nums,v,ans,i+1);
        v.pop_back();
        generate(nums,v,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        generate(nums,v,ans,0);
        return ans;
    }
};