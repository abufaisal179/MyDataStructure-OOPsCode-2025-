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
int main(void while (left <= mid) {
    s.push_back(arr[left]);
    left++;
}

// Copy remaining elements from the right subarray
while (right <= high) {
    s.push_back(arr[right]);
    right++;
}) {


    int arr[6] = {1, 3, 5, 4, 7, 2};
    mergeSort( arr , 0 , 5);

  return 0;
}
