/******************************************************************************
  5.  operator overloading with the implementation of complex numbers. 
*******************************************************************************/

#include <iostream>
using namespace std;
class loc 
{
    int longitude, latitude;
    public:
    loc()
    {    }
    loc(int lg, int lt) 
    {
        longitude = lg;
        latitude = lt;
    }
    void show() 
    {
        cout << longitude << "+i";
        cout << latitude << "\n";
    }
    loc operator+(loc op2);
};
// Overload + for loc.
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
int main()
{
    loc ob1(10, 20), ob2( 5, 30);
    cout<<"Regular function call"<<endl;
    ob1.show(); // displays 10 20
    ob2.show(); // displays 5 30
    cout<<"operator overloading function call"<<endl;
    ob1 = ob1 + ob2; //calling operator overloading function
    ob1.show(); // displays 15 50
    return 0;
}

