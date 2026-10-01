#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // subarray ar jog jetar highest
        // kadane's algo used to maxium sum of continous array
        // intruison hoitese when the sum is less than 0 reset

        int currsum = nums[0];
        int maxsum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currsum = max(nums[i], nums[i] + currsum);
            maxsum = max(currsum, maxsum);
        }

        return maxsum;
    }
};
int main()
{

    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << s.maxSubArray(nums);

}
