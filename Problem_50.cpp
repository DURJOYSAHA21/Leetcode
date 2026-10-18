#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double myPow(double base, int power) {
    long double ans = 1.0L;
    long double x = base;
    long long n = power;

        if(n<0)
        {
            x=1.0/x;
            n = -n;
        }
        while(n>0)
        {
            if(n%2==1)
            {
                ans = ans*x;
            }
            n=n/2;
            x=x*x;

        }

        return ans;
        
    }
};
int main()
{
    Solution s;
    cout<<s.myPow(2.0,-10);
}