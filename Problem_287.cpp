#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int e:nums)
        {
            if(s.find(e) != s.end())
            {
                return e;

            }
            s.insert(e);
        }

        return -1;
        
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 4};
    Solution obj;
    cout << obj.findDuplicate(nums);

    return 0;


    
}