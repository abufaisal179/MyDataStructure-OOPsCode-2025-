// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    int smallestIdx;
    for (int i = 0; i < size - 1; i++)
    {
        smallestIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(void)
{

    int arr[5] = {4, 1, 5, 2, 3};

    int length = sizeof(arr) / sizeof(int);

    selectionSort(arr, length);
    display(arr, length);

    return 0;
}
