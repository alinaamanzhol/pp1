#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<string> v1(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v1.at(i);
    }

    int m;
    cin >> m;

    vector<string> v2(m);

    for(int i = 0; i < m; i++)
    {
        cin >> v2.at(i);
    }

    set<string> ss;

    for(int i = 0; i < v1.size(); i++)
    {
        ss.insert(v1.at(i));
    }

    for(int i = 0; i < v2.size(); i++)
    {
        ss.insert(v2.at(i));
    }

    for(set<string>::iterator it = ss.begin(); it != ss.end(); it++)
    {
        cout << *it << " ";
    }


    return 0;
}