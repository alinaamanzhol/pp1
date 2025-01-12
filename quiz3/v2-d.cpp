#include <iostream>
using namespace std;

string game(int n)
{
    int i = 1;
    while(n > 0)
    {
        n -= i;
        if(n <= 0) 
        {
          
            return "Bob";
        }
        n -= 2 * i;
        if(n <= 0) 
        {
           
            return "Nelson";
        }
        i++;
    }
    return " ";
}

int main(){

    int n;
    cin >> n;

    cout << game(n) << endl;

    return 0;
}