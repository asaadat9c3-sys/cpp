# include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first side:";
    cin>>a;
    cout<<"Enter second side:";
    cin>>b;
    cout<<"Enter third side:";
    cin>>c;
    if(a+b>c || b+c>a || c+a>b)
    {
        if(a==b && b==c && c==a)
        {
            cout<<"EQUILATERAL TRIANGLE";
        }
        else if(a==b || b==c || c==a)
        {
            cout<<"ISOCELES TRIANGLE";
        }
        else
        {
            cout<<"SCALENE TRIANGLE";
        }
    }
    else
    {
        cout<<"INVALID TRIANGLE";
    }
    return 0;
}