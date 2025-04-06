#include <iostream>
using namespace std;
void insertionSort( int *arr , int n )
{
    int i=0;
    while( i < n )
    {
        int j=i+1;
       while( j>=0)
       {
           if( arr[j] > arr[i] )
           {
            swap( arr[i] , arr[j]);
           }
           j -= 1;
       }

       arr[j+1] = arr[i]; 
       
        i++;
    }
}
void display( int *arr , int n )
{
    for( int i=0; i<n; i++ )
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main(void) {

    int arr[6] = { 7 , 4 , 5 , 1 , 2 ,3 };

    insertionSort( arr , 6 );
    display( arr , 6 );

  return 0;
}
