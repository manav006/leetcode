class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi =INT_MIN;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
           double h =(double)sum/k;
           if(maxi<h){
            maxi= h;
           }
        int i=0;
        int j=k-1;
        while(j<nums.size()-1){
           
            sum-=nums[i];
            sum+=nums[j+1];
            h =(double)sum/k;
           if(maxi<h){
            maxi= h;
           }
            i++;
            j++;
        }

        return maxi;
    }
};