// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void reverse( int *arr , int start , int end )
{
    while( start < end )
    {
        swap( arr[start] , arr[end] );
        start++;
        end--;
    }
}
void print( int *arr , int n , int d )
{
    for( int i=d; i<n; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void rotateByK( int *arr , int n , int k )
{
    reverse( arr , 0 , k-1 );
    print( arr , k , 0 );
    reverse( arr , k , n-1 );
    print( arr , n , k );
    reverse( arr , 0 , n-1 );
}
int main(void)
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int n = 7;
    cout << "enter d : ";
    int d;
    cin >> d;
    rotateByK( arr , n , d);
    print( arr , n , 0);
    return 0;
}
