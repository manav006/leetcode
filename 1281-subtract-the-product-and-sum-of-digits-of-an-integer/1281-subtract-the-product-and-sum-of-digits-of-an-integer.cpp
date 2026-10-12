class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum =0;
        long long product=1;
        while(n>0){
            int num = n%10;
            n = n/10;
            sum+=num;
            product*=num;
        }

        return product-sum;
    }
};