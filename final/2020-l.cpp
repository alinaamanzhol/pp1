#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    
    vector<int> v(n);

    unordered_map<int, int> m;

    for(int i = 0; i < n; i++)
    {
       cin >> v.at(i);
       m[v.at(i)]++;
    }

    int min = v.at(0);
    int pos = -1;

    for(int i = 0; i < n; i++)
    {
        if(m[v.at(i)] == 1 && v.at(i) < min)
        {
            min = v.at(i);
            pos = i + 1;
        }
    }

    if(pos == -1) cout << "ZA WARUDO";
    else cout << pos;


    return 0;
}