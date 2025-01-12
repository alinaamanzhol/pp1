#include <iostream>
#include <map>
using namespace std;
int main(){

    string s;
    cin >> s;
    map<char, int> m;

    for(int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    for(map<char, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << it->second;
    }

    return 0;
}