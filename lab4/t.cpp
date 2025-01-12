#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int arr[n][m];

    int c = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            
        }
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if(arr[i][j] == arr[i][j - 1] && arr[i][j] == arr[i - 1][j] && arr[i][j] == arr[i - 1][j - 1]) 
            {
                c = 1;
            }

            
        } 
        
    }

    if(c == 1) {
        cout << "NO";
    } else 
    {
        cout << "YES";
    }



    return 0;
}