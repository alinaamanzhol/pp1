#include <iostream>
#include <string>
using namespace std;
int main(){

    string s;
    cin >> s;

    string result = "";

    for(int i = 0; i < s.size(); i++)
    {
        char c = 'z' - s[i] + 'a';
        result += c;
    }
    cout << result;

    return 0;
}