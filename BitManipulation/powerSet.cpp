// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
#include <list>
using namespace std;
list<string> powerSet( string s )
{
    list<string>l1;
    int n = s.size();

    for( int i=0; i<(1<<n); i++ )
    {
        string subset = "";
        for( int j=0; j<n; j++ )
        {
            if( i & (1 << j))
            {
                 subset += s[j];
            }
        }
      l1.push_back(subset);
    }

    return l1;
}
void print(list<string> &head) {
    for (const string &subset : head) {
        cout << subset << endl;
    }
}
int main(void) {

    string str = "456";
    list<string> head =  powerSet( str );
    print( head );
  return 0;
}
