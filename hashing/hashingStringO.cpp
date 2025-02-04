// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;

int main(void) {
    

    string s;
    cout << " enter string : ";
    cin >> s;

    int hash[26] = {0};
    for( int i=0; i< s.size(); i++ )
    {
        char ch = s[i];
        hash[ ch - 'a'] += 1;
    }

 
    int q = s.size();

    while( q-- )
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << " ";
    
    }

  return 0;
}
