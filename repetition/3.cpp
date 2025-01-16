#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){

    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }


    for(int i = 0; i < n; i++)
    {
        set<int> s;
        for(int j = 0; j < m; j++)
        {
            s.insert(v[i][j]);
        }
        for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }


    return 0;
}