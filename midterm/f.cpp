#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int x;
    cin >> x;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    

    
    for(int i = 0; i < n; i++)
    {
        
    bool num = false;
        for(int j = 0; j < m; j++)
        {
            if(x == arr[i][j]) 
            {
                num = true;
            }
           
        }
        if(num)
        {
            cnt++;
        }
    }

    cout << cnt << endl;





    return 0;
}
