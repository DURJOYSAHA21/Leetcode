#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        return pos;
    }
};
int main()
{
    Solution s;
    string haystack = "hello";
    string needle = "ll";
    cout << s.strStr(haystack,needle);
}