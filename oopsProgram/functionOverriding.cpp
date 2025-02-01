// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class BaseClass
{
public:
    virtual void printData(void)
    {
        cout << "Base class is called " << endl;
    }
};
class DerivedClass : public BaseClass
{
    public:
    // void printData(void)
    // {
    //     cout << "derived class is called " << endl;
      
    // }
};
int main(void)
{

    DerivedClass d1;
    d1.printData();
    return 0;
}
