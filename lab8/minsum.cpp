#include <iostream>
#include <set>
#include <algorithm>
#include<vector>

using namespace std;

int foo(set<int> arr, int k)
{
   
    int sum = 0;
    vector<int> v(arr.begin(), arr.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < k; i++)
    {
        sum += v.at(i);
    }
   
    return sum;

}

int main(){
    int n;
    cin >> n;

    set<int> arr;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.insert(a);
    }

    int k;
    cin >> k;

    cout << foo(arr, k) << endl;

    return 0;
}
