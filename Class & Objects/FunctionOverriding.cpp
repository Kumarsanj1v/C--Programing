//operator overriding
#include <iostream>
using namespace std;

class Lion {
public:
    void show() {
        cout << "Parent Show function" << endl;
    }
};
class Baby : public Lion {
public:
    void show() {
        cout << "Child Show Function" << endl;
    }
};

int main() {
    Baby b1;
    b1.show();
    return 0;
}