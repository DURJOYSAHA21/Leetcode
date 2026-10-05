#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0;
        int rp=height.size()-1;
        int w = 0;
        int h =0;
        long long currwater=0;

        while(lp<rp)
        {
            w=rp-lp;
            h = min(height[lp],height[rp]);
            currwater= w*h;
            maxwater = max(maxwater,(int)currwater);

            height[lp]<height[rp]? lp++ : rp++;
            
        }
        return maxwater;
        
    }
};
int main()
{
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height);
}