#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    sort(v.begin(), v.end());


    map<int, int> m;

    for(int i = 0; i < v.size(); i++)
    {
        m[v.at(i)]++;
    }

    int maxFreq = v.at(0);
    int high = m[maxFreq];
    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if(it->second > high)
        {
            maxFreq = it->first;
            high = it->second;
        }
    }
    cout << maxFreq;
    return 0;
}