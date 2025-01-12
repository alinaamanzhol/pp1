#include <iostream>
#include <map>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

struct studentData
{
    double overallgpa = 0.0;
    int count = 0;
};

int main(){

    int count;
    cin >> count;

    map<string, studentData> m;

    for(int i = 0; i < count; i++)
    {
        string name;
        cin >> name;
        double gpa;
        cin >> gpa;
        m[name].count++;
        m[name].overallgpa += gpa;
    }

    for(map<string, studentData>::iterator it = m.begin(); it != m.end(); it++)
    {
        double av = it->second.overallgpa / it->second.count;
        cout << it->first << " " << fixed << setprecision(6) << av << endl;
        
    }

    return 0;
}