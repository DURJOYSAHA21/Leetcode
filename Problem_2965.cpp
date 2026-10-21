#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector <int> ans;
        unordered_set <int> s;
        int n = grid.size();
        int nowsum =0;
        int actsum=0;
        int a,b;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s.find(grid[i][j]) != s.end())
                {
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
                nowsum += grid[i][j];
            }
        }
        actsum = (n*n) * (n*n +1) /2;
        b = actsum - nowsum + a;
        ans.push_back(b);

        return ans;


        
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 8}
};
    vector<int> ans = s.findMissingAndRepeatedValues(grid);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
        cout<<endl;
    }
}