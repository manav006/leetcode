class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int streak=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                maxi=max(streak,maxi);
                streak=0;
            }else{
                streak++;
            }
        }
        maxi=max(streak,maxi);

        return maxi;

    }
};