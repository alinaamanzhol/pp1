#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;



int main()
{

    int n, m;
    cin >> n >> m;


    vector<vector<int> > v(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<int> v2;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            v2.emplace_back(v[i][j]);
        }
    }

    sort(v2.begin(), v2.end());

    int index = 0;
    for(int i = 0; i < n; i++)  
    {
        for(int j = 0; j < m; j++)
        {
            v[i][j] = v2[index++];
        }
    }

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    


    return 0;
}