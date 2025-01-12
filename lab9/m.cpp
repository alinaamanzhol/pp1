#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    int size = (n * (n + 1)) / 2;

    vector<int> num(size);

    int start = 0;
    for(int i = 1; i <= n; i++)
    {
        fill(num.begin() + start, num.begin() + start + i, i);
        start += i;
    }

    for(int i = 0; i < num.size(); i++)
    {
        cout << num.at(i) << " ";
    }

    return 0;
}