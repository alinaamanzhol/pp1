#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){

    string s;
    cin >> s;

    vector<int> v;

    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if(c != '+')
        {
            v.push_back(c - '0');
        }
    }

    sort(v.begin(), v.end());

    string res;

    for(int i = 0; i < v.size(); i++)
    {
        res += to_string(v[i]);

        if(i != v.size() - 1)
        {
            res += '+';
        }
    }

    cout << res;

    return 0;
}