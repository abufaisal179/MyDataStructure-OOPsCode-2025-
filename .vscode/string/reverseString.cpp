// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void reverseString( string &str , int n )
{
    
      int left = 0;
      int right = n-1;

      while( left < right )
      {
        swap( str[left] , str[right] );
          left++;
          right--;
      }
}
void display(string str)
{
    cout << str << endl;
}
int main(void) {

    string str = "faisal";
    int size = str.length();

    reverseString( str , size );
    display( str );

  return 0;
}
