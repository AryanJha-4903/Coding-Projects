    #include<bits/stdc++.h>
    using namespace std;
    void count_sort(vector<int>input)
    {
        int maximum=*max_element(input.begin(),input.end());
        vector<int>count_arr(maximum+1,0);
        for (auto &&i : input)
        {
            count_arr[i]++;
        }
        int cum_sum=0;
        for (int i = 1; i <count_arr.size(); i++)
        {
            count_arr[i]=count_arr[i]+count_arr[i-1];
        }
        for(auto &&i :count_arr)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        vector<int>output(input.size(),0);
        for (int i = input.size()-1; i >=0; i--)
        {
            output[count_arr[input[i]]-1]=input[i];
            count_arr[input[i]]--;
        }
        for (int i=0;i<input.size();i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
    }
    int main()
    {
        int test;
        cin>>test;
        vector<int>input;
        while (test--)
        {
            int x;
            cin>>x;
            input.push_back(x);
        }
        count_sort(input);
    }
