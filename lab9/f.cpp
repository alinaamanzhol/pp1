#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    int count;
    cin >> count;

    map<string, double> students;

    int total = 0;

    for(int i = 0; i < count; i++)
    {
        int m;
        cin >> m;

        for(int j = 0; j < m; j++)
        {
        string cities;
        cin >> cities;
        double places;
        cin >> places;
        students[cities] += places;
        total += places;
        }
    }

    vector<pair <string, double> > v(students.begin(), students.end());
    sort(v.begin(), v.end(), [](const pair<string, double>& a, const pair<string, double>& b){if(a.first != b.first) return a.first > b.first;})

    for(map<string, double>::iterator it = students.begin(); it != students.end(); it++)
    {
        double pop = it->second;
        string cities = it->first;
        pop = pop / total * 100.0;

        students[cities] = pop;
    }

    for(map<string, double>::iterator it = students.begin(); it != students.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }



    return 0;
}