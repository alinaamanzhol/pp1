#include <iostream>
#include <string>
#include <set>
using namespace std;

bool distinct(int num)
{
    string res = to_string(num);
    set<char> ss(res.begin(), res.end());
    if(ss.size() == res.size())
    {
        return true;
    }
    return false;
}

int main(){

    int num;
    cin >> num;
   
    while(true)
    {
       num++;

       if(distinct(num))
    {
        cout << num << endl;
        break;
    }
       
    }
    
    
    return 0;
}