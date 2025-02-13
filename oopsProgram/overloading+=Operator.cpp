// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Overload 
{
    int a;
    int b;

    public:
    Overload( int x , int y )
    {
        a = x;
        b = y;
    }
    Overload operator+=( Overload obj2 )
    {
        this -> a += obj2.a; 
        this -> b += obj2.b;

        return *this;
    }
    void print()
    {
        cout << this->a << " " << this -> b << endl;
    }
};

int main(void) {

    Overload a1( 4 , 5);
    Overload a2( 2 , 3);
    a1.print();
    a2.print();

    cout << "the sum of both is : " << endl;
    a1 += a2;

    a1.print();

  return 0;
}
