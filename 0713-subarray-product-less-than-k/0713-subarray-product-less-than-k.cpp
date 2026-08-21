class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int sub=0;
        for(int i=0;i<nums.size();i++){
            int j=i;
            long long product=1;
            while(j<nums.size()){
                product=product*nums[j];
                if(product<k){
                    sub++;
                }else{
                    break;
                }
                
                j++;
            }
        }
        return sub;
    }
};