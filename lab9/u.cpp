#include <iostream>
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

    vector<int> res = v;

    sort(res.begin(), res.end());

    if(res == v)
    {
        cout << "YES";
    }
    else
    {
    int cnt = 0;

    for(int i = 0; i < res.size(); i++)
    {
        if(res[i] != v[i])
        {
            cnt++;
        }
    }

    if(cnt == 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    }

    return 0;
}