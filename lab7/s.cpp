#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    map<string, set<int> > att;
    for(int i = 0; i < n; i++)
    {
        string name;
        int day;
        cin >> name >> day;

        att[name].insert(day);

    }

    map<string, set<int> >::iterator it;

    for(it = att.begin(); it != att.end(); it++)
    {
        string name = it -> first;
        set<int> days = it -> second;

        if(days.size() >= 3) cout << name << " +1" << endl;

        else cout << name << " NO BONUS" << endl;
    }



    return 0;
}