class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(i==0){
                v.push_back(intervals[i]);
                continue;
            }
              auto x = v.back();
            if(intervals[i][0] <=x[1]){
                
                v.pop_back();
                if(x[1]<intervals[i][1]){
                v.push_back({x[0],intervals[i][1]});
                }else{
                    v.push_back({x[0],x[1]});
                }
            }
            else{
                v.push_back(intervals[i]);
            }
        }

        return v;
    }
};