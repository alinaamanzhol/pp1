#include <iostream>
#include <vector>
using namespace std;

int encryptData(int n, vector<int> &v, vector<int> &v3, int i = 0)
{
    if(i == n) return v3;

    v3.at(i) = v[i] | (v[i] + 1);


    Encryption(n, v, v3, i + 1)
}

int main(){

    int n;
    cin >> n;

    vector<int> k(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }

    encryptData(n, k);

    return 0;
}
