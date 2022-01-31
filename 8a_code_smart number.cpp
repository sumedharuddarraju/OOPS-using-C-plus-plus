/******************************************************************************
                           Smart Number
                           
A person X is playing a Game. In the game, he has to pick a number and determine whether it is a smart
number or not. A number 'N' is called a smart number if the summation of all proper divisors of n is 
greater than 'N'. If n is a smart number print "YES" or else print "NO". 
Constraints:  1<=N<=10000
Sample Input 1:
12

Sample Output 1:
YES

Explanation:
The proper divisors of 12 are 1,2,3,4,6 whose summation is 16. Since 16 is greater than 12 print YES.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int N,i,sum=0;
    cout<<"Enter a number";
    cin>>N;
    if((1<=N)&&(N<=10000))
    {
      for(i=1;i<N;i++)
       {
          if(N%i==0)
           {
            sum+=i;
           }
        }      
       if(sum>N)
       {
        cout<<"YES";
       }
      else
      {
        cout<<"No";
       }
    }
return 0;
}


