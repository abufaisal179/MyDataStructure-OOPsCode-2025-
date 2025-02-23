// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void toggle( int number , int i )
{
    cout << "old val = " << number << endl;
    int num = number ^ ( 1 << i );
    cout << "new val = " << num;

}
int main(void) {

    toggle( 15 , 2 );

  return 0;
}
