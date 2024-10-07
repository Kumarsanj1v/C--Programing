#include <iostream>
using namespace std;

void hanoiTower(int n, char source, char target, char helper) {
    if (n == 1) {
        cout << "Move Disc 1 from Tower " << source <<" to Tower "<< target << endl;
        return ;
    }
    hanoiTower(n-1,source,helper,target);
    cout << "Move disc "<< n << " from Tower "<< source << " to Tower " << target << endl;
    hanoiTower(n-1,helper,target,source);

}


int main() {

    int n = 2;
    hanoiTower(n,'S', 'T', 'H');
    return 0;
}