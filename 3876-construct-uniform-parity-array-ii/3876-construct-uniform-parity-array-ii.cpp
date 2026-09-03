class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int miniodd = INT_MAX;
        for(int x:nums1){
            if(x%2!=0){
                miniodd=min(x,miniodd);
            }
        }
        if(miniodd==INT_MAX) return true;

        for(int x:nums1){
            if(x%2==0 && x<=miniodd){
                return false;
            }
        }

        return true;
    }
};