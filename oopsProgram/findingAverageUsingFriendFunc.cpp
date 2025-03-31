// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
#define AVG 3
class Averages
{
    private:
    int number1 , number2 , number3;
    public:
    Averages( int number1 , int number2 , int number3 )
    {
        this-> number1 = number1;
        this-> number2 = number2;
        this-> number3 = number3;
    }

    void display(void)
    {
        cout << ( number1 + number2 + number3 ) / 3 << endl;
    }

};
int main(void) {


  Averages avg1( 90 , 76 , 87 );
  avg1.display();

  return 0;
}
