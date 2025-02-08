// Hey guys , its Faisal's Program : TITLE >> { insertion Sort}
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
void insertionSortWhile(int arr[], int n)
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
int main(void)
{

    int arr[6] = {1, 3, 5, 4, 7, 2};
    int size = 6;
    insertionSortWhile( arr , size );
    print( arr , size );

    return 0;
}
