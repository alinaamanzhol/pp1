#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    int count[10] = {0};

    

    for(int i = 0; i < s.size; i++)
    {
        count[s[i] - '0']++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(count[i] > 0) cout << i << ":" << " " << count[i] << endl;
    }




    return 0;
}