#include <iostream>
using namespace std;
class Demo
{
    public:
    static string str;

    void putName( string name )
    {
        str = name;
    }
    void printName(void)
    {
        cout << "the name for this obj is : " << str << endl;
    }
};
string Demo::str;
int main ( void )
{
   Demo d1 , d2;
   d1.putName("faisal");
   d1.printName();
   d2.printName();

    return 0;
}