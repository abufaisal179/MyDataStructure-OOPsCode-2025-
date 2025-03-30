// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
#define MAX 4
void convertToTranspose( int arr[MAX][MAX] , int row , int column )
{
    for( int i=0; i<row; i++ )
    {
        for( int j=0; j<column; j++ )
        {
            arr[i][j] = arr[j][i];
        }
    }

}
void print( int arr[MAX][MAX] , int row , int column )
{
    for( int i=0; i<row; i++ )
    {
        for( int j=0; j<column; j++ )
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
int main(void) {

    int arr[4][4] = 
    {
        { 1 , 2, 3 , 7 },
        { 4 , 5 , 6 , 3 },
        { 6 , 7 , 8 , 7 },
        { 3 , 4 , 5 , 9 },
    };

    convertToTranspose( arr , 4 , 4 );
    print( arr , 4 , 4 );

  return 0;
}
