// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnIdx ( int *arr , int n , int i , int target )
{
    if( i == n )
    return -1;

    if( arr[i] == target )
    {
          return i;
    }

    returnIdx( arr , n , i+1 , target );

}
int main(void) {


    int arr[] = { 3 , 5 , 34 , 5 , 6 , 34 };

    int result = returnIdx( arr , 6 , 0 , 34 ); 

    cout << result << " ";

  return 0;
}
