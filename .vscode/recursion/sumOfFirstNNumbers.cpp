// Hey guys , its Faisal's Program : TITLE >> {}
// parameterized recuesion  
#include <iostream>
using namespace std;
int returnSum( int i , int sum )
{
   if( i < 1 )
   return sum;

   returnSum( i-1 , sum + i );
}
// function recusrsion
int returnSum1( int number )
{
    if( number < 1 )
    return 0;

    return number + returnSum1( number - 1 );
}
int main(void) {


    cout << "the sum with function 1 : " << returnSum( 5 , 0 ) << endl;
    cout << "the sum with function 2 : " << returnSum1( 87 );

  return 0;
}
