#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, vector<int> > studentgpa;

    for(int i = 0; i < n; i++) {
        string name;
        int gpa;
        cin >> name >> gpa;
        studentgpa[name].push_back(gpa);
    }

    vector<string> students;

    for(map<string, vector<int> >::iterator it = studentgpa.begin(); it != studentgpa.end(); it++) {
        students.push_back(it->first);
    }

    for(int i = 0; i < students.size(); i++) {
        vector<int> gpas = studentgpa[students[i]];

        double totalgpa = 0;

        for(int j = 0; j < gpas.size(); j++) {
            totalgpa += gpas[j]; 
        }

        double overall = totalgpa / gpas.size(); 
        cout << students[i] << ": " << fixed << setprecision(3) << overall << endl;
    }

    return 0;
}
