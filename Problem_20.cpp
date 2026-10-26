#include <iostream> 
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> c;

        for(char a: s)
        {
            if(a=='(' || a=='{' || a=='[')
            {
                c.push(a);
            }
            else
            {
                if(c.empty())
                {
                    return false;
                }

                char top = c.top();
                if((a==')' && top=='(') || (a=='}' && top=='{') || (a==']' && top=='['))
                {
                    c.pop();
                }
                else
                {
                    return false;
                }

            }


           
        }
        return c.empty();
    }
};

int main()
{|
    Solution s;
    string str = "()[]{}";
    cout << s.isValid(str);

    return 0;
}