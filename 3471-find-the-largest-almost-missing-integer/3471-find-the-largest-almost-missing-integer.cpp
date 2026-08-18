class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k>nums.size()){
            return -1;
        }

        if(k==nums.size()){
            int maxi = *max_element(nums.begin(),nums.end());
            return maxi;
        }

        if(k==1){
            sort(nums.begin(),nums.end());
            for(int i=nums.size()-1;i>=0;i--){
                if(i==nums.size()-1 && nums[i]!=nums[i-1]){
                    return nums[i];
                }
                else if(i==0 && nums[i]!=nums[i+1]){
                    return nums[i];
                }
                else{
                    if(i!=0 && i!=nums.size()-1){
                        if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
                            return nums[i];
                        }
                    }
                }


            }
            
        }

        if(nums[0]>nums[nums.size()-1]){
             
            if(find(nums.begin()+1,nums.end(),nums[0])==nums.end()){
                return nums[0];
            }
            else if(find(nums.begin(),nums.end()-1,nums[nums.size()-1])==nums.end()-1){
                return nums[nums.size()-1];
            }
        }else{
            if(find(nums.begin(),nums.end()-1,nums[nums.size()-1])==nums.end()-1){
                return nums[nums.size()-1];
            }else if(find(nums.begin()+1,nums.end(),nums[0])==nums.end()){
                return nums[0];
            }
        }

        return -1;
    }
};