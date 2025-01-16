#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isSameType(char a, char b) {

    if (isupper(a) && isupper(b)) return true; 
    if (islower(a) && islower(b)) return true;  
    if (isdigit(a) && isdigit(b)) return true; 
    if (!isalnum(a) && !isalnum(b)) return true;  
    return false;
}

int main() 
{
    string input;
    cin >> input;

    int count = 0;
    int sequenceLength = 1;  

    for (int i = 1; i < input.size(); i++) {
        if (isSameType(input[i], input[i - 1])) {
            sequenceLength++;
        } else {
            if (sequenceLength >= 2) {
                count++;
            }
            sequenceLength = 1;  
        }
    }


    

    if (sequenceLength >= 2) {
        count++;
    }

    cout << count << endl;

    return 0;
}