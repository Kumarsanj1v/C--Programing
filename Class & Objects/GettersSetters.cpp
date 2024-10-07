#include <iostream>
#include <string>
using namespace std;


class Student {
    string name;
    int id;
public:
    float cgpa;
    float getPercetage() {
        return (cgpa*10);
    }
    //setters
    void setName(string nameValue) {
        name = nameValue;
    }
    void setId(int idValue) {
        id = idValue;
    }

    //getters
    string getName() {
        return name;
    }
    int getid() {
        return id;
    }
};

int main() {
    Student s1;
    s1.setName("Sanjeev Kumar");
    s1.setId(6012);
    cout << (s1.getName()) << endl;
    cout << (s1.getid()) << endl;
    cout << (s1.getPercetage()) << endl;

    return 0;
}