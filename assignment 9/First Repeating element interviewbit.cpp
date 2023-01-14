int Solution::solve(vector<int> &A) {
    unordered_set<int>temp;
    unordered_set<int>check;
    for (auto &&i : A)
    {
        if (temp.find(i)==temp.end())
        {
            temp.insert(i);
        }
        else{
            check.insert(i);
        }
    }
    int result= -1;
    for (int i = 0; i < A.size(); i++)
    {
        if (check.find(A[i])!=check.end())
        {
            result=A[i];
            break;
        }
    }
    return result;
}
