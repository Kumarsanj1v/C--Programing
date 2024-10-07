
#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void show(int num) {
        cout << "int : " << num << endl;
    }
    void show(string str) {
        cout << "string : " << str << endl;

    }
};

int main() {
    Print p1;
    p1.show(6012);
    p1.show("Sanjeev Kumar");
    return 0;
}