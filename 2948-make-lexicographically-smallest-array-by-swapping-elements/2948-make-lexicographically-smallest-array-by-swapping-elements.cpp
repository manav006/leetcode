class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>>arr;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }

        sort(arr.begin(),arr.end());

        int start =0;

        while(start<n){
            int i=start;
            while(i+1<n && abs(arr[i+1].first-arr[i].first)<=limit){
                i++;
            }

            vector<int>indices;
            for(int j=start;j<=i;j++){
                indices.push_back(arr[j].second);
            }

            sort(indices.begin(),indices.end());
            for(int j=0;j<indices.size();j++){
                nums[indices[j]]= arr[start+j].first;
            }

            start=i+1;
        }

        return nums;
    }
};