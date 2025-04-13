// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int reverse( int number , int container )
{
    int remainder;
    if( number )
    {
        remainder = number % 10;
        container = container * 10 + remainder;
        reverse( number / 10 , container );
    }
    else 
    {
        return container;
    }
}

int main(void) {
  cout << "enter number : ";
  int num;
  cin >> num;

  cout << "the reversed number is : " << reverse( num , 0  );
  return 0;
}
