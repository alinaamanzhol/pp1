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
        cin >> v.at(i);
    }

    int h;
    cin >> h;

    int pos = 0;
    int cnt = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) > h)
        {
            pos = i + 2;

        }
        else if (v.at(i) == h)
        {
            for(int j = i; j < v.size(); j++)
            {
                if(v.at(i) != v.at(i + 1)) break;
                cnt++;
            }
        }
        
    }

    cout << cnt;

    return 0;
}