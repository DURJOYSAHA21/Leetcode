#include<iostream>
#include<string>
using namespace std;    
class Solution {
public:
    bool alphanum(char c)
    {
        if(c>='0' && c<='9' || tolower(c)>='a' && tolower(c)<='z')
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string str) {
        
        int n=str.length();
        int s=0, f=n-1;
        while(s<f)
        {
            if(!alphanum(str[s]))
            {
                s++;
                continue;
            }
            if(!alphanum(str[f]))
            {
                f--;
                continue;
            }
            if(tolower(str[s]) != tolower(str[f]))
            {
                return false;
            }
            s++;
            f--;

           
        }
         return true;
    }
};

int main()
{
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    cout << s.isPalindrome(str);
}