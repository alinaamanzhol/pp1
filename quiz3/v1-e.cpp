#include <iostream>

#include <set>
using namespace std;

int main(){

    int n;
    cin >> n;
    set<int> one;
    set<int> two;

    while(true)
    {
        int k;
        cin >> k;
        if(k == 0)
        {
            break;
        }
        one.insert(k);
    }

    while(true)
    {
        int k;
        cin >> k;
        if(k == 0)
        {
            break;
        }
        two.insert(k);
    }

    set<int> result;

    for(set<int>::iterator it = one.begin(); it != one.end(); it++)
    {
        if(two.find(*it) != two.end())
        {
            result.insert(*it);
        }
    }

    for(set<int>::iterator it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }

    set<int> res2;

    for(int i = 1; i <= n; i++)
    {
       if(one.find(i) == one.end() && (two.find(i) == two.end()))
       {
          res2.insert(i);
       }
    }

    cout << endl;

    for(set<int>::iterator it = res2.begin(); it != res2.end(); it++)
    {
        cout << *it << " ";
    }

    

    return 0;

}