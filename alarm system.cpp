# include<iostream>
using namespace std;
int main()
{
    int hour1,minute1,hour2,minute2;
    cout<<"Enter alarm hours:";
    cin>>hour1;
    cout<<"Enter alarm minutes:";
    cin>>minute1;
    cout<<"Enter current hours:";
    cin>>hour2;
    cout<<"Enter current minutes:";
    cin>>minute2;
    int hour,minute;
    hour=hour1-hour2;
    minute=minute1-minute2;
    cout<<hour<<" hours and " <<minute<<" minutes are left";
    return 0;
}