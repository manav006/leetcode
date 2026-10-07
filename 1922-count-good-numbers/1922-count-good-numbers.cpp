class Solution {
public:
    int mod = 1000000007;
    void power(long long n, long long x, long long &ans){
        if(n<=0){
            return;
        }

        if(n%2==1){
            ans= (ans*x)%mod;
        }

        x=(x*x)%mod;
        n=n/2;
        power(n,x,ans);
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;

        long long ans1 = 1;
        power(even,5,ans1);
        long long ans2=1;
        power(odd,4,ans2);

        return (ans1*ans2)%mod;
    }
};