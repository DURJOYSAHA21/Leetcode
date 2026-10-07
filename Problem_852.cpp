#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1;
        int fi=arr.size()-2;
        while(st<=fi)
        {
            int mid= (st+fi)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1])
            {
                st=mid+1;
            }
            else
            {
                fi=mid-1;
            }
        }

        return -1;
    
    }

};
int main()
{
    Solution s;
    vector<int> arr = {0,2,1,0};
    cout << s.peakIndexInMountainArray(arr);
}