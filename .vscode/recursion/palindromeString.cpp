// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void palindrome(string str, int n, int i)
{
    if (i >= n / 2)
        return;

    if (str[i] == str[n - i - 1])
    {
        palindrome(str, n, i + 1);
    }
    else
    {
        cout << " not a palindrome " << endl;
        return;
    }

    cout << " palindrome string " << endl;
}
int main(void)
{

    string str = "faaf";
    int n = str.length();

    palindrome(str, n-1, 0);

    return 0;
}

