#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<vector<int>> arr(n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            arr[i].push_back(t);
        }
    }

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        int k = arr[i][0];
        for(int j = 1; j < n; j++)
        {
            if(k < arr[i][j])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }


    return 0;
} 