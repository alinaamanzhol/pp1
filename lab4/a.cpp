#include <iostream>

using namespace std;




int main(){
    int n, m; 
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n*m; i++) {
        cin >> a[i][j];
    }
    int i = 0;
    j = n * m - 1;
    int l = 0;
    while (i < j) {
        cout << a[j] << " ";
        j--;
        l++;
        if (l % m == 0) cout << endl;
        cout << a[i] << " ";
        i++;
        l++;
        if (l % m == 0) cout << endl;
    }
    if (n * m % 2) cout << a[i] << " ";

    return 0;
}