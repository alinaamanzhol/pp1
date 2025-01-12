#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){

    string s, t;
    cin >> s >> t;

    if(s.size != t.size()) 
    { 
        cout << "NO";
        return 0;
    }

    map<char, int> m1, m2;

    for(int i = 0; i < s.size(); i++)
    {
        m1[s[i]]++;
    }

    for(int i = 0; i < t.size(); i++)
    {
        m2[t[i]]++;
    }

    if(m1 == m2)
    {
        cout << "YES";
    }
    else cout << "NO";



    return 0;
}