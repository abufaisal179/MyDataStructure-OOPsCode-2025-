// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void clear ( int number , int i )
{   

    int num = number & number-1;
    cout << num;
}
int main(void) {

     int i = 2;
    clear ( 7 , i );

  return 0;
}
