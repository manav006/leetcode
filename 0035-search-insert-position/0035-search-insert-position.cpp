class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]) return nums.size();
        int low =0;
        int high = nums.size()-1;
        while(low<high){
            int mid =low-(low-high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high = mid;
            }else{
                low = mid+1;
            }
        }

        return high;
    }
};