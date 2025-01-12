#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; i++)
    {
        string fruits;
        int price;
        cin >> fruits >> price;
        m[fruits]++;
    }

    vector<string> v;

    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if(it->second >= 2)
        {
            v.push_back(it->first);
        }
        
    }

    if(v.empty()) cout << "NO";
    else
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

    return 0;
}
