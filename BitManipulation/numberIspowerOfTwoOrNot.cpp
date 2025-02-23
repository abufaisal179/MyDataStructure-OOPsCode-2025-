// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void clear ( int number , int i )
{   
    int num = number & number-1;
    if( num == 0 ) cout << "yes power of two " << endl;
    else cout << "not power of two " << endl;
}
int main(void) {

     int i = 2;
    clear ( 16 , i );

  return 0;
}
 