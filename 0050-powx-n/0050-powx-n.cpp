class Solution {
public:
    void calc(double x , long long n , double & ans,double & extra){
        if(n==1){
            ans = extra*ans;
            return;
        }

        if(n%2==0){
            ans = ans*ans;
            n=n/2;
        }
        else if(n%2!=0){
            extra*=ans;
            n=n-1;
            ans = ans*ans;
            n=n/2;
        }

        calc(x,n,ans,extra);

    }
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1;
        double ans =x;
        double extra =1;
        long long nn=n;
        if(n<0){
            nn=(long long)-1*n;
        }
        calc(x,nn,ans,extra);
        if(n<0){
            return (double) 1.00/ans;
        }
        return ans;
    }
};