#include <iostream>
#include <string>
#include <cstring>

using namespace std;


bool isAnagram(string s, string t) {
    int array[26] = {0};
    for(int i=0; i<s.length(); i++) {
        array[s[i]- 'a']++; 
    }
    
    for(int i=0; i<s.length(); i++) {
        array[t[i]- 'a']--; 
        if(array[t[i] - 'a'] < 0 ) {
            cout<<" not ";
            return false;
        }
    }

    for(int i =0; i<26; i++) {
        if(array[i] != 0)
        return false;
    }
    return true;
}


int main() {
    string s = "ac";
    string t = "bb";
    bool result = isAnagram(s,t);
    cout << result << endl;
    
    return 0;
}