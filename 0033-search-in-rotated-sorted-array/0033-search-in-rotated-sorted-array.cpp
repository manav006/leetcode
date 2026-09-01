class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        while(low<high){
            int mid = low-(low-high)/2;
            if(nums[mid]>nums[nums.size()-1]){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        int brake = low;

        int leftst = 0;
        int leftend= brake-1;
        while(leftst<=leftend){
            int mid = leftst-(leftst-leftend)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                leftend=mid-1;
            }
            else{
                leftst=mid+1;
            }
        }


        int rightst = brake;
        int rightend= nums.size()-1;
        while(rightst<=rightend){
            int mid = rightst-(rightst-rightend)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                rightend=mid-1;
            }
            else{
                rightst=mid+1;
            }
        }

        return -1;
    }
};