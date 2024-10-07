#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string colour;

    Car(string name, string colour) {
        this->name = name;
        this->colour = colour;
    }
    Car(const Car &original) {
        this->name = original.name;
        this->colour = original.colour;
        cout << "custom copy constructor" << endl;
    }

};

int main() {
    Car c1("Tata Harrier EV", "Grey");
    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.colour << endl;
    return 0;
}