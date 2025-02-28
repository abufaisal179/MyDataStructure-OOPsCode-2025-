// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int deleteEle( int *arr , int n )
{
    int count=0;
     for( int i=0; i<n; i++ )
     {
        if( arr[i] % 2 == 0)
        {
             for( int j=i; j<n; j++ )
             {
                arr[j] = arr[j+1];
             }
        } else count++;
     }

     return count;
}
void display( int *arr , int n )
{
      for( int i=0; i<n; i++ )
      {
        cout << arr[i] << " ";
      }
}
int main(void) {

    int arr[5] = { 4 , 5 , 6 , 3 , 8 };
    int n = deleteEle( arr , 5 );
    //display( arr , n );

  return 0;
}
