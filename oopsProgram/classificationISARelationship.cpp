// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Hayundai
{
    protected:
    void carColor(void)
    {
        cout <<" the car color is white " << endl;
    }
};
class X4 : public Hayundai 
{
    public:
    string carModel;
    X4( string carModel )
    {
        this -> carModel = carModel;
    }
    void showData( void )
    {
        cout << " the car Model is : " << carModel << endl;
        carColor();
    }
};
int main(void) {

    X4 x1("emp5");
    x1.showData();


  return 0;
}
