// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int findFibo( int number )
{

    if( number <= 1 )
    return number;


     int last = findFibo( number - 1 );
     int slast = findFibo( number - 2 );
     cout << last + slast << " ";
     return last+slast;
}
int main(void) {

   findFibo( 4 );

  return 0;
}
