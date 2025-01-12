#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<string, int> foo;

    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if(foo.find(s) == foo.end()) foo[s] = i;
    }

    for(map<string, int>::iterator it = foo.begin(); it != foo.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}