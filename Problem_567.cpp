#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool freqsame(int freq1[],int freq2[])
    {
        for(int i=0; i<26; i++)
        {
            if(freq1[i]!=freq2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0; i<s1.length(); i++)
        {
            freq[s1[i]-'a']++;
        }
        int window=s1.length();
        for(int i=0; i<s2.length(); i++)
        {
            int in=0,ind=i;
            int winfreq[26]={0};
            while(in<window && ind<s2.length())
            {
                winfreq[s2[ind]-'a']++;
                in++;
                ind++;

            }
            if(freqsame(freq,winfreq))
            {
                return true;
            }
        }
        return false;
       
    }
};

int main()
{
    Solution s;
    string s1="ab";
    string s2="eidbaooo";
    cout<<s.checkInclusion(s1,s2);
}