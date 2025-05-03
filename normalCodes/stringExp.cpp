// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int main(void) {

    string str[] = { "faisal" , "hello" , "name" , "Nilesh" };

    for( int i=0; i<str->length(); i++ )
    {
        cout << *(str+i) << " ";
    }

    cout << endl;


    char s[] ="faisal";

    for( int i=0; i<7; i++ )
    {
        cout << s[i];
    }




  return 0;
}
