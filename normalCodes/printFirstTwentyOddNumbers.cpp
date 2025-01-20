// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void printFirstTwenty()
{
    int count = 20 , i = 1 ;
    while( count >= 1 )
    {
          if ( i % 2 == 1 )
          {
               cout << i << " ";
               count--;
          }
          i++;
    }
}
int main(void) {

    printFirstTwenty();

  return 0;
}
