#include <iostream>
// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void delElement( int *arr , int target , int *n )
{
     for( int i=0; i<*n; i++ )
     {
        if( arr[i] == target )
        {
            for( int j=i; j<*n; j++ )
            {
                arr[j] = arr[j+1];
            }
        }
     }
     n--;
}
void display(int *arr , int n )
{
    for( int i=0; i<n; i++ )
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main(void) {

    int arr[5] = {5 , 7 , 8 ,2 , 1 };

    int n = 5;

    delElement( arr , 7 , &n );

    display( arr , 5 );

  return 0;
}
