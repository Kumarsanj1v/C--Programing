#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    string colour;

public:
    Car(string name, string colour) {
        this->name = name;
        this->colour = colour;
        cout << "Constructor with parameters" << endl;
    }
    
    Car() {
        cout << "Constructor without parameters" << endl;
    }

    string getName() {
        return name;
    }
    string getColour() {
        return colour;
    }

};

int main() {
    Car c1("Tata Curve EV", "White");
    Car c2;

    
    cout << c1.getName() << endl;
    cout << c1.getColour() << endl;

    return 0;
}