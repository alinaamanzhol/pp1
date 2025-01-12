#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> nums;
    nums = v;

    reverse(nums.begin(), nums.end());

    for(int i = 0; i < n; i++)
    {
        if(v[i] == nums[i])
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << "Instead of " << v[i] << " here was " << nums[i] << endl;
        }
    }

    return 0;
}