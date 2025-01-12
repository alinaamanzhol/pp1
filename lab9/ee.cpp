#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(vector<int> &a, vector<int> &b)
{
    ins sumA = accumulate(a.begin(), a.end(), 0);
    int sumB = accumulate(b.begin(), b.end(), 0);

    if(sumA != sumB) return sumA < sumB;
    if(a.size() != b.size()) return a.size < b.size();
    return a < b;
}

int main(){

    int count1;
    cin >> count1;

    vector<vector<int> > v;

    for(int i = 0; i < count1; i++)
    {
        int m;
        cin >> m;

        v.at(i).resize(m);

        for(int i = 0; i < m; i++)
        {
            cin >> v[i][j];
        }
    }

    sort(v.begin(), v.end(), comp)
    
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.at(ignore).size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}