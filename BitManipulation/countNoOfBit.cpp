// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void clear ( int number , int i )
{   
    int count = 0;
    while( number != 0 )
    {
          count += ( number & 1); 
          number = number >> 1;
    }
    cout << count << endl;
}
int main(void) {

     int i = 2;
     for( int i=0; i<50; i++ )
    clear ( i, 2 );

  return 0;
}
 