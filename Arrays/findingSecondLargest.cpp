// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnSecondL( int *arr , int n )
{
    int largest = INT16_MIN;
    int secondLargest = INT16_MIN;

    for( int i=0; i<n; i++ )
    {
        if( arr[i] > largest )
        {
            largest = arr[i];
        }
    }
    
    for( int i=0; i<n; i++ )
    {
        if( arr[i] > secondLargest && arr[i] != largest )
        {
            secondLargest = arr[i];
        }
    }

      return secondLargest;
}
int main(void) {


    int arr[] = { 4 , 6 , 2 , 8 , 87 , 89 };

    cout << "the second largest element is : " << returnSecondL( arr , 6 );

  return 0;
}
