#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string colour;
    int *milege;

    Car(string name, string colour) {
        this->name = name;
        this->colour = colour;
        *milege = 12;
    }
    Car(Car &original) {
        this->name = original.name;
        this->colour = original.colour;
        milege = new int;
        *milege = *original.milege;
    }

};

int main() {
    Car c1("Tata Harrier EV", "Grey");
    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.colour << endl;
    cout << *c2.milege << endl;
    *c2.milege = 10;
    cout << *c1.milege << endl;
    cout << *c2.milege << endl;
    return 0;
}