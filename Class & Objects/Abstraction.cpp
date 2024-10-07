#include <iostream>
using namespace std;

class Shape {
public:
    virtual void shape() = 0; //pure vistual function.
};

class Circle : public Shape {
public:
    void shape() {
        cout << "Draw circle \n";
    }
};
class Square : public Shape {
public:
    void shape() {
        cout << "Draw Square \n";
    }
};

int main() {
    Circle c1;
    Square s1;
    c1.shape();
    s1.shape();

    return 0;
}