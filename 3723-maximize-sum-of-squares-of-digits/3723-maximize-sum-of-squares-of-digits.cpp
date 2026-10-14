class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string n="";
        while(num>0){
            if(sum>9){
                n+="9";
                sum-=9;
            }else{
                n+= to_string(sum);
                sum=0;
            }
            num--;
        }

        return n;
    }
};