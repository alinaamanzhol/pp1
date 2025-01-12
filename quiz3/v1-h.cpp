#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    reverse(arr.begin(), arr.end());

    cout << arr.at(k - 1);






    return 0;
}