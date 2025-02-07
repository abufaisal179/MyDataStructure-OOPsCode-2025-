// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void bubbleShort( int arr[] , int size )
{
    int i=0 , j =0;
    while( i < size - 1 )
    {
         while( j < size - 1 - i )
         {
            if( arr[j] > arr[j+1])
            swap( arr[j] , arr[j+1]);

            j++;
         }
    i++;
    }
}
void print( int arr[] , int size )
{
    for( int i=0; i<size; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void) {

    int arr[5] = { 5 , 2 , 9 , 6 , 7 };
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleShort( arr , size);
    print( arr , size);

  return 0;
}
