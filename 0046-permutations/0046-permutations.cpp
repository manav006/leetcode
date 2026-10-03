class Solution {
public:
    void generate(vector<int>&nums,vector<vector<int>>&ans,vector<int>v,vector<bool>&taken,int index){
        if(v.size()==nums.size()){
            ans.push_back(v);
        }

        for(int i=0;i<nums.size();i++){
            if(taken[i]){
                continue;
            }

            v.push_back(nums[i]);
            taken[i]=true;
            generate(nums,ans,v,taken,index+1);
            v.pop_back();
            taken[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>taken(nums.size(),false);
        vector<vector<int>>ans;
        vector<int>v;
        generate(nums,ans,v,taken,0);
        return ans;
    }
};