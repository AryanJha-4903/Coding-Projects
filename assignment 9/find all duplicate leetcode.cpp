#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        set<int>temp;
        vector<int>aux;
        for (auto &&i : nums)
        {
            if (temp.find(i)==temp.end())
            {
                temp.insert(i);
            }
            else{
                aux.push_back(i)
            }
        }
        return aux;
    }
};