# include <iostream>
using namespace std;
int main()
{
    int date,month,year;
    cout<<"Enter date:";
    cin>>date;
    cout<<"Enter month number:";
    cin>>month;
    cout<<"Enter year:";
    cin>>year;
    if(date<=31)
    {
       if(date==1||date==21||date==31)
        {
          cout<<date<<"st ";
        }
        else if(date==2||date==22)
        {
          cout<<date<<"nd ";
        }
         else if(date==3||date==23)
        {
          cout<<date<<"rd ";
        }
         else
        {
         cout<<date<<"th ";
        }
    } 
    else
    {
        cout<<"Invalid date ";
    }
    if(month<=12)
    {
        if(month==1||month==01)
        {
            cout<<"January ";
        }
        else if(month==2||month==02)
        {
            cout<<"February ";
        }
        else if(month==3||month==03)
        {
            cout<<"March ";
        }
        else if(month==4||month==04)
        {
            cout<<"April ";
        }
        else if(month==5||month==05)
        {
            cout<<"May ";
        }
        else if(month==6||month==06)
        {
            cout<<"June ";
        }
        else if(month==7||month==07)
        {
            cout<<"July ";
        }
        else if(month==8)
        {
            cout<<"August ";
        }
        else if(month==9)
        {
            cout<<"September ";
        }
        else if(month==10)
        {
            cout<<"October ";
        }
        else if(month==11)
        {
            cout<<"Nowember ";
        }
        else
        {
            cout<<"December ";
        }

    }
    else
    {
        cout<<"Invalid month number ";
    }
    cout<<year;
}