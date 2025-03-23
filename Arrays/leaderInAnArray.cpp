// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <vector>
using namespace std;
void findingLeader(int *arr, int n)
{
    int i=n-1;
    int max = INT16_MIN;
    vector<int>arr1;
    while( i >= 0 )
    {
        if( arr[i] > max )
        {
            max = arr[i];
            arr1.push_back( max );
        }
        i--;
    }
   for( auto it : arr1)
   {
      cout << it << " ";
   }
}
int main(void)
{

    int arr[6] = {10, 22, 12, 3, 0, 6};
    findingLeader( arr , 6 );

    return 0;
}
