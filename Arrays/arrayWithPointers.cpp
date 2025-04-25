// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
void printArray( int *arr , int n )
{
    cout << "the array elements are : " << endl;
    for( int i=0; i<n; i++ )
    {
        cout << *(arr+i) << " ";
    }

    cout << endl;
}
int main(void) {


    int arr[] = { 5 , 3 , 5 , 8 , 67 , 4  , 23 , 7 };
    int size = 8;

    printArray( arr , size );

    cout << "after sort array elements are : " << endl;

    insertionSort( arr , size );

    printArray( arr , size );


  return 0;
}
