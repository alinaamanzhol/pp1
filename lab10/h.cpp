#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){

    int n;
    cin >> n;
    unordered_map<int, int> m;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        m[num]++;
    }

    int target;
    cin >> target;
    

    for(int i = 0; i < target; i++)
    {
        int v;
        cin >> v;
        
        if(!m.count(v))
        {
            cout << "0" << endl;
        }
        else
        {
            cout << m[v] << endl;
        }
    }



    return 0;
}