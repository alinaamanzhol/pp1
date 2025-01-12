#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> n1;
   

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        n1.push_back(a);
    }
    int m;
    cin >> m;
    vector<int> m1;

    for(int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        m1.push_back(k);
    }

    vector<int> res(n + m);

    merge(n1.begin(), n1.end(), m1.begin(), m1.end(), res.begin());

    sort(res.begin(), res.end());

    for(int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << " ";
    }

    return 0;
}