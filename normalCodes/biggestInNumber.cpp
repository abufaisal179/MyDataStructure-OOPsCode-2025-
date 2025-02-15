// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int giveBiggest( int number )
{
    int last_digit;
    int container = 0;
    int max = 0 , store ;
     while( number > 0 )
     {
        last_digit = number % 10;
        container = container * 10 + last_digit;
        if( max < store )
        {
            max = store; 
        }
        store = container;
        store /= 10;
        number /= 10;
     }
     cout << max;
}
int main(void) {

    cout << "enter number : ";
    int num; 
    cin >> num;

    giveBiggest( num );

  return 0;
}
