#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        map<int, int>losses;
        vector<int>temp;
        for (auto &&i : matches)
        {
            temp.push_back(i[0]);
            temp.push_back(i[1]);
        }
        for (auto &&i : temp)
        {
            losses[i]=0;
        }
        for (auto &&i : matches)
        {
            ++losses[i[1]];
        }
        vector<int>zero;
        vector<int>one;
        for (auto &&j : losses)
        {
            if (j.second==0)
            {
                zero.push_back(j.first);
            }
            if (j.second==1)
            {
                one.push_back(j.first);
            }   
        }
        vector<vector<int>>result;
        result.push_back(zero);
        result.push_back(one);
        return result;
    }
};