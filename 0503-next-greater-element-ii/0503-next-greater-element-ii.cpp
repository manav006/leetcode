class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
        stack<int>s;
        int n = nums.size();
        for(int i=2*n-1;i>=0;i--){
            int idx = i%n;
            while(!s.empty() && s.top()<=nums[idx]){
                s.pop();
            }
            if(i<n){

            if(s.empty()){
                v[idx]=-1;
            }else{
                v[idx]=s.top();
            }

            }
            s.push(nums[idx]);

        }
        return v;
    }
};