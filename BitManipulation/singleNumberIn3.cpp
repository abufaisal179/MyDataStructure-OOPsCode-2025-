// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <algorithm>
using namespace std;
int singleIn3( int *arr , int n )
{
    int i=1;

    while( i < n )
    {
      if( arr[i-1 == arr[i]] )
      {
          i+=3;
      }
      else return arr[i-1];
        i++;
    }

    return arr[i-2];
}

int main(void) {

    int arr[7] = { 4 , 4 , 4 , 45 , 2 , 2 , 2 };
    int n = 7;
    sort(arr, arr + n);

   cout <<  singleIn3( arr , n );

  return 0;
}
