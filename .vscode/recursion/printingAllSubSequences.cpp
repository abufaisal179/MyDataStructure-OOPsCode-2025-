// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <vector>
using namespace std;
void printAllSub( int i , int *a , vector<int>&arr , int n )
{
    if( i == n )
    {
        for( auto it : arr )
        {
            cout << it << " ";
        }
        if( arr.size() <= 0 )
        cout << "{}";
        cout << endl;

        return;
    }

    arr.push_back( a[i] );
    printAllSub( i+1 , a , arr , n );
    arr.pop_back();
    printAllSub( i+1 , a , arr , n );
}
int main(void) {

    int a[3] ={ 1 , 2, 4 };

    vector<int>arr;

    printAllSub( 0 , a , arr , 3 );

  return 0;
}
