class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                 int r = abs(i-startIndex);
                 int l = n-r;

                 ans = min(ans, min(r, l));
            }
        }
        if(ans!=INT_MAX){
            return ans;
        }else{
            return -1;
        }
    }
};