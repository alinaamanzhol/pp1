#include <iostream>
#include <map>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<int, int> sum_count;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + b;
        

        cout << sum_count[sum] << endl;
        sum_count[sum]++;
    }

    return 0;
}