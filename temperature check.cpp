# include <iostream>
using namespace std;
int main()
{
    double temperature;
    cout<<"Enter temperature in celcius:";
    cin>>temperature;
    if(temperature>30)
    {
        cout<<"It's HOT";
    }
    else
    {
        cout<<"It's COLD";
    }
    return 0;
}