# include<iostream>
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
    if(a>b)
    {
        if(b>c)
        {
            cout<<a<<" is maximum"<<endl;
            cout<<b<<" is middle"<<endl;
            cout<<c<<" is minimum"<<endl;
        }
        else
        {
            if(a>c)
            {
                cout<<a<<" is maximum"<<endl;
                cout<<c<<" is middle"<<endl;
                cout<<b<<" is minimum"<<endl;
            }
            else
            {
                cout<<c<<" is maximum"<<endl;
                cout<<a<<" is middle"<<endl;
                cout<<b<<" is minimum"<<endl;
            }
        }
    }
    else
    {
        if(a>c)
        {
            cout<<b<<" is maximum"<<endl;
            cout<<a<<" is middle"<<endl;
            cout<<c<<" is minimum"<<endl;
        }
        else
        {
            if(b>c)
            {
                cout<<b<<" is maximum"<<endl;
                cout<<c<<" is middle"<<endl;
                cout<<a<<" is minimum"<<endl;
            }
            else
            {
                cout<<c<<" is maximum"<<endl;
                cout<<b<<" is middle"<<endl;
                cout<<a<<" is minimum"<<endl;
            }
        }
    }
}