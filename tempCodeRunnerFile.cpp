#include <iostream>
using namespace std;
int main ( void )
{
 
     int value;
     int f;
     cout << "enter the number : ";
     cin >> f;
     int x=0;
     while(  f-- )
     {
         cout << "enter the number : ";
        cin >> value;
    x += value;

     } 
     cout <<"the sum is : " << x;
    return 0;
}