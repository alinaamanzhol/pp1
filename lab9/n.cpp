#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int n;
    int m;
    cin >> n >> m;

    vector<int> one;
    vector<int> two;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        one.push_back(a);
    }

    for(int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        two.push_back(k);
    }

    vector<int>::iterator nn = unique(one.begin(), one.end());
    one.erase(nn, one.end());

    vector<int>::iterator mm = unique(two.begin(), two.end());
    two.erase(mm, two.end());

    reverse(one.begin(), one.end());
    reverse(two.begin(), two.end());

    vector<int> res;

    if(one.size() > two.size())
    {
        while(two.size() != 0)
        {
            res.push_back(one.back());
            res.push_back(two.back());
            one.pop_back();
            two.pop_back();
        }

        while(one.size() != 0)
        {
            res.push_back(one.back());
            one.pop_back();

        }
    }

    else if(one.size() < two.size())
    {
        while(one.size() != 0)
        {
            res.push_back(one.back());
            res.push_back(two.back());
            one.pop_back();
            two.pop_back();
        }

        while(two.size() != 0)
        {
            res.push_back(two.back());
            two.pop_back();

        }
    }

    else
    {
        while(one.size() != 0 || two.size() != 0)
        {
            res.push_back(one.back());
            res.push_back(two.back());
            one.pop_back();
            two.pop_back();
        }
    }

    vector<int>::iterator result = unique(res.begin(), res.end());
    res.erase(result, res.end());

    for(int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << " ";
    }

    return 0;
}