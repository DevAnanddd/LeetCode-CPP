class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min=prices[0];
        int maxprofit=0;
        
        for(int i=1;i<n;i++){
            if(min>prices[i]){
                min=prices[i];
               } 
               else{
                    int profit= prices[i]-min;
                    maxprofit= max(maxprofit,profit);
                    
                }
               
            }
            
        return maxprofit;

    }
};