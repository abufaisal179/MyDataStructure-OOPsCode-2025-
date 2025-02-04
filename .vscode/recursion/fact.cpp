// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int factorial ( int number )
{


    if( number == 1 )
    return 1;

    return number * factorial( number -1 );
}
int main(void) {

    cout << "enter number : ";
    int fact ;
    cin >> fact;
    int result = factorial(fact);


    cout << result ;

  return 0;
}
