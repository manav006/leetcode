class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int zeroes=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }else{
                zeroes++;
            }
        }
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }
    }
};