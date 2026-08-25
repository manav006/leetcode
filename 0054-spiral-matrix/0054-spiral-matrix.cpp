class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr=0;
        int er=matrix.size()-1;
        int sc=0;
        int ec=matrix[0].size()-1;
        vector<int>v;
        while(sr<=er && sc<=ec){
            
            for(int j=sc;j<=ec;j++){
                v.push_back(matrix[sr][j]);
            }
            
            sr++;

            for(int i=sr;i<=er;i++){
                v.push_back(matrix[i][ec]);
            }
            
            ec--;
            if(sr<=er){
            for(int j=ec;j>=sc;j--){
                v.push_back(matrix[er][j]);
            }
            }
            er--;

            if(sc<=ec){
            for(int i=er;i>=sr;i--){
                v.push_back(matrix[i][sc]);
            }
            }
            sc++;
        }

        return v;
    }
};