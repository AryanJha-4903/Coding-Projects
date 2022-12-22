// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void guessing_game(int ans,int input,bool r)
{
   r=0;
   if(input>ans)
   {
       cout<<"Your guess is higher than the number I picked";
   }
   else if(input<ans)
   {
       cout<<"Your guess is lower than the number I picked";
   }
   else{
       cout<<" your guess is equal to the number I picked";
       r=1;
   }
}
int main() {
    int n;
    cin>>n;
    srand(time(0)); 
	int num = rand() % (1-n) + 1; 
	bool r;
	while(true)
	{
	    int x;
	    cin>>x;
	    guessing_game(num,x,r);
	    if(r==1)
	    {
	        break;
	    }
	}
	
    return 0;
}
