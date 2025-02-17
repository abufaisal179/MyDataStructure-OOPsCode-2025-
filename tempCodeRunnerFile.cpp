// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void insertionSort( int *arr , int n )
{
     for( int i=0; i<n; i++ )
     {
        int j=i-1;
        int temp = arr[i];
        for( ; j>=0; j-- )
        {
            if( temp < arr[j] )
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
     }
}
void display( int *arr , int n )
{
    //cout << endl;
    for( int i=0; i<n; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void) {
    int arr[] = { 121 , 4 , 6 , 2 , 1 , 8 , 5 , 3  };

    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort( arr , n );
    display( arr , n );

  return 0;
}
