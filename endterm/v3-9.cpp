#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){

    string s;
    cin >> s;

    string res = "";

    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            res += s[i];
        }
    }
    cout << res;

    return 0;
}