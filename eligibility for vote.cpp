# include<iostream>
using namespace std;
int main()
{
    int age;
    bool citizen;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Are you a citizen(Enter 1 for yes and 0 for no):";
    cin>>citizen;
    if (age >= 18 && citizen == 1)
    {
        cout<<"eligible for vote";
    }
    else
    {
        cout<<"Not eligible for vote";
    }
    return 0;
}
