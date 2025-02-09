// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <vector>
using namespace std;
void merge( int *arr , int low , int mid , int high )
{
    vector<int>s; 
    if( low >= high )
    return;
    int left = low;
    int right = mid+1;
    while( left <= mid && right <= high )
    {
        if( arr[left] <= arr[right] )
        {
           s.push_back(arr[left]);
           left++;
        }
        else 
        {
            s.push_back(arr[right]);
           right++;
        }
    }
    while( left <= mid )
    {
        s.push_back(arr[left]);
        left++; 
    }
    while( right <= high )
    {
        s.push_back(arr[right]);
       right++;
    }
    for( int i=0; i<s.size(); i++ )
    {
       arr[low+i] = s[i];
    }
}
void mergeSort( int *arr , int low , int high )
{
    if(  low >= high )
    return;

    int mid = ( low + high ) / 2;

    mergeSort ( arr , low , mid );
    mergeSort( arr , mid+1 , high );
    merge( arr , low , mid , high );
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
     mergeSort( arr , 0 , 5);
     print( arr , 6 );    
  return 0;
}
