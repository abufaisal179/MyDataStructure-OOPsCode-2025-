// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnSum(int *arr, int n, int i, int sum)
{
    if (i >= n)
        return sum;

    returnSum(arr, n, i + 1, sum + arr[i]);

}
int main(void)
{

    int arr[5] = {1, 2, 3, 4, 5};
    int len = 5;

    int result = returnSum( arr , len , 0 , 0 );

    cout <<"the result is : " << result << endl;

    return 0;
}
