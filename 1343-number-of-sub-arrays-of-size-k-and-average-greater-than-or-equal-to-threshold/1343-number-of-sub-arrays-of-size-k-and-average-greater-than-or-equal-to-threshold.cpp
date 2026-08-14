class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0;
        int j=k-1;
        int count=0;
        long long sum = accumulate(arr.begin()+i,arr.begin()+j+1,0LL);
        while(j<arr.size()){
            if(i!=0){
            sum+=arr[j];
            sum-=arr[i-1];
            }
            long long avg = sum/k;
            if(avg>=threshold){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};