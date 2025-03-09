// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int countBit( int bits , int count, int result )
{
    if( bits <= 0 )
    {
        return 0;
    }

    bits = bits >> 1;

    if( bits & 1 )
    result++;
    
    return result  + countBit( bits , count , result);
}
int main(void) {


   int result =  countBit( 1101101 , 0 , 0);

   cout << "count bits should be 5 : " << result << endl;

  return 0;
}
