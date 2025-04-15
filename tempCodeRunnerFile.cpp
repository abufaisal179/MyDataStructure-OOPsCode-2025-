#include <iostream>
using namespace std;
void printArray( int *arr , int  n )
{

    for( int i=0; i<n; i++ )
    printf("%d " , arr[i]);

    cout << endl;
}
void selectionSort( int *arr , int n )
{
    printArray( arr , n );
   if( n == 1 )
   {
      cout << " invalid array ";
      return;
   }
   
   else 
   {
      
      int i = 0;
      int minIdx;
      while( i < n - 1 )
      {
        minIdx = i;
        int j=i+1;
         while( j < n )
         {
            if( arr[j] < arr[minIdx] )
            swap( arr[j] , arr[minIdx] );
 
            j++;
         }
        printArray( arr , n );
          i++;
      }


   }
}
int main ( void )
{

    int arr[] = { 4 , 6 , 2 , 3  , 5 , 2 , 1 , 7 };

    int n = sizeof(arr)/sizeof(int);

    selectionSort( arr  , n );

    printArray( arr , n );
    return 0;
}