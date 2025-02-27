// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void plaindromeOrNot( string &s , int n )
{
    int left = 0;
    int right = n-1;

    string str = s;
    while( left < right )
    {
      swap( str[left] , str[right] );
        left++;
        right--;
    }
   
    if( str == s )
    {
        cout << "palindrome string " << endl;
        return;
    }
    cout << "not palindome " << endl;
} 
int main(void) {

    string str = "falaf";

    plaindromeOrNot( str , str.length() );

  return 0;
}
