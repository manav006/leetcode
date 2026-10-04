class Solution {
public:
    int col(vector<vector<int>>&mat , int mid ){
        int maxi =mat[0][mid];
        int ans=0;
        for(int i=0;i<mat.size();i++){
            if(mat[i][mid]>maxi){
                maxi = mat[i][mid];
                ans = i;
            }
        }
        return ans;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0;
        int high = mat[0].size()-1;
        while(low<=high){
            int mid = low-(low-high)/2;
            int row= col(mat,mid);
            int left = mid==0? -1 : mat[row][mid-1];
            int right = mid==mat[0].size()-1 ? -1 : mat[row][mid+1];

            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(left>mat[row][mid]){
                high= mid-1;
            }else{
                low = mid+1;
            }

        }

        return {-1,-1};
    }
};