# include<iostream>
using namespace std;
int main()
{
    int hour,minute,duration,charge;
    cout<<"Enter call's starting time in hour:";
    cin>>hour;
    cout<<"Enter call's starting time in minute:";
    cin>>minute;
    cout<<"Enter duration in minutes:";
    cin>>duration;
    if((hour>=0)&&(hour<5)&&(minute>=0))
    {
        charge=duration*5;
        cout<<"Total charge=Rs "<<charge;
    }
    else if((hour>=5)&&(hour<11)&&(minute>=0))
    {
        charge=duration*7;
        cout<<"Total charge=Rs "<<charge;
    }
    else if((hour>=11)&&(hour<17)&&(minute>=0))
    {
        charge=duration*10;
        cout<<"Total charge=Rs "<<charge;
    }
    else
    {
        charge=duration*15;
        cout<<"Total charge=Rs "<<charge;
    }
    return 0;
}