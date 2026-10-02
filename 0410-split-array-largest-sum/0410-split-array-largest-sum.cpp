class Solution {
public:
    int subarray(vector<int>&nums,int mid){
        int cnt=1;
        int sum=0;
        for(int i:nums){
            if(i+sum>mid){
                cnt++;
                sum=0;
            }
            sum+=i;
        }

        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans =-1;
        while(low<=high){
            int mid = low-(low- high)/2;
            int subs = subarray(nums,mid);
            if(subs>k){
                
                low = mid+1;
            }else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};