// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Engine 
{
    public:
    void start(void)
    {
          cout << "engine started " << endl;
    }

};
class Derive 
{
    public:
    Engine engine;
    void derived( void )
    {
        engine.start();
        cout << "car is moving " << endl;
    }
};
int main(void) {

    Derive E1;
    E1.derived();

  return 0;
}
