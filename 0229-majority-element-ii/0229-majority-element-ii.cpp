class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int needs = nums.size()/3;
        vector<int>ans;
        int streak=1;
        int curr =nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==curr){
                streak++;
            }else{
                if(streak>needs){
                    ans.push_back(curr);
                }
                curr=nums[i];
                streak=1;
            }
        }
        if(streak>needs){
                    ans.push_back(curr);
                }
        return ans;
    }
};