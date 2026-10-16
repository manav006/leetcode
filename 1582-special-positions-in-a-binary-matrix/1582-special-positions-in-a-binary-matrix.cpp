class Solution {
public:
    bool check(vector<vector<int>>& mat , int i, int j){
        for(int r =0;r<mat.size();r++){
            if(r==i) continue;
            if(mat[r][j]==1){
                return false;
            }
        }
        for(int c =0;c<mat[0].size();c++){
            if(c==j) continue;
            if(mat[i][c]==1){
                return false;
            }
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int ans =0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    bool is = check(mat,i,j);
                    if(is){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};