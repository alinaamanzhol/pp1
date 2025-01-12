#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    int num = stoi(t);
    int product = 1;
    bool zero = false;

    for(int i = 0; i < t.size(); i++)
    {
        int value = t[i] - '0';
        if(t[i] == 0)
        {
            zero = true;
            product = 0;
            break;

        }
        product *= value;
    }
    cout << num << " " << product << endl;
    return 0;
}