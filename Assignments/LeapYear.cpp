#include <iostream>
using namespace std;

int main() {

    int year;

    cout << "Enter Year : ";
    cin >> year;

    if( year % 400 == 0) {
        cout << "it's a leap year : " << year << endl;
    } else if (year % 100 == 0){
                cout << "it's not a leap year : " << year << endl;
    }
    else if(year % 4 == 0) {
                cout << "it's a leap year : " << year << endl;
        } else
                cout << "it's not a leap year : " << year << endl;
    return 0;
}