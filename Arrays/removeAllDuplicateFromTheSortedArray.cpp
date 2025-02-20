// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int removeAllDup( int *arr , int n )
{
    int i =0;
    int countDup = 0;
    while( i < n )
    {
       if( arr[i] == arr[i+1] )
       {
          for( int j = i; j<n ; j++ )
          {
              arr[j] = arr[j+1];
          }
        countDup++;
       }
        i++;
    }
    n = n - (countDup/2);
    return n;
}
void print( int *arr , int n )
{
    int i=0;
    while ( i < n )
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
int main(void) {

    int arr[8] = { 1 , 2 , 2 , 5 , 9 , 9 , 10 , 10 };

 int n = removeAllDup( arr, 8);
    print( arr , n );

  return 0;
}
