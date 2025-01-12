#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = 'X';
        }

    }

    int x = 0, y = 0;

    arr[x][y] = '*';

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'U') x--;
        else if(s[i] == 'R') y++;
        else if(s[i] == 'D') x++;
        else if(s[i] == 'L') y--;

        if(x >= 0 && x < n && y >= 0 && y < n)
        {
            arr[x][y] = '*';
        }
    }

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cout << arr[i][j] << " ";
        }

        cout << endl;

    }
    return 0;
}




