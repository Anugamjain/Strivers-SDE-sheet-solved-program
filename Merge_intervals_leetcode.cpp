#include <bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        if (a[0] != b[0])
            return a[0] < b[0];
        return a[1] < b[1];
    }
    vector<vector<int>> merge(vector<vector<int>> &inter)
    {
        sort(inter.begin(), inter.end(), cmp);
        vector<vector<int>> res;
        int l = inter.size();
        res.emplace_back(inter[0]);
        int j = 0;
        for (int i = 1; i < l; i++)
        {
            if (res[j][1] >= inter[i][0])
            {
                if (res[j][1] >= inter[i][1])
                    ;
                else
                    res[j][1] = inter[i][1];
            }
            else
            {
                res.emplace_back(inter[i]);
                j++;
            }
        }
        return res;
    }
};