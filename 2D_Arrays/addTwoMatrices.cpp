// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void display( int arr[][3] , int row , int column )
{
    for( int i=0; i<row; i++ )
     {
        for( int j=0; j<column; j++ )
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
     }

}
void Add( int arr[][3] , int brr[][3] , int row , int column )
{
    int crr[3][3];
     for( int i=0; i<row; i++ )
     {
        for( int j=0; j<column; j++ )
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
     }
     display( crr , 3 , 3 );
}

int main(void) {

int arr[3][3] = { 3 , 5 , 12 , 54 , 7 , 98 , 56 , 453, 644 }; 
int brr[3][3] = { 3 , 5 , 443 , 54 , 9 , 98 , 16 , 43, 64 }; 

Add( arr , brr , 3 , 3 );

  return 0;
}
