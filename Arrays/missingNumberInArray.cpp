// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int missingNumber( int *arr , int n )
{

    int flag = 1;
    int i=arr[0];
    for( ; i<=n; i++ )
    {
        for( int j=i; j<=n; j++ )
        {
            if( i != arr[j] )
            flag = 0;
        }
    }

    if( flag == 1 )
    return i; 
}
int main(void) {

    int arr[] = { 4 , 5 , 6 , 8 , 9 };

    int size = sizeof(arr) / sizeof( int );
    int n = arr[size-1];

    int result =  missingNumber( arr , n );

    cout << "the missing number is : " << result;

  return 0;
}
