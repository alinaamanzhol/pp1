#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool palindrome(vector<int> num)
{
    vector<int> one;
    vector<int> two;
    
    if(num.size() % 2 == 0)
    {
        for(int i = 0; i < num.size() / 2; i++)
        {
            one.push_back(num[i]);
        }

        for(int i = num.size() / 2; i < num.size(); i++)
        {
            two.push_back(num[i]);
        }
    }
    else{
        for(int i = 0; i < num.size() / 2; i++)
    {
        one.push_back(num[i]);
    }
        for(int i = num.size() / 2 + 1; i < num.size(); i++)
        {
            two.push_back(num[i]);
        }
    }

    reverse(one.begin(), one.end());
    if(one == two)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    bool res = false;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if(palindrome(v))
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        while(next_permutation(v.begin(), v.end()))
        {
            if(palindrome(v))
            {
                res = true;
                break;
            }
        }
    }

    if(res)
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << "Impossible";
    }
    return 0;
}