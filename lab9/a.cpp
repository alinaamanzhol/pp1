#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<string, int>& a, const pair<string, int>& b)
{
    if(a.second != b.second)
    return a.second > b.second;
    return a.first < b.first;

}

int main(){

    map<string, int> words;

    string s;
    getline(cin, s);
    while(s.find(' ') != string::npos)
    {
        int pos = s.find(' ');
        string k = s.substr(0, pos);
        words[k]++;
        s = s.substr(pos + 1);
    }

    words[s]++;

    vector<pair <string, int> > wordCount(words.begin(), words.end());

    sort(wordCount.begin(), wordCount.end(), comp);

    for(vector<pair <string, int> >::iterator it = wordCount.begin(); it != wordCount.end(); it++)
    {
        cout << it->first << " " << ":" << " " << it->second << endl;
    }

    

    return 0;
}