// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
float returnF(float cl )
{
    return (cl*9/5) + 32;
}
int main(void) {


    cout << "enter the degree celsius : ";
    float cl;
    cin >> cl;

    cout << "the conversion is : " << returnF(cl);

  return 0;
}
