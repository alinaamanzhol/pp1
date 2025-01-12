#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool CompareTimes(const pair<int, pair<int, int> > &a, const pair<int, pair<int, int> > &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }

    if (a.second.first != b.second.first)
    {
        return a.second.first < b.second.first;
    }

    return a.second.second < b.second.second;
}


void bubblesort(vector<pair<int, pair<int, int> > > &v)
{
    int n = v.size();
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(!CompareTimes(v[j], v[j + 1]))
            {
                swap(v[j], v[j + 1]);
            }
        }
    }

}

int main(){

    vector<pair<int, pair<int, int> > > v;

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int hours, minutes, seconds;
        cin >> hours >> minutes >> seconds;

        v.emplace_back(make_pair(hours, make_pair(minutes, seconds)));
    }

    bubblesort(v);

    for(int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }



    return 0;
}