# include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout<<"Enter your percentage:";
    cin>>percentage;
    if(percentage>=90)
    {
        cout<<"GRADE=A+";
    }
    else
    {
        if(percentage>=80)
        {
            cout<<"GRADE=B";
        }
        else
        {
            if(percentage>=70)
            {
                cout<<"GRADE=C";
            }
            else
            {
                if(percentage>=60)
                {
                    cout<<"GRADE=D";
                }
                else
                {
                    cout<<"GRADE=F";
                }
            }
        }
    }
    return 0;
   
}






