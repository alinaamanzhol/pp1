#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
int main(){

    string s;
    getline(cin, s);

    string word;
    stringstream ss(s);

    while(ss >> word)
    {
        for(int i = 0; i < word.size(); i++)
        {
            if(i == 0)
            {
                word[i] = toupper(word[i]);
            }
            else
            {
                word[i] = tolower(word[i]);
            }
        }
    }
    cout << word << " ";

    return 0;
}