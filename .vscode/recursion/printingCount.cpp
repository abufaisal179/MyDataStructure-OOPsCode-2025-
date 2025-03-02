// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int count )
{
      if( count == 5 )
      {
        return;
      }
      count++;
      print(count);
      cout << count << " ";
}
int main(void) {

    print( 0 ); 

  return 0;
}
