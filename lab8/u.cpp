#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    set<string> available;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        available.insert(s);
    }

    vector<pair <string, string> > v;

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        string one, two;
        cin >> one >> two;

        v.push_back(make_pair(one, two));

    }

    string target;
    cin >> target;
    
    set<string> result;

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i).first == target && available.count(v.at(i).second)) result.insert(v.at(i).second);
        else if(v.at(i).second == target && available.count(v.at(i).first)) result.insert(v.at(i).first);
    }

    cout << result.size() << endl;

    for(set<string>::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }



    return 0;
}