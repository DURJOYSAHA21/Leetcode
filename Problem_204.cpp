#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        vector <bool> isPrime(n, true);

        int count =0;
        for(int i=2; i<n; i++)
        {
            if(isPrime[i])
            {
                count++;
                for(int j=i; j<n; j=j+i)
                {
                    isPrime[j]=false;
                }

            }

        }
        return count;
        
    }
};
int main()
{
    Solution s;
    cout<<s.countPrimes(10);
}