class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = nums[0];
        int minisize = INT_MAX;
        int i = 0;
        int j = 0;
        while(j<nums.size()){
            if(sum>=target){
                int size=(j-i)+1;
                if(size<minisize){
                    minisize=size;
                }
            }

            if(i<nums.size() && sum>=target){
                sum-=nums[i];
                i++;
            }else{
                j++;
                if(j<nums.size()){
                sum+=nums[j];
                }
            }
        }
        
        if(minisize==INT_MAX){
            return 0;
        }
        return minisize;
    }
};