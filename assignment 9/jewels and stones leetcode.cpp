class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewel_set;
        for (auto &&i : jewels)
        {
            jewel_set.insert(i);
        }
        int count=0;
        for (auto &&j : stones)
        {
            if (jewel_set.find(j)!=jewel_set.end())
            {
                count++;
            }
        }
        return count;
    }
};