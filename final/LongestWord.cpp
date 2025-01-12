#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
int main(){

    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    string max = "";
    while(ss >> word)
    {
        if(word.size() > max.size())
        {
            max = word;
        }
    }

    cout << max.size() << endl;
    cout << max << endl;



    return 0;
}