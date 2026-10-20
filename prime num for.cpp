# include<iostream>
using namespace std;
int main()
{
    int num;
    bool isprime=1;
    cout<<"Enter a number:";
    cin>>num;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
    }
    cout<<isprime;
    return 0;
}