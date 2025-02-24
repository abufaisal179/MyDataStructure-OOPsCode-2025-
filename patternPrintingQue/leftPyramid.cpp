// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int number )
{
    for( int i=1; i<=number; i++ )
    {
        for( int j=1; j<=number; j++ )
        {
            cout << " * ";
        }
        cout << endl;
    }
}
int main(void) {


    cout << "enter number : "; int number;
    cin >> number;

    print( number );

  return 0;
}
