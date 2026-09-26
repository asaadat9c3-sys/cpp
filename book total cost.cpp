# include<iostream>
using namespace std;
int main()
{
    int price,quantity,total_cost;
    cout<<"Enter price of one book:";
    cin>>price;
    cout<<"Enter quantity of books:";
    cin>>quantity;
    total_cost=price*quantity;
    cout<<"Total cost="<<total_cost;
    return 0;
}
