#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n, m;
    cin >> n;

    set<string> firstacc;

    for(int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        firstacc.insert(name);
    }

    cin >> m;

    set<string> secondacc;
    for(int i = 0; i < m; i++)
    {
        string name;
        cin >> name;
        secondacc.insert(name);
    }
    
    vector<string> difference;

    for (set<string>::const_iterator it = firstacc.begin(); it != firstacc.end(); it++) {
        if (secondacc.find(*it) == secondacc.end()) {
            difference.push_back(*it); 
        }
    }

    
    for (set<string>::const_iterator it = secondacc.begin(); it != secondacc.end(); it++) {
        if (firstacc.find(*it) == firstacc.end()) {
            difference.push_back(*it); 
        }
    }

    sort(difference.begin(), difference.end());

    for (vector<string>::const_iterator it = difference.begin(); it != difference.end(); it++) {
        cout << *it << endl; 
    }

    return 0;
}