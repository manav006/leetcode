class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeroes=0;
        int maxsize=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[j]==1){
                
                maxsize=max(maxsize,(j-i)+1);
                j++;
            }
            else if(zeroes<k){
                zeroes++;
                maxsize=max(maxsize,(j-i)+1);
                j++;
            }
            else{
                if(nums[i]==0){
                    zeroes--;
                    
                }
                
                    i++;
                
                maxsize=max(maxsize,(j-i)+1);
                
                
            }
        }

        return maxsize;
    }
};