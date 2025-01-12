#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    string t;

    while(ss >> word)
    {
        reverse(word.begin(), word.end());
        for(int i = 0; i < word.size(); i++)
        {
            if(i = 0)
            {
                word[i] = toupper(word[i]);
            }
            else
            {
                word[i] = tolower(word[i]);
            }
        }
        t = word;
        reverse(t.begin(), t.end());
        cout << t << " ";
    }

    return 0;
}