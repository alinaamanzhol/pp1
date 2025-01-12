#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    int max = 0;
    int cnt = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) > max)
        {
            max = v.at(i);
            cnt = 1;
        }

        else if(max == v.at(i))
        {
            cnt++;
        }
        
    }

    cout << cnt;

    return 0;
}