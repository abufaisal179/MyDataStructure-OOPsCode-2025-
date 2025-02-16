// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class A
{
    public:
    void function(void)
    {
        std :: cout << "class A function called " << endl;
    }
};
class B   
{ 
    public:
    void function(void)
    {
        std :: cout << "class B function called " << endl;
    }
};
class C : public A , public B 
{
   // inherits from the both class and collision happened.
};
int main(void) {

    C obj;
    obj.A::function();
  return 0;
}
