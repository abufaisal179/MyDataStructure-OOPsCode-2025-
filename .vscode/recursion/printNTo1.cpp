// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void printNum( int n )
{
    if( n > 10 )
    {
        return;
    }

    printNum( n + 1 );
    cout << n << " ";
}
int main(void) {
   
   int n = 1;

   printNum(n);

  return 0;
}
