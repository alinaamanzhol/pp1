#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(vector<int> &a, vector<int> &b)
{
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i < a.size(); i++)
    {
        sum1 += a[i];
    }

    for(int i = 0; i < b.size(); i++)
    {
        sum2 += b[i];
    }

    if(sum1 != sum2)
    {
        return sum1 < sum2;
    }
    else
    {
        int s1 = a.size();
        int s2 = b.size();
        if(s1 != s2)
        {
            return s1 < s2;
        }
        else
        {
            int count1 = 0;
            int count2 = 0;
            for(int i = 0; i < a.size(); i++)
            {
                if(a[i] > b[i])
                {
                    count1++;
                }
                else
                {
                    count2++;
                }

            }
            return count1 < count2;
        }
    }
}

int main(){

    int n;
    cin >> n;

    vector<vector<int> > arr(n);

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for(int j = 0; j < x; j++)
        {
            int k;
            cin >> k;
            arr[i].push_back(k);
        }
    }

    sort(arr.begin(), arr.end(), comp);

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}