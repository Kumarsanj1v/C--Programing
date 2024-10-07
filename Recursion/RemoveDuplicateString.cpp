#include <iostream>
#include <string>
using namespace std;
void removeDuplicate(string str,string ans,int i,bool map[26]) {
    if(i == str.size()) {
            cout << ans;
            return;
        }
    int index = int(str[i]) - 96;
    if (map[index] == false) {
        map[index] = true;
        ans = ans + str[i];
    }
    removeDuplicate(str,ans,i+1,map);
}
void removeDuplicate1(string str,string ans,bool map[26]) {
    if(str.size() == 0) {
            cout << ans;
            return;
        }
        int n = str.size();
    int index = int(str[n-1]) - 96;
    if (map[index] == false) {
        map[index] = true;
        ans = ans + str[n-1];
    }
    str = str.substr(0,n-1);
    removeDuplicate1(str,ans,map);
}


int main() {
    string str = "meraheroayan";
    
    string ans = "";
    bool map[26] = {false};
    removeDuplicate(str,ans,0,map);
    return 0;
}

