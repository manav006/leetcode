class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ans =-1;
        int maxi =-1;
        for(int i=0;i<mat.size();i++){
            int ones =0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    ones++;
                }
            }
            if(ones>maxi){
                ans = i;
                maxi = ones;
            }
        }

        return {ans ,maxi};
    }
};