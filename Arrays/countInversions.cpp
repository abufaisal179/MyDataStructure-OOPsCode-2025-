// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnCount( int *arr , int n )
{
  int count = n;

     for( int i=0; i<n; i++ )
     {
        for( int j=i+1; j<n; j++ )
        {
            if( arr[i] > arr[j] )
            {
                count--;
                continue;
            }
        }
     }

     return count;
}
int main(void) {

    int arr[5] ={ 3 , 2 , 5 , 1 , 0 };

    cout << "the total inversions are : " << returnCount( arr , 5 ); 

  return 0;
}
