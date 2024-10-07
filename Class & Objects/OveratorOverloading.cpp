#include <iostream>
using namespace std;

class Complex {
public:   
    int real;
    int img;

    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void show() {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator +(Complex &c2) {
        int resultR = this->real + c2.real;
        int resultI = this->img + c2.img;
        Complex c3(resultR,resultI);
        return c3;
    }
};

int main() {
    Complex c1(3,6);
    Complex c2(5,7);
    Complex c3 = c1 + c2;

    c1.show();
    c2.show();
    c3.show();
    return 0;
}