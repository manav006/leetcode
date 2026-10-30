class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for (int n : nums) {
            vector<int> temp;
            while (n > 0) {
                int dig = n % 10;
                n /= 10;
                temp.push_back(dig);
                
            }
            reverse(temp.begin(), temp.end());
            for (int t : temp) {
                v.push_back(t);
            }
        }
        return v;
    }
};