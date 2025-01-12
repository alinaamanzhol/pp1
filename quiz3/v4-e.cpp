#include <iostream>
#include <unordered_set>
using namespace std;
int main(){

    string s;
    cin >> s;

    unordered_set<char> text;

    string result;

    for(int i = 0; i < s.size(); i++)
    {
        if(!text.count(s[i]))
        {
            result += s[i];
            text.insert(s[i]);
        }
        else
        {
            text.insert(s[i]);
        }
    }

    cout << result;

    return 0;
}