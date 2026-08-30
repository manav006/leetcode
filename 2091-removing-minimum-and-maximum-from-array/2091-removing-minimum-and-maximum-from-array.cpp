class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int miniidx =-1;
        int mini = INT_MAX;
        int maxi =INT_MIN;
        int maxiidx =-1;
        int n =nums.size();

        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini= nums[i];
                miniidx= i;
            }

            if(nums[i]>maxi){
                maxi = nums[i];
                maxiidx=i;
            }
        }

        int left = min(miniidx,maxiidx);
        int right = max(miniidx,maxiidx);

        int remfrmleft=right+1;
        int remfrmright=n-left;
        int remfrmbothsides=(left+1)+(n-right);

        return min({remfrmleft,remfrmright,remfrmbothsides});
        
    }
};