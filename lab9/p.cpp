#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

void binary(int &k)
{
    
    string num = "";
    while(k != 0)
    {
  
    if(k % 2 == 0)
    {
        num += "0";
    }
    else
    {
        num += "1";
    }
    k /= 2;
    if(k == 1) 
    {
        num += "1";
        break;
    }

    }
    reverse(num.begin(), num.end());
    cout << num << endl;
}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for_each(v.begin(), v.end(), binary);

    return 0;
}