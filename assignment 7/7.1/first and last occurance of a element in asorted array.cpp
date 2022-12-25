class Solution
{
public:
    vector<int> searchRange(vector<int>& input, int target) 
    {
        int start=0;
        int end=input.size()-1;
        vector<int>result;
        /*for left_side*/
        int left=-1;
        while(end>=start)
        {
            int mid=(start+end)/2;
            if(input[mid]==target)
            {
                left=mid;
                end=mid-1;
            }
            else if(input[mid]>target)
            {
                end=mid-1;
            }
            else if(input[mid]<target)
            {
                start=mid+1;
            }
        }
        result.push_back(left);
        /*done*/
        start=0;
        end=input.size()-1;
        /*for right_side*/
        int right=-1;
        while(end>=start)
        {
            int mid=(start+end)/2;
            if(input[mid]==target)
            {
                right=mid;
                start=mid+1;
            }
            else if(input[mid]>target)
            {
                end=mid-1;
            }
            else if(input[mid]<target)
            {
                start=mid+1;
            }
        }
        result.push_back(right);
        /*done*/
        return result;
    }

};