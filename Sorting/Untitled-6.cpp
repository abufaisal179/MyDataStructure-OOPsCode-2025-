#include <iostream>
using namespace std;
int main ( void )
{
    float a = 5.2 , b = 7.9;
    cout << a << " " << b << endl;
    a = a + b;
    b = a -b;
    a = a - b;

    cout << a << " " << b ;
    return 0;
}