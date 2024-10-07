#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    int parenthesis = 0;
    int squareBraket = 0;
    int curlyBraces = 0;
    for(int i= 0; i<s.length(); i++) {
        if(s[i] == '(')
            parenthesis++;
            else if(s[i] == ')')
            parenthesis--;
            else if(s[i] == '[')
            squareBraket++;
            else if(s[i] ==']')
            squareBraket--;
            else if(s[i] =='{')
            curlyBraces++;
            else
            curlyBraces--;
        if(parenthesis < 0 || squareBraket < 0 || curlyBraces <0 )
        return false;
        if(i>0){
            if( s[i-1]=='[' && s[i] ==')' || s[i-1]=='[' && s[i] =='}' )
               return false;
        if( s[i-1]=='{' && s[i] ==')' || s[i-1]=='{' && s[i] ==']' )
               return false;
        if( s[i-1]=='(' && s[i] ==']' || s[i-1]=='(' && s[i] =='}' )
               return false;
        }
    }
    for(int i =0; i<(s.length())/2; i++) {
        for(int j=(s.length()-1);j>=(s.length())/2;j--) {
            if(s[i] == '(' && s[j] == ')') {
                if((j-i)%2 != 0)
                return false;
            }
            if(s[i] == '[' && s[j] == ']') {
                if((j-i)%2 != 0)
                return false;
            }
            if(s[i] == '{' && s[j] == '}') {
                if((j-i)%2 != 0)
                return false;
            }
        }
    }
        
        

    }
    if(parenthesis == 0 && squareBraket == 0 && curlyBraces == 0)
    return true;
    else 
    return false;
}

int main() {
    string s = "[([]])";
    bool right = isValid(s);
    cout << right << endl;
    return 0;
}