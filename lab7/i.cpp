#include <iostream>
#include <set>
using namespace std;
int main(){

    int n;
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        

        if(s.find(a) == s.end())
        {
            cout << "YES" << endl;
            s.insert(a);
        }
        else cout << "NO" << endl;
    }


    return 0;
}