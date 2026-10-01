class Solution {
public:
    int subarray(vector<int>&nums,int mid){
        int sum =0;
        int subs=1;
        for(int x:nums){
            if(x+sum>mid){
                subs++;
                sum=0;
            }
            sum+=x;
        }

        return subs;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);
        int ans =-1;
        while(low<=high){
            int mid=low-(low-high)/2;
            int subs = subarray(nums,mid);
            if(subs<=k){
                ans = mid;
                high = mid-1;
            }else{
                low= mid+1;
            }
        }
        return ans;
    }
};