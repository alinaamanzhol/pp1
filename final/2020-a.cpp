#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
 
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100};
    int sum = 0;

    for(int i = 0; i < 7; i++)
    {
        int a;
        cin >> a;

        sum += coins[i] * a;
    }

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        if(sum - k > 0)
        {
            cout << "Transaction accepted!" << endl;
            sum -= k;
        }

        else
        {
            cout << "Transaction stopped!" << endl;
        }
        
    }

    return 0;
}