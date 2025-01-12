#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;

        int cnt = 0;

        int max = 0;

        for(int j = l; j <= r; j++)
        {
            if(arr.at(j) > max)
            {
                max = arr.at(j);
                cnt++;
            }
        }
        cout << cnt << endl;

    }



    return 0;
}