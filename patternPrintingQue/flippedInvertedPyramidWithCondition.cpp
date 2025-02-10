// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void printFlippedInvertedPyramid(int n)
{
    int i=1;
    int j;
    while ( i <= n )
    {
        j = 0;
        while ( j <= n )
        {
            if( j >= i)
            {
                cout << "*";
            }
            else 
            {
            cout << " ";
            }
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
