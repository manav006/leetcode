class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem =sum-k;
            if(sum==k){
                count++;
            }
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[sum]++;

        }

        return count;
    }
};