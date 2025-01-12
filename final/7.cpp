#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> balls(n);

    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    bool destroyed = true;
    int total = 0;

    while (destroyed) {
        destroyed = false;

        for (int i = 0; i < balls.size();) {
            int cnt = 1;

            for (int j = i + 1; j < balls.size() && balls[j] == balls[i]; j++) {
                cnt++;
            }

            if (cnt >= 3) 
            {
                total += cnt; 
                balls.erase(balls.begin() + i, balls.begin() + i + cnt); 
                destroyed = true; 
            } else 
            {
                i += cnt;
            }
        }
    }

    cout << total;

    return 0;
}