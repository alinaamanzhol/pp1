#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){

    string text;
    getline(cin, text);
    stringstream ss(text);

    map<string, int> m;
    int cnt = 0;

    string word;

    while(ss >> word)
    {
        m[word]++;
    }

    vector<pair <string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);

    for(vector<pair<string, int> >::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}