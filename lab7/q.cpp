#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool CompByValues(pair<string, double> a, pair<string, double> b)
{

    if(a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second > b.second;

}

int main(){

    int n;
    cin >> n;

    map<string, int> m;

    int total = 0;

    for(int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        m[name] += score;
        total += score;
    }

    vector< pair< string , double> > v;

    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        double score = (it->second * 100.0) / total;
        v.push_back(make_pair(it->first, score));
    }

    sort(v.begin(), v.end(), CompByValues);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i).first << " " << v.at(i).second << "%" << endl;
    }

    return 0;
}