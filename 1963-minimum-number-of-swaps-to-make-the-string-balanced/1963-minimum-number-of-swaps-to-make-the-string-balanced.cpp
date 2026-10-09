class Solution {
public:
    int minSwaps(string s) {
        int open=0;
        int close =0;
        for(char c :s){
            if(c=='['){
                open++;
            }else{
                if(open==0){
                    close++;
                }else{
                    open--;
                }
            }
        }

        return (close+1)/2;
    }
};