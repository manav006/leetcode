class Solution {
public:
    int cnt =0;
    void count(vector<int>& arr,int low,int mid, int high){
        int right = mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>(long long)arr[right]*2 ){
                right++;
            }
            cnt+=(right-(mid+1));
        }
    }
    void merge(vector<int>& arr,int low,int mid, int high){
        int i=low;
        int j=mid+1;
        vector<int>temp;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        
    }
    void mergesort(vector<int>& arr, int low , int high){
        if(low>=high) return ;
        
        int mid = low + (high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        count(arr,low,mid,high);
        merge(arr,low,mid,high);
        
    }
    int reversePairs(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return cnt;
    }
};