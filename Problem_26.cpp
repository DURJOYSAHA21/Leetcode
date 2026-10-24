#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    nums.erase(nums.begin()+j);
                    j--;
                }
            }
        }

        return nums.size();
        
    }
};

int main()
{
    Solution s;
    vector<int> nums={1,1,2};
    cout<<s.removeDuplicates(nums);
}