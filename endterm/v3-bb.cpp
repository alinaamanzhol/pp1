#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;
int main(){

    string s;
    getline(cin, s);
    stringstream ss(s);
    string text;

    int max = 0;

    while(ss >> text)
    {
        
        if(text.size() > max)
        {
            max = text.size();
        }
       
    }
    cout << max;

    return 0;
}