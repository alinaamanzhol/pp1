#include <iostream>

#include <cmath>

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

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int a = sqrt(arr[i][j]);
            if(a * a == arr[i][j])
            {
                arr[i][j] = a;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }






    return 0;
}