#include <iostream>
using namespace std;

void foo(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << endl;
    }
}

int main(){

    int n, m;
    cin >> n >> m;

    foo(n, m);

    return 0;
}