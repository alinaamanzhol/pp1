#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int matrix[n][n];
    int right = n - 1;
    int left = 0;
    int bottom = n - 1;
    int top = 0;

    int num = 1;
    

    while(top <= bottom && left <= right)
    {
        for(int i = left; i <= right; i++)
        {
            matrix[top][i] = num++;
        }
        top++;

        for(int i = top; i <= bottom; i++)
        {
            matrix[i][right] = num++;

        }
        --right;

        for(int i = right; i >= left; i--)
        {
            matrix[bottom][i] = num++;
        }
        --bottom;

        for(int i = bottom; i >= top; i--)
        {
            matrix[i][left] = num++;
        }
        ++left;

    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    



    return 0;
}