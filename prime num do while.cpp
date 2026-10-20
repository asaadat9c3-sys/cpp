# include<iostream>
using namespace std;
int main()
{
    int num;
     bool isprime=1;
    cout<<"Enter a number:";
    cin>>num;
    int i=2;
    do
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
        i=i+1; 
    } while (i<=num/2);
    cout<<isprime;
    return 0;
    
}