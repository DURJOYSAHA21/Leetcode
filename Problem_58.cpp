#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {

        
        int totalsize= s.size()-1;
        while(totalsize>=0 && s[totalsize]==' ')
        {
            totalsize--;
        }
        string new_s = s.substr(0,totalsize);
        int lastspace= new_s.find_last_of(' ');


        return (totalsize-lastspace);
        
    }
};
int main()
{
    Solution s;
    string str = "Hello World";
    cout << s.lengthOfLastWord(str);
}
