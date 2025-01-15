#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    string s, t;
    cin >> s >> t;

    vector<int> position;

    int pos = s.find(t);

    while(pos != string::npos)
    {
        position.push_back(pos);
        pos = s.find(t, pos + 1);
    }

    for(int i = 0; i < position.size(); i++)
    {
        cout << position.at(i) << " ";
    }
    return 0;
}