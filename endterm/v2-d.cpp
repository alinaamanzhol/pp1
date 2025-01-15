#include <iostream>
#include <vector>
#include <string>
using namespace std;

void plague(vector<string> &v, int i, int j)
{
    if(i < 0 || i >= v.size() || j < 0 || j >= v.at(i).size() || v[i][j] == '0')
    {
        return;
    }

    v[i][j] = '0';

    plague(v, i - 1, j);
    plague(v, i + 1, j);
    plague(v, i, j - 1);
    plague(v, i, j + 1);
}

int countIslands(vector<string> &v)
{
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.at(i).size(); j++)
        {
            if(v[i][j] == "1")
            {
               cnt++;
               plague(v, i, j);
            }
        }
    }
    return cnt;
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<string> v;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int islands = countIslands(v);

    if(islands == 0) cout << "Nothing is left";
    else cout << islands;

    return 0;
}