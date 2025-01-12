#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<string, double> &a, pair<string, double> &b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main(){

    map<string, double> gradesMap; 

    gradesMap["A+"] = 4.00;
    gradesMap["A"] = 3.75;
    gradesMap["B+"] = 3.50;
    gradesMap["B"] = 3.00;
    gradesMap["C+"] = 2.50;
    gradesMap["C"] = 2.00;
    gradesMap["D+"] = 1.50;
    gradesMap["D"] = 1.00;
    gradesMap["F"] = 0;

    int n;
    cin >> n;

    vector<pair<string, double> > v;

    for(int i = 0; i < n; i++)
    {
        string surname, name;
        cin >> surname >> name;
        int numberOfSubjects;
        cin >> numberOfSubjects;

        double TopSum = 0.0;
        double LowSum = 0.0;

        for(int j = 0; j < numberOfSubjects; j++)
        {
            string grade;
            int credit;
            cin >> grade >> credit;
            TopSum += gradesMap[grade] * credit;
            LowSum += credit;
        }

        double gpa = TopSum / LowSum;
        v.push_back(make_pair(surname + " " + name, gpa));
    }

    sort(v.begin(), v.end(), comp);

    cout << fixed << setprecision(3);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i).first << " " << v.at(i).second << endl;
    }

    
    return 0;
}