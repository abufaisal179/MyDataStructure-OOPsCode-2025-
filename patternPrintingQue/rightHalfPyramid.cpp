// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int number )
{
      for( int i=1; i<=number; i++ )
      {
          for( int j=1; j<=i; j++ )
          {
              cout << " * ";
          }
          cout << endl;
      }
}
int main(void) {

   int num;
   cout << "enter number : ";
   cin >> num;

   print( num );

  return 0;
}
