// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <limits.h>
using namespace std;
int findMax( int *arr , int n , int i , int max )
{
    if( i == n  )
    {
        return max;
    }
 
    if( max < arr[i] )
    {
        max = arr[i];
    }

    findMax( arr , n , i+1 , max );

}
int main(void) {


    int arr[] = { 4453 , 547 , 234454 , 77 , 56000000 , 4 , 100000 };

    int size = sizeof(arr)/sizeof(int);

    cout << findMax( arr , size , 0 , INT_MIN );

  return 0;
}
