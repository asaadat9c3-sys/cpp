# include<iostream>
using namespace std;
int main()
{
    char owner,vehicle;
    double tax;
    cout<<"Enter owner type('V'for 'VIP', 'S' for 'special', 'R' for 'registered', 'O' for 'ordinary'):";
    cin>>owner;
    cout<<"Enter vehicle type('M' for 'motorbike', 'C' for 'car', 'B' for 'bus', 'T' for 'truck'):";
    cin>>vehicle;
    if(owner=='V'||owner=='v')
    {
        if(vehicle=='M'||vehicle=='m')
        {
            tax=(400)-(400*(50.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='C'||vehicle=='c')
        {
            tax=(600)-(600*(50.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='B'||vehicle=='b')
        {
            tax=(1000)-(1000*(50.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='T'||vehicle=='t')
        {
            tax=(2000)-(2000*(50.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else
        {
            cout<<"invalid vehicle type";
        }
    }
    else if (owner=='S'||owner=='s')
    {
        if(vehicle=='M'||vehicle=='m')
        {
            tax=(400)-(400*(40.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='C'||vehicle=='c')
        {
            tax=(600)-(600*(40.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='B'||vehicle=='b')
        {
            tax=(1000)-(1000*(40.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='T'||vehicle=='t')
        {
            tax=(2000)-(2000*(40.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else
        {
            cout<<"invalid vehicle type";
        }
    }
    else if(owner=='R'||owner=='r')
    {
        if(vehicle=='M'||vehicle=='m')
        {
            tax=(400)-(400*(20.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='C'||vehicle=='c')
        {
            tax=(600)-(600*(20.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='B'||vehicle=='b')
        {
            tax=(1000)-(1000*(20.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='T'||vehicle=='t')
        {
            tax=(2000)-(2000*(20.0/100.0));
            cout<<"Payable amount="<<tax;
        }
        else
        {
            cout<<"invalid vehicle type";
        }
    }
    else if(owner=='o'||owner=='O')
    {
        if(vehicle=='M'||vehicle=='m')
        {
            tax=(400);
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='C'||vehicle=='c')
        {
            tax=(600);
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='B'||vehicle=='b')
        {
            tax=(1000);
            cout<<"Payable amount="<<tax;
        }
        else if(vehicle=='T'||vehicle=='t')
        {
            tax=(2000);
            cout<<"Payable amount="<<tax;
        }
        else
        {
            cout<<"invalid vehicle type";
        }
    }
    else
    {
        cout<<"invalid owner";
    }
    return 0;
}