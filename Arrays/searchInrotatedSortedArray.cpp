// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnIdx( int *arr , int target , int n )
{

   int start = 0;
   int end = n-1;
   
   while( start <= end )
   {
        int mid = start + ( end - start ) / 2;
        if( arr[mid] == target )
        return mid;

        else if( arr[start] <= arr[mid] )
        {

            if( target >= arr[start] & target < arr[mid] )
            {
                end = mid - 1;
            }
            else 
            {
                start = mid + 1;
            }
        }
        else 
        {
            if( target > arr[mid] && target <= arr[end] )
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }

        }
   }

   return -1;


}
int main(void) {

    int arr[] = { 21 , 13 , 8 , 7 , 1 , 2 , 3 ,4 ,5 };
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = returnIdx( arr , 2 , size );

    cout << " result is : " << result ;

  return 0;
}
