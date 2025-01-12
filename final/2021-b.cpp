#include <iostream>
#include <map>
#include <vector>
#include <sstream>
using namespace std;
int main(){

    int count[9] = {0};
    int num;

    while(true)
    {
        cin >> num;
        if(num == 0) break;
        if(num >= 1 && num <= 9)
        {
            count[num - 1]++;
        }
    }

    for(int i = 0; i < 9; i++)
    {
        cout << count[i] << " ";
    }

    return 0;
}