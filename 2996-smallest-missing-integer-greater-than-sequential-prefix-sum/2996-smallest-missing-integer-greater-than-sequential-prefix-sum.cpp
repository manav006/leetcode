class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                sum+=nums[0];
                continue;
            }

            if(nums[i]!=nums[i-1]+1){
                break;
            }
            sum+=nums[i];
        }

        while(find(nums.begin(),nums.end(),sum)!=nums.end()){
            sum+=1;
        }
        return sum;
    }
};