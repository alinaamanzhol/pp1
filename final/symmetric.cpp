#include <iostream>
using namespace std;
int main(){

    int n, m;
    cin >> n >> m;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                cout << "NO";
                return 0;
            }
           
        }
    }

    cout << "YES";

    return 0;
}    