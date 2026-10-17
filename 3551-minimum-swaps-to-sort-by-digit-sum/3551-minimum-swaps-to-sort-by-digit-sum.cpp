class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<pair<int,int>>arr;
        int i=0;
        for(int n:nums){
            int number = n;
            int sum=0;
            while(n>0){
                int digit = n%10;
                n =n/10;
                sum+=digit;
            }
            arr.push_back({sum,i});
            i++;
        }
        sort(arr.begin(),arr.end(),[&](auto &a , auto & b){
            if(a.first!=b.first){
                return a.first<b.first;
            }

            return nums[a.second]<nums[b.second];
        });

        vector<int>pos(nums.size());
        for(int i=0;i<pos.size();i++){
            pos[arr[i].second]=i;
        }
        int swaps=0;
        for(int i=0;i<pos.size();i++){
            while(pos[i]!=i){
                swap(pos[i],pos[pos[i]]);
                swaps++;
            }
        }

        return swaps;
    }
};