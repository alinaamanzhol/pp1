#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> par;
    for (int i = 0; i < n; i++) {
        string s, m;
        int k;
        cin >> s >> m >> k;
        string name = s + " " + m;  
        par[name] = k;  
    }

    
    int maxScore = -1;
    string winnerName;

  
    map<string, int>::iterator it;
    for (it = par.begin(); it != par.end(); ++it) {
        if (it->second > maxScore) {
            maxScore = it->second;
            winnerName = it->first;
        }
    }

    
    cout << winnerName << " " << maxScore << endl;

    return 0;
}
