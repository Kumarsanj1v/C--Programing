#include <iostream>
#include <string>
using namespace std;
void print(int array[26]) {
    for(int i =0; i<26; i++) {
        cout << array[i] <<" ";
    }
    cout << endl;
}

bool isClose(string word1, string word2) {
    if(word1.length() != word2.length()) {
        return false;
    }
    int array[26] = {0};
    int array1[26] = {0};
    for(int i=0; i<word1.length(); i++) {
        array[word1[i]-'a']++;
    }
    cout<<"Array 1: ";
    print(array);
     for(int i=0; i<word2.length(); i++) {
        array1[word2[i]-'a']++;
    }
    cout<<"Array 2: ";
    print(array1);
    for(int i =0; i<26; i++) {
        if (array[i] > 0 && array1[i] == 0)
        return false;
    }
    for(int i=0; i<26;i++)  {
        for (int j= 0;j<26; j++) {
            if(array[i] == array1[j]) {
                array1[j] = 0;
                break;
            }
        }
    }
    cout<<endl;
    cout<<"Array 2: ";
    print(array1);
    int counter = 0;
    for(int i = 0; i<26; i++) {
        if(array1[i] != 0)
        counter++;
    }
   if(counter > 0)
   return false;
   else
   return true;
}
int main() {
    string str = "uau";
    string str1 = "ssx";
    
    bool result = isClose(str,str1);

    cout << result << endl;

    return 0;
}