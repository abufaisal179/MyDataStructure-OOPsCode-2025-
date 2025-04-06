#include <iostream>
#include <string.h>
using namespace std;
void conString( string str1 , string str2 )
{
    strcat( str1 , str2 );

}
int main ( void )
{

    string str1 = " faisal ";
    string str2 = " abu ";

    conString( str1 , str2 );

    cout << str1 << endl;
    return 0;
}