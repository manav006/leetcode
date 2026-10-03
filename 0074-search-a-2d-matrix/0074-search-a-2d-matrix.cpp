class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low =0;
        int high = (rows*cols)-1;
        while(low<=high){
            int mid = low-(low-high)/2;
            int num = matrix[mid/cols][mid%cols];
            if(num==target){
                return true;
            }else if(num>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return false;
    }
};