// leetcode 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public :
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int low=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]-prices[low]<maxprofit){
            if(prices[i]>prices[low]){
                continue;
            }
            else{
                low=i;
            }
            }
            else{
                maxprofit = prices[i]-prices[low];
            }
        }
        return maxprofit;
    }
};
