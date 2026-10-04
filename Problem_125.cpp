#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int bestbuy=prices[0];

        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i]>bestbuy)
            {
                maxprofit=max(maxprofit,prices[i]-bestbuy);
            }
            else
            {
                bestbuy=prices[i];
            }
        
        }
        return maxprofit;
        
    }
};

int main()
{
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout << s.maxProfit(prices);
}