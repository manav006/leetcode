class Solution {
public:
    bool checkDivisibility(int n) {
        int orignal =n;
        int sum =0;
        int product=1;
        while(orignal>0){
            int digit = orignal%10;;
            orignal=orignal/10;
            sum+=digit;
            product*=digit;
        }
        int ans = sum+product;
        if(n%ans==0){
            return true;
        }

        return false;
    }
};