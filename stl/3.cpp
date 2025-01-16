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
        cin >> v[i];
    }

    map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
       freq[v[i]]++;
    }

    vector<pair<int, int> > freq2;

    for(vector<pair<int, int> >::iterator it = freq2.begin(); it != freq2.end(); it++)
    {
        freq2.push_back(-pair.second, pair.first);
    }

    sort(freq2.begin(), freq2.end());

    for(vector<pair<int, int> >::iterator it = freq2.begin(); it != freq2.end(); it++)
    {
        cout << pair.second << endl;
    }

    return 0;
}