#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<string> available(n);

    for(int i = 0; i < n; i++)
    {
        cin >> available.at(i);
    }

    int m;
    cin >> m;
    vector<pair<string, string> > v;

    for(int i = 0; i < m; i++)
    {
        string one, two;
        cin >> one >> two;
        v.push_back(make_pair(one, two));
    }

    string target;
    cin >> target;

    vector<string> res;
    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i).first == target)
        {
            res.push_back(v.at(i).second);
        }
        else if(v.at(i).second == target)
        {
            res.push_back(v.at(i).first);
        }
    }

    sort(res.begin(), res.end());

    cout << res.size() << endl;

    for(int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << " ";
    }

    return 0;
}