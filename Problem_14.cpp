#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int no=0;

        int num = min(first.size(),last.size());
        for(int i=0; i<num; i++)
        {
            if(first[i]==last[i])
            {
                no++;
                
            }
            else
            {break;}
        }
        return first.substr(0,no);
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"flower","flow","flight"};
    cout << s.longestCommonPrefix(strs);
}