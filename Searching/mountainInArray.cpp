// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int mountainEleSreaching(int size, int arr[])
{
    int start = 0 , end = size-1 , mid = end + (start - end) / 2;

    while ( start < end )
    {
        if( arr[mid] > arr[mid+1] )
        {
            end = mid;
        }
        else 
        {
            start = mid + 1;
        }
       mid = end + (start - end) / 2;
    }
    return start;
}
int main(void)
{
    int arr[] = {2, 5, 7, 23, 18, 13};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = mountainEleSreaching(length, arr);
    cout << "the index on which mountain element is present on : " << result;
    return 0;
}
