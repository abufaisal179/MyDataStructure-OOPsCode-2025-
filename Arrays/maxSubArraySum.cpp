// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <limits.h>
using namespace std;
int maxSubArray( int *arr , int n )
{
   int max = INT_MIN;
   int sum = 0;

   for( int i=0; i<n; i++ )
   {
      int j = i;
      sum = 0;
      for( ; j<n; j++ )
      {
        sum += arr[j];
           if( max < sum )
           {
              max = sum;
           }
      }
   }

   return max;
}
int main(void) {
  
    int arr[] = { 5 , 4 , -1 , 7 , 8 };
    int size = sizeof(arr)/sizeof(int);


    cout << maxSubArray( arr , size ); 
  return 0;
}
