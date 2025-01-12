#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<string> names;
    
    vector<int> marks;

    for(int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        names.push_back(s);
        marks.push_back(x);
    }

    sort(names.begin(), names.end());
    sort(marks.begin(), marks.end());

    for(int i = 0; i < names.size(); i++)
    {
        cout << names[i] << " " << marks[i] << endl;
    }


    return 0;
}
