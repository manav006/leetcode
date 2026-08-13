class Solution {
public:
int calculate(vector<int>& arr, long long mid){
    int balls=1;
    int pos = arr[0];
    for(int i=1;i<arr.size();i++){
        if((arr[i]-pos)>=mid){
            pos = arr[i];
            balls++;
        }
    }
    return balls;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        long long st = 1;
        long long end = position.back()-position[0];
        while(st<=end){
            long long mid = st-(st-end)/2;
            long long force = calculate(position,mid);
            if(force>=m){
                st= mid+1;
            }else{
                end= mid-1;
            }

        }
        return end;
    }
};