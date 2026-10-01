 # include<iostream>
 using namespace std;
int main()
{
    char gender;
    cout<<"enter M for male and F for female:";
    cin>>gender;
    if(gender=='M')
    {
        cout<<"Male";
    }
    else if(gender== 'F')
    {
        cout<<"Female";
    }
    else
    {
        cout<<"Invalid input";
    }
    return 0;
}