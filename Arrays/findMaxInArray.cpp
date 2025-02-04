// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnMax( int arr[] , int size )
{
    int result = 0;
    for( int i=0; i<size; i++ )
    {
        if( result < arr[i] )
        {
            result = arr[i];
        }
    }
    return result;
}
int returnMin( int arr[] , int size )
{
    int result = arr[0];
    for( int i=0; i<size; i++ )
    {
        if( result > arr[i] )
        {
            result = arr[i];
        }
    }
    return result;
}
int main(void) {

   int arr[5] = { 3 , 7 , 1 , 5 , 4 };
   int len = sizeof(arr)/sizeof(arr[0]);
   cout << "the max is : " << returnMax( arr , len) << endl << "And the min is : " << returnMin( arr , len);
   
  return 0;
}
