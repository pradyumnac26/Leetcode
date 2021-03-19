class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        if(prices.size()==0)
            return 0;
        int ans=0;
        int mini=prices[0];
        for(i=1;i<prices.size();i++)
        {
            if(prices[i]<mini)
                mini=prices[i];
        else 
            ans = max(ans,prices[i]-mini);
            }
        return ans;
    }
};
