// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int *arr , int i , int n )
{
    if( i == n )
    return;

    print( arr , i+1 , n );
    
    cout << arr[i] << " ";
}
int main(void) {

    int arr[5] = { 3 , 6 ,4 , 7 , 2 };
    int size = 5;

    print( arr , 0 , size);

  return 0;
}
