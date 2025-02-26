// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int findUnique( int *arr , int n )
{
    int i=0;
    int store = 0;
     while( i < n )
     {
       store = store ^ arr[i];
        i++;
     }

     return store;
}

int main(void) {
    int arr[] = { 4 , 5 , 7 , 5 , 4 };
    int size = sizeof(arr)/sizeof(int);

    int result = findUnique( arr , size );
    cout << "the result is :  " << result << endl;

  return 0;
}
