class Solution {
public:
    int distribute(vector<int>& quantities,long long mid){
        int count=0;
        for(int n:quantities){
            if(n<mid){
                count++;
                continue;
            }
            int div = n/mid;
            int rem = n%mid;
            if(rem!=0){
                div++;
            }
            count+=div;
        }
        return count;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        long long st =1;
        long long end=accumulate(quantities.begin(),quantities.end(),0LL);
        while(st<=end){
            long long mid = st-(st-end)/2;
            int distributed=distribute(quantities, mid);
            if(distributed<=n){
                end= mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return st;

    }
};