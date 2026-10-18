class Solution {
public:
    int minimumSum(int num) {
        
        vector<int>nums;
        while(num>0){
            int dig = num%10;
            num = num/10; 
            nums.push_back(dig);
        }
        sort(nums.begin(),nums.end());

        int n1 = nums[0]*10 +nums[2];
        int n2 = nums[1]*10 + nums[3];

        return n1+n2;

    }
};