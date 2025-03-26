// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void print( int n ) {

      for( int i=0; i<n; i++ )
      {
         for( int j=0; j<2*(i); j++ )
         {
            cout << " ";
         }
         for( int j=0; j<=n-i-1; j++ )
         {
            cout << "* ";
         }
         cout << endl;
      }
        
    }
int main(void) {


print( 5 );

  return 0;
}
