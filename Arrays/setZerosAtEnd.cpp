// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <vector>
using namespace std;
void zerosEnd(int *arr, int n)
{
    int count=0;
    for( int i=0; i<n; i++ )
    {
        if( arr[i] == 0 )
        {
            count++;
        }
    }
    vector<int>brr;
    int i=0;
    for(  ; i<n; i++ )
    {
         if( arr[i] != 0 )
         {
            brr[i] = arr[i];
         }
    }
    while( count--)
    {
        brr[i] = 0;
        i++;
    }

    for( i=0; i<n; i++ )
    {
        cout << brr[i] << " ";
    }
}
int main(void)
{

    int arr[7] = {4, 0, 3, 0, 0, 1, 3};

    zerosEnd(arr, 7);

    return 0;
}
