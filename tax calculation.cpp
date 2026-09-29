# include<iostream>
using namespace std;
int main()
{
    int salary,tax;
    cout<<"Enter your salary:";
    cin>>salary;
    if(salary<=600000)
    {
        cout<<"final salary="<<salary;
    }
    else
    {
        if (salary<=1200000)
        {
            tax=0.01*(salary-600000);
            cout<<"final salary="<<tax;
        }
        else
        {
            if(salary<=2200000)
            {
                tax=(0.11+6000)*(salary-1200000);
                cout<<"final salary="<<tax;
            }
            else
            {
              if(salary<=3200000)
              {
                tax=(116000+0.20)*(salary-2200000);
                cout<<"final salary="<<tax;
              }
              else
              {
                if(salary<=4100000)
                {
                    tax=(316000+0.25)*(salary-3200000);
                    cout<<"final salary="<<tax;
                }
                else
                {
                    if(salary<=5600000)
                    {
                        tax=(541000+0.29)*(salary-4100000);
                        cout<<"final salary="<<tax;
                    }
                    else
                    {
                        tax=(976000+0.32)*(salary-5600000);
                        cout<<"final salary="<<tax;
                    }
                }
              }
            }
        }
    }
    return 0;
}