#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        unordered_set<int>check;
        for (auto &&i : nums)
        {
            check.insert(i);
        }
        while (check.find(original)!=check.end())
        {
            original=original*2;
        }
        return original;
    }
};