#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int start, end;
    cin >> start >> end;

    reverse(v.begin() + start, v.begin() + end + 1);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}