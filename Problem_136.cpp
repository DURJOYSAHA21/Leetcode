#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //xor use to cut the same nums karon n n = 0
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            ans= ans^nums[i];
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4,1,2,1,2};
    cout << s.singleNumber(nums);

}