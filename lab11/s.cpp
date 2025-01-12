#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string foo(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

int main(){

    string s;
    cin >> s;
    cout << foo(s);

    return 0;
}