// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;

int main(void) {

    int arr[] = { 4 , 2 , 3 , 65 , 4 , 38 , 5, 1 };

    int size = 8;


    int *p = arr;

    for( int i=0; i<size; i++ )
    {
        cout << *p << " ";
        p += 1;
    }

  return 0;
}
