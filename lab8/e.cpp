#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){

    int n;
    cin >> n;

    map<string , int> num;
    string phonenum;

    for(int i = 0; i < n; i++)
    {
        
        cin >> phonenum;
        num[phonenum]++;
    }

    int cnt = 0;

    for(map<string, int>::const_iterator it = num.begin(); it != num.end(); it++)
    {
        if(it->second == 3) cnt++;
    }

    cout << cnt << endl;



    return 0;
}