class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int majority=nums[0];
        int curr=nums[0];
        int maxstreak=0;
        int streak=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==curr){
                streak++;
            }
            else{
                if(streak>maxstreak){
                    maxstreak=streak;
                    majority=curr;
                }
                curr=nums[i];
                streak=1;
            }
        }
         if(streak>maxstreak){
            maxstreak=streak;
            majority=curr;
            }
        return majority;
    }
};