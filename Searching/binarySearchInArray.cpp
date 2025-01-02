// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int binarySearch(int target, int arr[], int size)
{

    int start = 0, end = size - 1, mid = end + (start - end) / 2; // mid = low + (high - low) // 2

    while (start < end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = end + (start - end) / 2;
    }
    return mid;
}

int main(void)
{

    int target;
    int arr[] = {2, 4, 12, 23, 56, 123, 555};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter number to search : ";
    cin >> target;

    int result = binarySearch(target, arr, length);


    cout << "the index on which target element is present on :" << result ;

    return 0;
}
