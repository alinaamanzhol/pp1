#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct str
{
    double sum = 0.0;
    int count = 0;
};

bool comp(const pair<string, double> &a, const pair<string, double> &b)
{
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}


int main(){

    int n;
    cin >> n;

    map<string, str> m;

    for(int i = 0; i < n; i++)
    {
        string name;
        double gpa;
        cin >> name >> gpa;
        m[name].sum += gpa;
        m[name].count++;
    }

    vector<pair <string, double> > v;

    for(map<string, str>::iterator it = m.begin(); it != m.end(); it++)
    {
        double overall = it->second.sum / it->second.count;
        v.emplace_back(it->first, overall);
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i).first << ": " << fixed << setprecision(3) << v.at(i).second << endl;
    }


    return 0;
}