#include <iostream>
#include <string>
#include <regex>
#include <cctype>
using namespace std;

bool email(const string &t)
{
    regex pattern("^[a-z]+@[a-z]+\\.[a-z]+$");
    if(regex_match(t, pattern))
    {
        return true;
    }
    return false;
}

int main(){

    string s;
    cin >> s;

    bool flag = email(s);
    if(flag)
    {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}