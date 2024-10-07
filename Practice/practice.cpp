#include <iostream>
using namespace std;

void printArray(int array[], int num) {

    for(int i=0; i <num; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void changeArray(int array[], int num, int i) {

    if (i == num) {
        printArray(array,num);
        return;
    }
    array[i] = i + 1;
    changeArray(array,num,i+1);
    array[i] = i - 2; // backtracking
}

int main() {    

    int array[5] = {0};
    int num = 5;
    changeArray(array, num, 0);
    printArray(array,num);

    return 0;
}