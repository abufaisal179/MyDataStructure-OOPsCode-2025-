//unary operator overloading using OOPs >>
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading the unary '-' operator
    Complex operator-() {
        Complex res;
        res.real = -real; // Negate real part
        res.imag = -imag; // Negate imaginary part
        return res;
    }

    // Function to print the complex number
    void print() { 
        cout << real << " + i" << imag << '\n'; 
    }
};

int main() {
    Complex c1(10, -5);
    cout << "Original Complex number: ";
    c1.print();

    Complex c2 = -c1; // Using unary '-' operator
    cout << "After applying unary '-': ";
    c2.print();

    return 0;
}
