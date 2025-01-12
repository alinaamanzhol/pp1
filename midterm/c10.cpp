#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Convert all uppercase letters to lowercase
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = char(int(s[i]) + 32);
        }
    }

    string n = "";

    // Extract only lowercase letters
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') n += s[i];
    }

    // Sort the string using Bubble Sort (can be replaced with std::sort)
    for (int i = 0; i < n.size(); i++) {
        for (int j = 0; j < n.size() - i - 1; j++) {
            if (n[j] > n[j + 1]) {
                char k = n[j];
                n[j] = n[j + 1];
                n[j + 1] = k;
            }
        }
    }

    /*// Count and print the frequency of each character using a for loop
    for (int i = 0; i < n.size(); ) {
        char currentChar = n[i];
        int cnt = 0;

        // Count how many times the current character appears
        for (int i=0; i < n.size() && n[i] == currentChar; i++) {
            cnt++;
        }

        // Print the result for the current character
        cout << currentChar << " " << cnt << endl;
    }*/


   

    return 0;
}
