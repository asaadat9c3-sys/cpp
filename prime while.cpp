# include<iostream>
using namespace std;
int main()
{
     int num;
    bool isprime=1;
    cout<<"Enter a number:";
    cin>>num;
    int i=2;
    while(i<=num/2)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
        i=i+1;
    }
    cout<<isprime;
    return 0;
    

}