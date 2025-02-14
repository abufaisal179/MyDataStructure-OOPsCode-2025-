// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Overload 
{
    int a;


    public:
    Overload( int x  )
    {
        a = x;
    }
    void operator+=( Overload obj2 )
    {
        this -> a += obj2.a;
    } 
    void print()
    {
        cout << this -> a << " " << endl;
    }
};

int main(void) {

    Overload a1( 4 );
    Overload a2( 2 );
    Overload a3( 9 );
    a1.print();
    a2.print();

    cout << "the sum of both is : " << endl;           
     a1 += a2;

    a1.print();

  return 0;
}
