/******************************************************************************
8.Program on Catching derived class exceptions

*******************************************************************************/
#include<iostream>
using namespace std;
 
class Base
{
};
class Derived: public Base 
{
};
int main()
{
   Derived d;
 
   try  
   {
        throw d;
    }
    catch(Derived d) 
   {
        cout<<"Caught Derived Exception";
   }
    catch(Base b) 
   {
        cout<<"Caught Base Exception";
   }
   return 0;
}



