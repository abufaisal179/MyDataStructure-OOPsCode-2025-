#include <iostream>
using namespace std;
string returnFav( int number )
{
    switch(number)
    {
        case 1:
        return "milk";
        case 2:
        return "coke";
        case 3:
        return "water";
        case 4:
        return "sprite";
        
        case 5:
        return "juice";
        default:
        return "error";
    }
}
int main ( void )
{


    cout << "enter number : ";
    int number;

    cin >> number;

    cout << returnFav( number );

    return 0;
}