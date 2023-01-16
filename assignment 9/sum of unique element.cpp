#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        unordered_map<int, int>temp;
        for (auto &&i : nums)
        {
            ++temp[i];
        }
        int total=0;
        for (auto &&i : temp)
        {
            if (i.second==1)
            {
                total+=i.first;
            }
        }
        return total;
    }
};