#include <iostream>
#include <vector>
#include <string>

using namespace std;

string processing(int num) {
        string str1[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        string str2[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        string str3[] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        string result = "";

        if(num > 99) {
            result += str1[num / 100] + " Hundred ";
        }

        num %= 100;

        if(num >= 20) {
            result += str3[num / 10] + " ";
            num %= 10;
        } else if(num >= 10) {
            result += str2[num - 10] + " ";
            return result;
        }

        if(num > 0) {
            result += str1[num] + " ";
        }

        return result;
    }

    string numberToWords(int num) {
        string strBig[] = {"Thousand", "Million","Billion"};
        int counter = 0;
        vector<string> word;
        if(num == 0) {
            return "Zero";
        }
        string result = "";

        while(num > 0) {
            int currentNum = num % 1000;
            if(currentNum != 0) {
                result = processing(currentNum);
                if(counter > 0) {
                    result += strBig[counter - 1] + " ";
                }
                word.insert(word.begin(), result);
            }
            num /= 1000;
            counter++;
        }

        string answer;
        for(const auto& str: word) {
            answer += str;
        }

        // Trim any trailing spaces
        if (!answer.empty() && answer.back() == ' ') {
            answer.pop_back();
        }

        return answer;
}

int main() {
    cout<<"----------------------------------------------"<< endl;
   string str =  numToWord(1000000020);
   cout << str << endl;
    cout<<"----------------------------------------------"<< endl;

    return 0;
}