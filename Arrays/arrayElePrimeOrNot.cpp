// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
bool printPrime(int number)
{
    int i=2;
    while( i < number )
    {
        if( number % i == false )
        {
            return false;
        }
        i++;
    }
    return true;
}
int main(void)
{
    int arr[5] = {9, 6, 5, 7, 4};
    int len = sizeof(arr) / sizeof(int);
    int i = 0;
    while (i < len)
    {
        if (printPrime(arr[i]))
        {
            cout << "prime number " << endl;
        }
        else
        {
            cout << "not a prime number " << endl;
        }

        i++;
    }
    return 0;
}
