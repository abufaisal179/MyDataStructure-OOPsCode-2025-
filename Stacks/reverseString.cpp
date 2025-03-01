// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <stack>
using namespace std;
void reverseString( string s )
{
    stack<char>st;
    int len = s.length();
    int i=0;
    while( i < len )
    {
        st.push(s[i]);
        i++;
    }

    while( !st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

}
int main(void) {

    string str = "faisal";
    reverseString( str );

  return 0;
}
