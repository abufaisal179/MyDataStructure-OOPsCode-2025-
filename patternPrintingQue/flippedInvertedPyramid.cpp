// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void printFlippedInvertedPyramid(int n)
{
    int i = 1;
    int j = 1;
    while ( i <= n )
    {
        j = 1;
        while ( j <= i )
        {
            cout << " * ";
            j++;
        }
        j=1;
       while ( j >= i )
       {
          cout << " * ";
          j++;
       }
        cout << endl;
        i++;
    }
}
int main(void)
{

    printFlippedInvertedPyramid(8);
    return 0;
}
