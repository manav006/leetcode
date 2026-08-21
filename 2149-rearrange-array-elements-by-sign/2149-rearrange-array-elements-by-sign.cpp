class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size());
        int j=0;
        int k=0;
        int i=0;
        while(i<nums.size()){
            while(j<nums.size() && nums[j]<0){
                j++;
            }
            while(k<nums.size() && nums[k]>=0){
                k++;
            }
            if(i%2==0){
                v[i]=nums[j];
                j++;
            }else{
                v[i]=nums[k];
                k++;
            }
            i++;
        }
        return v;
    }
};