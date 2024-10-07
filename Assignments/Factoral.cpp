# include <iostream>
using namespace std;

int main() {

    int num;
    int factoral;

    cout << "Enter a number : ";
    cin >> num;

    while(num >= 1) {
        factoral = factoral * num;
        num--;
    }

    cout << " Factoral of entered number is : "<<factoral<<endl;



    return 0;
}