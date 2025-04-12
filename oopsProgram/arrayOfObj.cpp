// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Demo
{
    private:
    string name;
    int val;

    public:
    Demo( string name , int val )
    {
        this-> name = name;
        this-> val = val;
    }
    
    void display(void)
    {
        cout << "the name is : " << name << endl << "the value is : " << val << endl;
    }
};
int main(void) {

    Demo d1[2]
    {
        { "faisal" , 7 },
        { " Charls" , 3 },
    };

    for( int i=0; i<2; i++ )
    {
        d1[i].display();
    }

  return 0;
}
