#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){

    string s;
    cin >> s;
    set<char> v;

    for(int i = 0; i < n; i++)
    {
        v.insert(s[i]);
    }

    cout << v.size();

    return 0;
}