#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int id=0;
        int n =chars.size();
        for(int i=0; i<n; i++)
        {
            char c=chars[i];
            int con=0;
            while(i<n && c==chars[i])
            {
                i++; 
                con++;
            }
            if(con>1)
            {
                chars[id++]=c;
                string s= to_string(con);
                for(char e:s)
                {
                    chars[id++]=e;
                }
            }
            else
            {
                chars[id++]=c;
            }
            i--;
        }

        return id;
    }
};

int main()
{
    Solution s;
    vector<char> chars={'a','a','b','b','c','c','c'};
    cout<<s.compress(chars);
    
}