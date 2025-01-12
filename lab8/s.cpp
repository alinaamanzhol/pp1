#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){

    int n;
    cin >> n;


    vector<int> res;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if(num == 1)
        {
            int value;
            cin >> value;
            res.push_back(value);
        }
        else if(num == 2)
        {
            reverse(res.begin(), res.end());
        }
    }

    for(int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << " ";
    }

    return 0;
}