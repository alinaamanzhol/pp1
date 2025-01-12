#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> res;
    int max_pos = 1;

    for(int i = 0; i < n; i++)
    {
        int t = 0;
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] > 0)
            {
                t++;
            }

        }
        res.push_back(t);
    }

    int ch = res[0];
    bool num = true;

    for(int i = 0; i < res.size(); i++)
    {
        if(ch != res[i])
        {
            num = false;
            break;
        }
    }

    if(num)
    {
        cout << "Numbers are equal";
    }

    else
    {
        int max = 0;

        for(int i = 0; i < res.size(); i++)
        {
            if(res[i] > max)
            {
                max = res[i];
                max_pos = i + 1;
            }
        }
        cout << max_pos;
    }



    return 0;
}