class Solution {
public:
int check(string s,int start,int end)
{
    while(start>=0 && end<s.size()&&s[start]==s[end])
    {
        --start;
        ++end;
    }
    return end-start-1;
}
    string longestPalindrome(string s) 
    {
        string result="";
        for(int i=0;i<s.size();i++)
        {
            int odd=check(s,i,i);
            int even=check(s,i,i+1);
            int temp=max(odd,even);
            int start= i-(temp-1)/2;
            if (temp>result.size()){
                result=s.substr(start,temp);
            }
        }    
        return result;
    }
};