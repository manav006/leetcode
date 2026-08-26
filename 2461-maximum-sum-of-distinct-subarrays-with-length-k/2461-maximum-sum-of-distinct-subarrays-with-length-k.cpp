class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long maxi = 0;
        int i = 0;
        int j = k - 1;
        unordered_map<int, int> mp;
        for (int p = 0; p < k; p++) {
            mp[nums[p]]++;
            sum += nums[p];
        }
        while (j < nums.size()) {
           
            if (mp.size() == (j - i) + 1) {
                maxi = max(maxi, sum);
            }

            if (j == nums.size() - 1) {
                break;
            }

            sum -= nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
            sum += nums[j + 1];
            mp[nums[j + 1]]++;
            i++;
            j++;
        }

        return maxi;
    }
};