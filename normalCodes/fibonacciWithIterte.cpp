// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void printFibo( int curr , int next )
{
    cout << "enter the target : ";
    int target , sum;
    cin >> target;


    cout << curr << " " << next << " ";
    while( curr <= target )
    {
          sum = curr + next;
          curr = next;
          next = sum;
          cout << sum << " ";
    }
}
int main(void) {


    printFibo( 0 , 1 );

  return 0;
}
