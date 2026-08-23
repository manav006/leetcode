class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int maxprofit=0;
        int buy=0;
        int sell=1;
        while(sell<prices.size()){
            if(prices[buy]>prices[sell]){
                buy=sell;
                
            }else{
                maxprofit = max(maxprofit,prices[sell]-prices[buy]);

            }
            sell++;
        }

        return maxprofit;
    }
};