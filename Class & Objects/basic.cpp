#include <iostream>
#include <string>
using namespace std;


class Student {
public:
    string name;
    int id;

    float cgpa;
    float getPercetage() {
        return (cgpa*10);
    }
  
};

int main() {
    Student s1;
    s1.name = "Sanjeev Kumar";
    s1.id = 6012;
    s1.cgpa = 8.7;
    cout << s1.name << endl;
    cout << s1.id << endl;
    cout << s1.cgpa << endl;
    cout << (s1.getPercetage()) << endl;


    return 0;
}