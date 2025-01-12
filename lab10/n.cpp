#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

bool CompareTimes(Date& a, Date& b)
{
    if (a.year != b.year) return a.year < b.year; 
    if (a.month != b.month) return a.month < b.month; 
    return a.day < b.day; 
}

int main() {
    vector<Date> v; 

    while (true) {
        int day, month, year;
        cin >> day;

        if (day == 0) break; 

        cin >> month >> year;
        Date d = {year, month, day}; 
        v.push_back(d); 
    }

    
    sort(v.begin(), v.end(), CompareTimes);

    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].day << " " << v[i].month << " " << v[i].year << endl;
    }

    return 0;
}
