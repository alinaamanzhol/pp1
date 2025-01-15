#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <sstream>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    map<int, string> m;
    
    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        int k = word.size();
        m[k] = word;
    }

    map<int, string>::iterator it = m.end();
    it--;

    cout << it->first << endl;
    return 0;
}