#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;
        int fi=nums.size()-1;
        while(st<=fi)
        {
            int mid=(st+fi)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            
            if(nums[mid]>=nums[st])
            {
                //left sort
                
                if(target<nums[mid] && target>=nums[st] )
                {
                    fi=mid-1;
                }
                else
                {
                    st=mid+1;
                }
            }
            else
            {
                //right sort
                
                if(target>nums[mid] && target<=nums[fi])//mid equal ar toh condi e ase tai equal nai
                {
                    st=mid+1;
                }
                else
                {
                    fi=mid-1;
                }
            }
        }
    
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << s.search(nums,target);
}