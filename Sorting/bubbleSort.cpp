// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void bubbleSort( int *arr , int n )
{
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n-i-1; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
            }
        }
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(void) {

    int arr[5] = {4, 1, 5, 2, 3};

    int length = sizeof(arr) / sizeof(int);

    bubbleSort(arr, length);
    display(arr, length);


  return 0;
}
