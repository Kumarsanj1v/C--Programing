#include <iostream>
#define PI 3.14

using namespace std;

int main() {

    float radius, area;

    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    area = PI * radius * radius;

    cout<<"Area of the circle is "<<area<<endl;

    return 0;
}