class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i=0;
        int j=minutes-1;
        int sum=0;
        int st=0;
        int end=minutes-1;
        for(int k=i;k<=j;k++){
            if(grumpy[k]==1){
                sum+=customers[k];
            }
        }
        int maxi = sum;
        while(j<customers.size()-1){
            
            if(grumpy[i]==1){
                sum-=customers[i];
            }
            i++;

            if(grumpy[j+1]==1){
                sum+=customers[j+1];
            }
            j++;

            if(sum>maxi){
                st=i;
                end=j;
                maxi = sum;
            }

        }


        int customer=0;
        for(int i=0;i<customers.size();i++){
            if(i>=st && i<=end){
                customer+=customers[i];
                continue;
            }

            else if(grumpy[i]==0){
                customer+=customers[i];
            }
        }


        return customer;


    }
};