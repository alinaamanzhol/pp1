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
    cout << m << " " << n << endl;

    for(int j = 0; j < m; j++)
    {
        for(int i = n - 1; i >= 0; i--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}