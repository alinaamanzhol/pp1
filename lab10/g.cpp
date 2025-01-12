#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
using namespace std;
int main(){

    int count;
    cin >> count;

    map<string, int> m;
    set<string> s;
    vector<string> v;
    for(int i = 0; i < count; i++)
    {
        string name;
        cin >> name;
        m[name]++;
        if(m[name] == 2)
        {
            if(!s.count(name))
            {
                s.insert(name);
                v.push_back(name);
            }
        }
    }

    if(s.empty()) cout << "Understandable, have a great day";
    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v.at(i) << endl;
        }
    }


    return 0;
}