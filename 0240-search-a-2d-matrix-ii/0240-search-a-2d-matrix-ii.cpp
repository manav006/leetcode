class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j= matrix[0].size()-1;

        while(i<matrix.size() && j>=0){
            int point = matrix[i][j];
            if(point==target){
                return true;
            }
            else if(point>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};