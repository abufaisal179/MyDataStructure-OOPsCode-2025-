// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void sortArray(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}
void print(int *arr, int n)
{
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int returnthLargest(int *arr, int n, int k)
{
    int i = n - 1;

    int prev = arr[n-1];

    while( true )
    {
    
    }




}
int main(void)
{

    int arr[] = {5, 3, 45, 3, 5, 8, 67, 34, 6};
    int size = 9;

    print(arr, size);
    sortArray(arr, size);
    returnthLargest(arr, size, 3);
    print(arr, size);

    return 0;
}
