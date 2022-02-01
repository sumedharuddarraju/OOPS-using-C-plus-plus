/******************************************************************************

C++ program on get, getline, write, put
*******************************************************************************/
#include <iostream>
using namespace std;
#include<string>

int main()
{
    string str;
    char x;
    cout << "Please enter your name: \n";
    getline(cin, str);
    cout<<"Enter a character :"<<endl;
    cin.get(x);
    cout<<"Entered character is "<<endl;
    cout.put(x);
    cout<<endl;
    cout << "String is "<<str<<endl;
    cout.write("HELLO WORLD",5);


    return 0;
}


