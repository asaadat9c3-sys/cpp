# include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num%2==0 && num%3==0)
    {
        cout<<"number is divisible by both";
    }
    else if(num%2==0)
    {
        cout<<"number is divisible by 2";
    }
    else if(num%3==0)
    {
        cout<<"number is divisible by 3";
    }
    else
    {
        cout<<"number is neither divisible by 2 nor 3";
    }
    return 0;
}