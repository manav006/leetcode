class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans=0;
        vector<int>v(ratings.size(),1);
            for(int i=1;i<v.size();i++){
                if(ratings[i]>ratings[i-1]){
                    v[i]= v[i-1]+1;
                }
            }

            for(int i=v.size()-2;i>=0;i--){
                if(ratings[i]>ratings[i+1]){
                    v[i]= max(v[i],v[i+1]+1);
                }
                ans+=v[i];
            }

        return ans+v[v.size()-1];
        
    }
};