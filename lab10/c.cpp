#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){

    int count;
    cin >> count;

    map<string, string> m;

    for(int i = 0; i < count; i++)
    {
        string word, translation;
        cin >> word >> translation;
        m[word] = translation;
    }

    string wordToDel;
    cin >> wordToDel;

    m.erase(wordToDel);

    for(map<string, string>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}