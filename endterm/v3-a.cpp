#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a % 2 == 0)
        {
            even.push_back(a);
        }
        else
        {
            odd.push_back(a * a);
        }
    }

    sort(even.begin(), even.end());
    
    if(!even.empty())
    {
        cout << even.at(0) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    int sumOdd = 0;
    for(int i = 0; i < odd.size(); i++)
    {
        sumOdd += odd.at(i);
    }
    cout << sumOdd << endl;
    

    return 0;
}