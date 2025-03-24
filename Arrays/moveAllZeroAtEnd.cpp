// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void moveZero( int *arr , int n )
{
    int j=0;
    for( int i=0; i<n; i++ )
    {
        if( arr[i] == 0 ) 
        {
            j = i;
            break;
        }
    }

    for( int i=j+1; i<n; i++ )
    {
        if( arr[i] != 0 )
        {
            swap( arr[i] , arr[j] );
            j++;
        }

    }
}
void print( int *arr , int n , int d )
{
    for( int i=d; i<n; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void) {

    int arr[7] = { 3 , 6 , 0 , 5 , 12 , 0 , 34 };

    moveZero( arr , 7 );
    print( arr , 7 , 0 );

  return 0;
}
