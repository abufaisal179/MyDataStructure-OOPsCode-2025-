// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnSum( int number , int sum )
{
   if( number < 1 )
   return 0;

   returnSum( number -1 , sum + number );
}
int main(void) {


    cout << returnSum( 5 , 0 );

  return 0;
}
