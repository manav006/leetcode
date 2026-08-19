class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>>nums;
        for(auto &x:reservedSeats){
            if(nums.find(x[0])==nums.end()){
                nums[x[0]]=vector<int>(10,0);
            }
            nums[x[0]][x[1]-1]=-1;
        }

        
        int group=(n-nums.size())*2;

        for(auto p:nums){
            vector<int> &row =p.second;
            if(row[1]==0 && row[2]==0 && row[3]==0 && row[4]==0 &&
               row[5]==0 && row[6]==0 && row[7]==0 && row[8]==0){

                group += 2;
            }
            else if(row[1]==0 && row[2]==0 && row[3]==0 && row[4]==0){
                group++;
            }
            else if(row[5]==0 && row[6]==0 && row[7]==0 && row[8]==0){
                group++;
            }
            else if(row[3]==0 && row[4]==0 && row[5]==0 && row[6]==0){
                group++;
            }
        }
        return group;
        
        
    }
};