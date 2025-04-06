#include <iostream>
// Hey guys , its Faisal's Program : TITLE >> {}
using namespace std;
void print( int n )
{
    int number1 = 0 , number2 = 1;
    printf(" 0 1 ");

    n-=2;

    
    while( n-- )
    {
        int next = number1 + number2;
        cout << next << " ";
        number1 = number2;
        number2 = next;
    }
}
int main(void) {


    print(5);


  return 0;
}

