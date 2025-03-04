// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnSum( int i , int sum )
{
   if( i < 1 )
   return sum;

   returnSum( i-1 , sum + i );
}
int main(void) {


    cout << returnSum( 5 , 0 );

  return 0;
}
