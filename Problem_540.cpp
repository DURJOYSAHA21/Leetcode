#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0;
        int fi = nums.size() - 1;

        while (st < fi)
        {
            int mid = (st + fi) / 2;

            if (mid % 2 == 0)
            {
                if (nums[mid] == nums[mid + 1])
                {
                    st = mid + 2;
                }
                else
                {
                    fi = mid;
                }
            }
            else
            {
                if (nums[mid] == nums[mid - 1])
                {
                    st = mid + 1;
                }
                else
                {

                    fi = mid;
                }
            }
        }

        return nums[st];
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << s.singleNonDuplicate(nums);
}