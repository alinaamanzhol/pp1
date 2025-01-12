#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
int main(){

    string s;
    cin >> s;
    string res;


    set<char> app;

    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if(app.find(ch) == app.end())
        {
            res += ch;
        }
        app.insert(ch);
    }

    cout << res;


    return 0;
}