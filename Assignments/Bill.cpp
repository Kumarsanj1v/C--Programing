#include <iostream>
using namespace std;

int main() {

    float pencil, pen, eraser;
    
    cout<<"Enter Pencil: ";
    cin>>pencil;
    cout<<"Enter pen: ";
    cin>>pen;
    cout<<"Enter eraser: ";
    cin>>eraser;

    float totalBill = (pencil+pen+eraser)/3;
    float totalBillGST = totalBill + (0.18 * totalBill);

    cout<<"Total Bill: "<<totalBill<<endl;
    cout<<"Total Bill(With GST): "<<totalBillGST<<endl;


    return 0;
}   

