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
int returnFctorial1( int number )
{
     if( number == 1 )
     {
        return 1;
     }

     return number * returnFctorial1( number - 1 );
}
int main(void) {


  int number;
  cout << "enter number for factorial and for the summation  : "; cin >> number ;
    cout << "the sum with function 1 : " << returnSum( 5 , 0 ) << endl;
    cout << "the sum with function 2 : " << returnSum1( 87 ) << endl;
    cout << " the factorial of " << number << " is : " << returnFctorial1( number ) << endl;

  return 0;
}
