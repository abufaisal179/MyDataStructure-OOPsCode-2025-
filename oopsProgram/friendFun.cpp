// Hey guys , its Faisal's Program : TITLE >> {friend function in c++}
#include <iostream>
using namespace std;
class Colour 
{
    private:
    string theme;
    int colourCode;

    public:
    void setColour ( string theme , int colourCode )
    {
        this -> theme = theme;
        this -> colourCode = colourCode;
    }

    friend void showColour( Colour o1 );

};
void showColour ( Colour o1 )
{
  cout << "the theme is " << o1.theme << "\nthe colourCode is " << o1.colourCode << endl;

}
int main(void) {

    Colour c1;
    c1.setColour( "green" , 4 );

    showColour( c1 );

  return 0;
}
