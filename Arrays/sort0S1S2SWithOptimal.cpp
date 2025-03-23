// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void returnSorted( int *arr , int n , int low , int high , int  mid )
{

     while( mid < high )
     {
          if( arr[mid] == 0 )
          {
              swap( arr[low++] , arr[mid++] );
          }
          else if( arr[mid] == 1 )
          {
              mid++;
          }
          else swap( arr[mid] , arr[high--]);
     }
}
void print( int *arr , int n )
{
    for( int i=0; i<n; i++ )
    {
        cout << arr[i] << " ";
    }
}
int main(void) {

    int arr[9] = { 0 , 2 , 1 , 0 , 0 , 0 , 2 , 1 , 0 };

    returnSorted( arr , 9 , 0 , 8 , 0  );
    print( arr , 9 );

  return 0;
}
