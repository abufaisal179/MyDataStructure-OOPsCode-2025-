// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void swapAlternate( int arr[] , int size )
{
    int i = 0 , j = 1;

    while( j < size )
    {
        swap( arr[i] , arr[j]);
        i += 2;
        j +=2;
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

    int arr[6] = { 4 , 2 , 7 , 3 , 1 , 5 };
    int size = sizeof(arr)/sizeof(int);
    
   // swapAlternate( arr , size);
    print( arr , size ); 

  return 0;
}
