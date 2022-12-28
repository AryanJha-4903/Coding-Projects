class Solution {
public:
    int binary_search(vector<int>input,int target)
    {
        int start=0;
        int end=input.size()-1;
        int r=0;
        while (start<=end)
        {
            int mid=(start+end)/2;
            if (input[mid]>=target)
            {
                end=mid-1;
                r=end;
            }
            else if (input[mid]<target)
            {
                start=end+1;
                r=start;
            }
        }
        return r;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        nums1.erase(nums1.begin()+m,nums1.end());
        for (int i = 0; i < n; i++)
        {
            int min_element=nums2[i];
            int insert_index=binary_search(nums1,min_element);
            nums1.insert(nums1.begin()+insert_index,min_element);
        }
    }
};