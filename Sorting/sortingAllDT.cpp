// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {

    int arr[] = { 4 , 2 , 4 ,5 , 3 ,  3 };
    int arrSize = sizeof(arr)/sizeof(int);
    char brr[] = { 'f' , 'a' , 'i' , 's' , 'a' , 'l' };
    int brrSize = sizeof(brr)/sizeof(char);
    float crr[] = { 4.6 , 2.4 , 9.2 , 11 , 5 };
    int crrSize = sizeof(crr)/sizeof(float);



    sort( arr , arr + arrSize );
    sort( brr , brr + brrSize );
    sort( crr , crr + crrSize );

    
    cout << "printing all integers " << endl;
    for( int i=0; i<arrSize; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl << "printing all characters " << endl;
    for( int i=0; i<brrSize; i++ )
    {
        cout << brr[i] << " ";
    }
    cout << endl << "printing all floats " << endl;
    for( int i=0; i<crrSize; i++ )
    {
        cout << crr[i] << " ";
    }

     

  return 0;
}
