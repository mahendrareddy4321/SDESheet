class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],pro=0;
        for(int i=1;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                min=prices[i];
            }
            if(pro<(prices[i]-min))
            {
                pro=prices[i]-min;
            }
        }
        return pro;
    }
};
