#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
int main(){

    int count;
    cin >> count;
    
    map<string, int> attempt;
    for(int i = 0; i < count; i++)
    {
        string login, password;
        cin >> login >> password;
        attempt[login]++;
    }

    for(map<string, int>::iterator it = attempt.begin(); it != attempt.end(); it++)
    {
       string login = it->first;
       int freq = it->second;

        if(freq > 3)
    {
        cout << it->first << " " << "is hacked" << endl;
    }
         else cout << it->first << " " << "is valid" << endl;
    }
    return 0;
}