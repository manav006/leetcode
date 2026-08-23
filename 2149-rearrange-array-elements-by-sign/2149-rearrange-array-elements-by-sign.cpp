class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v;
        int i=0;
        int j=0;
        while(j<nums.size() && i<nums.size()){
            while(i<nums.size()&& nums[i]<0){
                i++;
            }

            while(j<nums.size() && nums[j]>=0){
                j++;
            }

            v.push_back(nums[i]);
            v.push_back(nums[j]);
            i++;
            j++;

        }
        return v;
    }
};