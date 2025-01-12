#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int cnt = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) == k) cnt++;
    }

    cout << cnt;


    return 0;
}