#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){

    string s;

    map<string, int> freq;

    while(cin >> s)
    {
        cout << freq[s] << " ";
        freq[s]++;
    }

    return 0;
}