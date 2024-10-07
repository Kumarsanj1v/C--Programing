#include <iostream>
using namespace std;


class Complex {
public:
    int real;
    int imaginary;
    Complex(int rl, int img) {
        real = rl;
        imaginary = img;
    }
    Complex operator - (Complex &obj2) {
        int resultReal = this->real - obj2.real;
        int resultImaginary = this->imaginary - obj2.imaginary;
        Complex c(resultReal,resultImaginary);
        return c;
    }
};

int main() {
    Complex c1(12,13);
    Complex c2(14,15);

    cout << c1.real <<" + " << c1.imaginary << "i" << endl;
    cout << c2.real <<" + " << c2.imaginary << "i" << endl;
    Complex c3 = c1 - c2;
    cout << c3.real <<" + " << c3.imaginary << "i" << endl;


    return 0;
}