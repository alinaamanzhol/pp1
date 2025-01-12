#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

bool comp(pair<pair<int, int>, double> &a, pair<pair<int, int>, double> &b)
{
    //if(a.second != b.second) 
    return a.second < b.second;
}

struct point{
    int x;
    int y;
};

int main(){
    
    point p;
    cin>>p.x;
    cin>>p.y;
    int n;
    cin >> n;


    vector<pair<pair<int, int>, double>> coor;

    for(int i = 0; i < n; i++)
    {
        int one, two;
        cin >> one >> two;
        double leng = sqrt(pow(one - p.x, 2)+(pow(two - p.y, 2)));
        coor.push_back(make_pair(make_pair(one, two), leng));
    }

    sort(coor.begin(), coor.end(), comp);

    for(vector<pair<pair<int, int>, double>>::iterator it = coor.begin(); it != coor.end(); it++)
    {
        cout << (*it).first.first << " " << (*it).first.second << endl; 
    }

    return 0;
}