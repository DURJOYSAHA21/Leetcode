#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int p=-1;

        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                p=i;
                break;
            }
        }

        if(p==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i=n-1; i>p; i--)
        {
            if(nums[i]>nums[p])
            {
                swap(nums[i],nums[p]);
                break;

            }
        }

        reverse(nums.begin()+p+1, nums.end());

    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,3};
    s.nextPermutation(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}