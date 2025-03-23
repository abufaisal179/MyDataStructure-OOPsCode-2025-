// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <vector>
using namespace std;
void sort( int *arr , int n )
{
     int countZero = 0;
     int countOne = 0;
     int countTwo = 0;

     for( int i=0; i<n; i++ )
     {
          if( arr[i] == 0 )
          countZero++;
          else if( arr[i] == 1 )
          countOne++;
          else countTwo++;
     }
     for( int i=0; i<countZero; i++ )
     {
        arr[i] = 0;
     }
     for( int i=countZero; i<countOne+countZero; i++ )
     {
        arr[i] = 1;
     }
     for( int i=countOne+countZero; i<n; i++ )
     {
        arr[i] = 2;
     }



     for( int i=0; i<n; i++ )
     {
        cout << arr[i] << " ";
     }

}
int main(void) {
    int arr[10] = { 0 , 2 , 1 , 0 , 0 , 1 , 2 , 0 , 1 , 2 };
    sort( arr , 10 );

  return 0;
}
