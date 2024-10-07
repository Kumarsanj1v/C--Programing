#include <iostream>
#include <string>
using namespace std;

// void checkVowels(string str) {
//     int count = 0;
//     for(int i = 0; i<str.length(); i++) {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] =='i' || str[i] == 'o' || str[i] == 'u') {
//             count++;
//         }
//     }
//     cout << count << endl;
// }

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin,str);

//     checkVowels(str);
//     return 0;
// }

bool isSame(string str1, string str2) {
    if(str1 == str2) {
        cout << " strings are already equal ";
        return true;
    }
    int first,second;
    int counter = 0;
    for(int i=0; i<str1.length(); i++) {
        if(str1[i] != str2[i]) {
            if(counter>2){
                return false;
            }
            else if(counter == 0) {
                first = i;
                counter++;
            }
            else {
                second = i;
                counter++;
            }
        }
    }
    swap(str1[first],str1[second]);
    if(str1 == str2)
    return true;
    else
    return false;
}

int main() {
    string str1 = "before";
    string str2 = "bofere";

    bool result = isSame(str1,str2);
    cout<<result<<endl;
    return 0;
}