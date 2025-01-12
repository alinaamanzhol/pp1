#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        word[0] = toupper(word[0]);
        
    }

    return 0;
}