class Solution {
public:
    void generate(vector<int>&nums , vector<vector<int>>&v, int i, vector<int> &temp){
        if(i>=nums.size()){
            v.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        generate(nums,v,i+1,temp);
        temp.pop_back();
        generate(nums,v,i+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>temp;
        generate(nums,v,0,temp);
        return v;
    }
};