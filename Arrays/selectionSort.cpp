// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void selectionSort( int arr[] , int n )
{
    int temp , minIdxEle;
    for( int i=0; i<n-1; i++ )
    {
      for( int j=i+1; j<n; j++ )
      {
        minIdxEle = i;
          if( arr[j] < arr[minIdxEle])
          {
            minIdxEle = j;
          }
      }
      swap ( arr[minIdxEle] , arr[i]);
    }

}
void print( int *arr , int n )
{
    int i=0;
    while ( i < n )
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
int main(void) {

    int arr[6] = {1, 3, 5, 4, 7, 2};
    int size = 6;
    selectionSort( arr , size );
    print( arr , size );

  return 0;
}
