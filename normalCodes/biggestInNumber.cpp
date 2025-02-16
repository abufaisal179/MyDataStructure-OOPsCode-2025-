// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int giveBiggest( long long int number )
{
    long long int last_digit;
    long long int container = 0;
    long long int max = 0 , store ;
     while( number > 0 )
     {
        last_digit = number % 10;
        container = container * 10 + last_digit;
        if( max < container )
        {
            max = container; 
        }
        container /= 10;
        number /= 10;
     }
     cout << max;
}
int main(void) {

    cout << "enter number : ";
    long long int num; 
    cin >> num;

    giveBiggest( num );

  return 0;
}
