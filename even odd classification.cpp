# include<iostream>
using namespace std;
int main()
{
    int num,count=0,count_even=0,count_odd=0;
    do
    {
       cout<<"Enter a number(0 to stop):"; 
       cin>>num;
       if(num==0)
       {
         break;
       }
       count=count+1;
       if(num%2==0)
       {
        count_even=count_even+1;
       }
       else
       {
        count_odd=count_odd+1;
       }
    } while (num!=0);
    cout<<"Total numbers="<<count<<endl;
    cout<<"Total even numbers="<<count_even<<endl;
    cout<<"Total odd numbers="<<count_odd<<endl;
}