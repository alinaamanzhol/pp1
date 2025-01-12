#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int statues[n];

    for(int i = 0; i < n; i++)
    {
        cin >> statues[i];
    }

    sort(statues, statues + n);

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        int gap = statues[i] - statues[i - 1];
        if(gap > 1) cnt += gap - 1;
    }

    cout << cnt;




    return 0;
}