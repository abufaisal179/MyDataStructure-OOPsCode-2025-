// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Base_class
{
    public:
    virtual void display(void)
    {
        cout << "base class display called" << endl;
    }
};
class Derived_class : public Base_class
{
    public:
     void display(void)
    {
        cout << "derived class display called" << endl;
    }
};
 int main(void)
{
  Base_class *ptr;
  Derived_class d1;
  ptr = &d1;

  ptr -> display();

    return 0;
}
