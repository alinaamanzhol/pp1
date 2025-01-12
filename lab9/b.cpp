#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<string, int> students;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        students[s] = x;
    }

    vector<pair <string, int> > marks(students.begin(), students.end());
    sort(marks.begin(), marks.end());

    for(vector<pair <string, int> >::iterator it = marks.begin(); it != marks.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}