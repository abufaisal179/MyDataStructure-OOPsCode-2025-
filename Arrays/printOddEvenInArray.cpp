// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int *arr , int n , int i )
{
    if( i == n )
    return;
   
   if( arr[i] % 2 == 0 )
   {
      printf("%d is even \n" , arr[i]);
   }
   else printf("%d is odd \n" , arr[i]);

    print( arr , n , i+1 );
}
int main(void) {

    int arr[] = { 4 , 5 ,2 ,4 , 9 , 11, 8 , 98 , 34 };
    int n = 9;

    print( arr , n , 0 );

  return 0;
}
