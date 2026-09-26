# include<iostream>
using namespace std;
int main()
{
    int price,quantity,total_bill;
    cout<<"Enter a price of an item:";
    cin>>price;
    cout<<"Enter the quantity of item:";
    cin>>quantity;
    total_bill=price * quantity;
    cout<<"Total bill="<<total_bill;
    return 0;
    
}