#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < n; i++)
    {
        if (arr.at(i) % 2 == 0)
        {
            even.push_back(arr.at(i));
        }
        else{
            odd.push_back(arr.at(i));
        }
    }

    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());

    sort(odd.begin(), odd.end());

    for(int i = 0; i < even.size(); i++)
    {
        cout << even.at(i) << " ";
    }

    for(int i = 0; i < odd.size(); i++)
    {
        cout << odd.at(i) << " ";
    }

    return 0;
}