#include <iostream>
#include <string>
using namespace std;

class User {
    int id;
    string password;

public:
    string username;
    void setPassword(string password) {
        this->password = password;
    }
    string getPassword() {
        return password;
    }
    User(int id, string username, string password) {
        this->id = id;
        this->username = username;
        setPassword(password);
    }
    int getid() {
        return id;
    }

};

int main() {
    User u1(6012,"kumarsanjiv","welcome@12");
    cout << u1.getPassword() << endl;
    cout <<u1.username << endl;
    cout << u1.getid() << endl;
    return 0;
}