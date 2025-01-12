#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int equal(int n)
{
    set<long long> v;

    for(int i = 0; i < n; i++)
    {
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;

    int lenght = (long long)((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));

    v.insert(lenght);

    }

    return v.size();
    
    

}

int main(){

    int n;
    cin >> n;
    cout << equal(n);
   

    return 0;
}