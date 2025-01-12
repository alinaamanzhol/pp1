#include <iostream>

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    
    int arr[n][m];

    
    int cnt = 0;

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] < 0) cnt++;
        }
    }
    cout << cnt << endl;

    








    return 0;
}