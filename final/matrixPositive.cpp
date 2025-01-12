#include <iostream>
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

    int max = 0;
    int pos = 0;

    bool equal = true;

     for(int i = 0; i < n; i++)
    { 
        int cnt = 0;
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] > 0) cnt++;
        }

        if(max < cnt)
        {
            max = cnt;
            pos = i;
            equal = false;
        }
        else if(cnt < max)
        {
            equal = false;
        }
    }

    if(equal)
    {
        cout << "Numbers are equal";
    }
    else cout << pos;
   



    return 0;
}