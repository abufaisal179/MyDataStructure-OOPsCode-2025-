// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
long long int factorial( int n )
{
    if( n == 0)
    return 1;
     //cout << n << " " << endl;
    long long int small = factorial(n -1);
    long long int big = n * small;
    cout << big << " " << endl;
    return big;
}
int main(void) {

    int num;
    cout <<"enter number : ";
    cin >> num;

    long long int result = factorial(num);

    cout << result << endl << endl;

  return 0;
}
