#include<iostream>
#include<cmath>
using namespace std;
int gradeing_system(int grade)
{
    int result;
    int temp=grade%10;
    int temp2=temp-5;
    if (grade<37)
    {
        result=grade;
    }
    if (grade>=37)
    {
        if (grade%5==0)
        {
            result=grade;
        }
        if (temp>5)
        {
            if (temp2<3)
            {
                result=grade;
            }
            if (temp2>=3)
            {
                result=grade-temp+10;
            }
        }
        if (temp<5)
        {
            if (temp<3)
            {
                result=grade;
            }
            if (temp>=3)
            {
                result=grade-temp+5;
            }
        }
    }
    return result;
}
int main()
{
    int student;
    cin>>student;
    while (student--)
    {
        int grade;
        cin>>grade;
        cout<<gradeing_system(grade)<<endl;
    }
    
}