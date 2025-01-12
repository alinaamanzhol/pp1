#include <iostream>

#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> s;

    for(int i = 0; i < n - 1; i++)
    {
        int sum = arr[i] + arr[i + 1];
        s.insert(sum);
    }

    cout << s.size();


    return 0;
}