#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < n; i++)
    {
        if(v.at(i) % 2 == 0)
        {
            even.push_back(v.at(i));
        }
        else
        {
            odd.push_back(v.at(i));
        }
    }


    int sum = 0;

    if(even.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        for(int i = 1; i < even.size(); i++)
        {
            int min = even.at(0);
            if(even.at(i) < min)
            {
                min = even.at(i);
            }
            cout << min << endl;
        }
    }
    


    for(int i = 0; i < odd.size(); i++)
    {
        int sq = odd.at(i) * odd.at(i);
        sum += sq;
    }
    cout << sum << endl;
    
    return 0;
}