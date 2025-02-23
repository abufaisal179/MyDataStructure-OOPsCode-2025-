// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void clear ( int number , int i )
{ 
   

    int num = number & ~( 1 << i );
    if( num == number )
    {
        printf(" still prev form ");
    }
    else cout << "cleared " << endl;
   
}
int main(void) {

     int i = 2;
    clear ( 13 , i );

  return 0;
}
