// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int secondLargest( int *arr , int n )
{
   for( int i=n-1; i>=0; i-- )
   {
      if( arr[i] > arr[i-1])
      {
        return i-1;
      }
   }
}
int sortEle( int arr[] , int n )
{
    int i = 1;
   while ( i < n )
   {
    int temp = arr[i];
       int j = i - 1;
       while ( j >= 0 )
       {
           if ( arr[j] > temp )
           {
               arr[j+1] = arr[j];
            }
            else 
            {
                break;
            }
            j--;
       }
       arr[j+1] = temp;
       i++;
   }

   return secondLargest( arr , n );
}
void display( int *arr , int n )
{
    for( int i=0; i<n; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(void) {

    int arr[] = { 5 , 3 , 1 , 6 , 8 , 6 , 4 , 8 , 8 };
    int size = sizeof(arr)/sizeof(int);

    int secondLar = sortEle( arr , size );

    display( arr , size );

    cout << arr[secondLar] << endl; 

  return 0;
}
