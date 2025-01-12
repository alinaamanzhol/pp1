#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int scores;

    while(cin >> scores && scores != 0)
    {
        v.push_back(scores);
    }

    int n = v.size();

    for(int i = 0; i < n / 2; i++)
    {
        int sum = v.at(i) + v.at(n - 1 - i);
        cout << sum << " ";
    }
    if(n % 2 != 0) cout << v.at(n / 2) << " ";



    return 0;
}