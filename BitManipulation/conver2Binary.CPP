// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void reverse( char *&str , int right , int left )
{
   while( left > right )
   {
      int temp = str[left];
      str[left] = str[right];
      str[right] = temp;
      left++;
      right--;
   }
}
string convert2Binary( int number )
{
  int index = 0;
      int storeBin = 0;
      char *str = new char;
      while( number > 0 )
      {
          int bit = number % 2;
          str[index++] = '0' + bit ;
          number /= 2;
      }
      reverse( str , index -1 , 0);
      return str;cout
}
int main(void) {

    convert2Binary( 13 );

  return 0;
}
