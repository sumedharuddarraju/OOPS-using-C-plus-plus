/******************************************************************************

//Pure virtual destructors

*******************************************************************************/
#include<iostream>
using namespace std;
class Base
{
public:
virtual ~Base() = 0; // Pure Virtual Destructor
};
// Definition of Pure Virtual Destructor
Base::~Base() 
{ 
cout << "Base Destructor\n"; 
} 
class Derived:public Base
{
public:
~Derived() 
{ 
cout<< "Derived Destructor\n"; 
}
};
int main()
{
   
    Base* b = new Derived();
    delete b;
    return 0;

}
