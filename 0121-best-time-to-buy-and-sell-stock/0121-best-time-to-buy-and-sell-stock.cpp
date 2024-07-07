class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int buy=prices[0],sell=0,profit=0;
        // int temp=0;
        // for(int i=0;i<prices.size();i++){
        //     if(prices[i]<buy){
        //         buy=prices[i];
        //         temp=i;
        //     }
        // }
        // int j=temp;
        // while(j<prices.size()){
        //     if(prices[j]>sell){
        //         sell=prices[j];
        //     }
        //     j++;
        // }
        // profit=sell-buy;
        // if(profit!=0){
        // return profit;
        // }
        // return profit;

    //     int sell=0,profit,max_profit=0;
    //     for(int i=0;i<prices.size();i++){
    //         int buy=prices[i];
    //         for(int j=i;j<prices.size();j++){
    //             profit=prices[j]-buy;
    //             if(profit>max_profit){
    //                 max_profit=profit;
    //             }

    //         }
    //     }
    //     if(max_profit==0){
    //         return 0;
    //     }
    //     return max_profit;
      
    // }
    int min_so_far = prices[0];
    int max_profit = 0;
    for (int i = 0; i < prices.size(); i++) {
  
    if (prices[i] < min_so_far) {
        min_so_far = prices[i];
    }
      max_profit = max(max_profit,prices[i] - min_so_far);
}
return max_profit;
    }
};