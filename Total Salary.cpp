#include  <iostream>
#include<cmath>
using namespace std;
int main()
{
    int B_Salary;
    char grade;
    double ha, da, allow;
    int pf;
    scanf("%d %c",&B_Salary, &grade);
    ha=0.20*B_Salary;
    da=0.50*B_Salary;
    pf=0.11*B_Salary;
    if (grade='A')
    {
        allow=1700;
    }
    if (grade='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
     double Total_Salary=B_Salary+ha+da+allow-pf;
    cout<<round(Total_Salary);
}
