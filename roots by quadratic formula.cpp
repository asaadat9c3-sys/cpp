# include<iostream>
# include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    int sum,r1,r2;
    sum=(b*b)-(4*a*c);
    if(sum>=0)
    {
        r1=(-b+sqrt(sum))/(2*a);
        r2=(-b-sqrt(sum))/(2*a);
        cout<<"first root="<<r1<<endl;
        cout<<"second root="<<r2<<endl;
    }
    else
    {
        cout<<"roots are imaginary";
    }
    return 0;
}