# include <iostream>
using namespace std;
int main()
{
   double length,width;
    double perimeter;
    cout<<"Enter length of rectangle:";
    cin>>length;
    cout<<"Enter width of rectangle:";
    cin>>width;
    perimeter=2*(length+width);
    cout<<"perimeter of rectangle is:"<<perimeter;
    return 0;
}