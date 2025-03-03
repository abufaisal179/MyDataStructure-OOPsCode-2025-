// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void printing( int i , int n )
{

    if( i < 1 )
    return;

    printing( i - 1 , n );

    cout << i << " ";
}
int main(void) {

    printing( 3 , 3 );

  return 0;
}
