#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
        int size=nums.size();
        for (int i = 0; i <size; i++)
        {
            int input=nums[i],output=0;
            while(input!=0)
            {
                int term=input%10;
                output=output*10+term;
                input=(input-term)/10;
            }
            nums.push_back(output);
        }
        for(auto &&i: nums)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        unordered_set<int>temp_set;
        for (auto &&i : nums)
        {
            temp_set.insert(i);
        }
        return temp_set.size();
    }
};