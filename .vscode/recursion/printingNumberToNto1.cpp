// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int i , int n )
{
    if( i == n )
    {
        return;
    }
    print( i+1 , n );
    cout << i << " ";
}
int main(void) {


    print( 1 , 5 ); 

  return 0;
}
