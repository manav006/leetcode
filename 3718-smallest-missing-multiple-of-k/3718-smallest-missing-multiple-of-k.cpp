class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int num:nums){
            m[num]++;
        }

        int i=1;
        while(true){
            if(m.find(k*i)==m.end()){
                return k*i;
            }
            i++;
        }

        return 0;
    }
};