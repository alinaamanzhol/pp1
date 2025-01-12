#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for(int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    vector<int> res;

    
    for(int i = 0; i < n; i++)
    {
        res.push_back(v1[i]);
    }

    for(int i = 0; i < m; i++)
    {
        res.push_back(v2[i]);
    }
    
    sort(res.begin(), res.end());
    vector<int>::iterator mm = unique(res.begin(), res.end());
    res.erase(mm, res.end());

    for(int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << " ";
    }

    return 0;
}