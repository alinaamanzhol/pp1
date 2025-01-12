#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    int target;
    cin >> target;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    rotate(v.begin(), v.begin() + target, v.end());
    reverse(v.begin(), v.end());

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    

    return 0;
}