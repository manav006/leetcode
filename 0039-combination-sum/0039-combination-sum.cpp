class Solution {
public:
    void generate(vector<int>& candidates, int target,vector<vector<int>>&v, vector<int>&temp, int i,int sum){

        if(sum == target){
            v.push_back(temp);
            return;
        }
        if(i==candidates.size() || sum>target){
            return;
        }
        temp.push_back(candidates[i]);
        generate(candidates,target,v,temp,i,sum+candidates[i]);
        temp.pop_back();
        generate(candidates,target,v,temp,i+1,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>temp;
        generate(candidates,target,v,temp,0,0);
        return v;
    }
};