// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void moveZero( int *arr , int n )
{
    int index = 0;

    for( int i=0; i<n; i++ )
    {
        if( arr[i] != 0 )
        {
            arr[index++] = arr[i];
        }
    }

    while( index <= n-1 )
    {
         arr[index++] = 0;
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


      int arr[7] ={ 5 , 0 , 2 , 0 , 0 , 7 , 1 };

      moveZero( arr , 7 );
      print( arr , 7 );

  return 0;
}
