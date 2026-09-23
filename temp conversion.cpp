# include <iostream>
using namespace std;
int main()
{
    float celcius,fahrenheit;
    cout<<"Enter temperatur in Celcius:";
    cin>>celcius;
    fahrenheit=(celcius *9/5.0)+32;
    cout<<"Temperature in fahrenheit is:"<<fahrenheit;
    return 0;
}