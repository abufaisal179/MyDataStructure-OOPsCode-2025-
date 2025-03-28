#include <iostream>
using namespace std;
int main ( void )
{

    int store = 1;
    int fact  = 5;
    for( int i=1; i<=fact; i++ )
    {
        store = store * i;
    }

    cout << store ;

    return 0;
}