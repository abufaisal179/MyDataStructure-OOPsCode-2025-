// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData(void)
    {
        cout << "your number is : " << a << " + " << b << "i" << endl;
    }
    friend Complex addComplex(Complex o1, Complex o2);
};
Complex addComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}
int main(void)
{

    Complex c1, c2;

    c1.setData(4, 9);
    c2.setData(5, 2);
    c1.printData();
    c2.printData();



    Complex c3 = addComplex(c1, c2);
    cout << "\t     ==========="<< endl;
    c3.printData();
    return 0;
}
