class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans =0;
        for(string s :operations){
            if(s=="--X"){
                ans-=1;
            }else if(s=="X--"){
                ans-=1;
            }else if(s=="X++"){
                ans+=1;
            }else{
                ans+=1;
            }
        }

        return ans;
    }
};