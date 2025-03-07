// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void reverseArray( int *arr , int i , int n )
{
    if( i >= n/2 )
    return;

    swap( arr[i] , arr[n-i-1] );
    reverseArray( arr , i+1 , n );
}
void print( int *arr , int n )
{
    int i=0;
     while( i< n )
     {

        cout << arr[i] << " ";
        i++;
     }
}
int main(void) {

    int arr[5] = { 5 , 3 , 2 , 1 , 0 };
    reverseArray( arr , 0 , 5 );
    print( arr , 5 );

  return 0;
}
