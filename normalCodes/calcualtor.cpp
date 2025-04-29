// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int returnNumber(  char val , int a , int b )
{
    switch( val )
    {
        case '+':
          return a+b;
    }
}
int main(void) {

    cout << "enter number 1st : " << endl;
    int number1; 
    cin >> number1;


    cout << "enter number 2nd : " << endl;
    int number2;
    cin >> number2;


    cout << "enter operation : " << endl;
    char ch;
    cin >> ch;


    cout << "calcualated value is : " << returnNumber( ch , number1 , number2 );

  return 0;
}
