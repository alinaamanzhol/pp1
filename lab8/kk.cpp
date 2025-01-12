#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int foo(vector<int>& arr, int k)
{
    sort(arr.begin(), arr.end());

    reverse(arr.begin(), arr.end());
    int sum = 0;
    for(int i = 0; i < k; i++)
    {
        sum += arr.at(i);        
    }
    return sum;

}

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int k;
    cin >> k;

    cout << foo(arr, k) << endl;


    return 0;
}
