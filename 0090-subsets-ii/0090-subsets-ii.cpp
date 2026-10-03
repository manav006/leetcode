class Solution {
public:
    void generate(vector<int>&nums, set<vector<int>>& ans, vector<int>&v,int i){
        if(i==nums.size()){
            ans.insert(v);
            return;
        }
        v.push_back(nums[i]);
        generate(nums,ans,v,i+1);
        v.pop_back();
        generate(nums,ans,v,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>v;
        generate(nums,ans,v,0);
        
        vector<vector<int>>real;
        for(vector<int> i:ans){
            real.push_back(i);
        }
        return real;
    }
};