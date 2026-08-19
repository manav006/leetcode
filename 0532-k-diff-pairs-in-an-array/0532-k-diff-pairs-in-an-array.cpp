class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int counter=0;
        if(k==0){
            for(auto it :m){
                if(it.second>=2){
                    
                    counter++;
                }
            }
            return counter;
        }
        

        for(auto key:m){
            int target = k+key.first;
            if(m.count(target) ){
                counter++;
            }
        }

        return counter;
    }
};