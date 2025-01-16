#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){

    int n, m;
    set<int> s1;
    set<int> s2;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s1.insert(a);
    }

    for(int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        s2.insert(b); 
    }

    set<int> inters;

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(inters, inters.begin()));

    for(set<int>::iterator it = inters.begin(); it != inters.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}