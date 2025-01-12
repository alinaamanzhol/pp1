#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){

    int cnt1;
    cin >> cnt1;

    map<string, int> bugs;

    for(int i = 0; i < cnt1; i++)
    {
        string bugname;
        string weakness;
        cin >> bugname >> weakness;
        bugs[weakness]++;
    }

    int cnt2;
    cin >> cnt2;

    map<string, int> hunter;

    for(int i = 0; i < cnt2; i++)
    {
        string hunter_name, ability;

        int catch_limit;
       
        cin >> hunter_name >> ability >> catch_limit;

        hunter[ability] += catch_limit;
    }

    int bugs_left = 0;

    for(map<string, int>::iterator it = bugs.begin(); it != bugs.end(); it++)
    {
        string weakness = it->first;
        int bug_count = it->second;

        int hunter_limit = hunter[weakness];
        if(bug_count > hunter_limit) bugs_left += bug_count - hunter_limit;
    }

    cout << "Bugs left: " << bugs_left;



    return 0;
}