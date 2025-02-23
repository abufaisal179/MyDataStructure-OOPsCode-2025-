// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void checkSetOrNot( int number , int i )
{
    if( (( number >> i ) & 1) == 1 )
    cout << "one hai " << endl;
    else cout << " zero hai " << endl;
    // 1 1 0 1
}
int main(void) {


    int number = 13;

    checkSetOrNot( number , 0 );

  return 0;
}
