#include <iostream>
#include <algorithm>

using namespace std;

void foo(int a[], int b[], int n)
{
    int cnt = 0;
    sort(a, a + n);
    sort(b, b + n);

    int lastfound = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = lastfound; j < n; j++)
        {
            if(a[i] == b[j])
            {
                lastfound = j + 1;
                cnt++;
                break;
            }
        } 
    }
    cout << cnt << endl;
    

}

int main(){
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    foo(a, b, n);
    return 0;
}